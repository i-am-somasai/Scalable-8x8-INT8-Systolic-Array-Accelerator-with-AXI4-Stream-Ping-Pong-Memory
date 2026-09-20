# AXI4-Stream Interface Integration

The accelerator communicates with the outside world exclusively using the AMBA AXI4-Stream protocol. This is a unidirectional, point-to-point protocol that is industry-standard across modern SoC designs (e.g., Xilinx Zynq, ARM architectures).

## Protocol Overview
The core signals used in our implementation are:
- `TVALID`: Driven by the Master. Indicates `TDATA` is valid.
- `TREADY`: Driven by the Slave. Indicates it is ready to accept `TDATA`.
- `TDATA`: The data payload (64 bits wide).
- `TLAST`: Driven by the Master. Indicates the boundary of a transaction (the final K-tile).

### The Handshake Condition
Data is successfully transferred **only when both TVALID and TREADY are HIGH on the rising edge of the clock.**

```text
clk      : __/‾\__/‾\__/‾\__/‾\__/‾\__
TVALID   : ___/‾‾‾‾‾‾‾\___________/‾‾‾
TREADY   : ___________/‾‾‾‾‾‾‾\___/‾‾‾
Handshake:            ^ No        ^ Yes (Transfer!)
```

### Protocol Constraints & Assertions
The AXI specification forbids `TVALID` from waiting for `TREADY`. If `TVALID` goes high, it **must** remain high, and the data **must not change**, until `TREADY` is asserted and the handshake completes.
We enforce this in our design using formal SystemVerilog Assertions (`assert property`) inside the AXI wrappers to guarantee protocol compliance.

## Backpressure and Skid Buffering

In a complex SoC, the downstream consumer (e.g., a DMA engine) might stall and drop `m_axis_tready` to low. This creates **backpressure**.

If the accelerator is in the middle of a `DRAIN` phase, the systolic array is actively shifting data out. It cannot simply "stop" instantly without highly complex, area-intensive stall logic inside every PE.

To solve this, we implemented a **Skid Buffer** inside `axi_stream_output.sv`.
- A Skid Buffer is essentially a 1-deep FIFO.
- If the downstream `TREADY` falls low, the skid buffer captures the incoming data from the array into a local register.
- It then asserts a stall signal (`internal_ready = 0`) back to the FSM. 
- The FSM pauses the `DRAIN` state. 
- When the external `TREADY` goes high again, the skid buffer dumps its registered data and un-pauses the FSM.

This guarantees zero data loss and completely decouples external bus stalls from the systolic core timing.

## Data Packing & Byte Ordering

The AXI bus is 64 bits wide. 
- For an 8x8 INT8 array, 1 row of a matrix consists of 8 elements * 8 bits = 64 bits.
- This perfectly matches the AXI width, meaning 1 AXI beat = 1 row/column of data.

### Matrix A (Transposed)
The mathematical operation requires Matrix A to be fed row-by-row into the left side of the array. To simplify the hardware, we assume the CPU/DMA pre-transposes Matrix A in memory before streaming it. 
Therefore, `s_axis_tdata` receives Column 0 of Matrix A, then Column 1, etc.
- The 0th element of the column maps to `TDATA[7:0]`.
- The 7th element of the column maps to `TDATA[63:56]`.

### Transaction Boundaries (TLAST)
When processing massive matrices, they are split into `K`-tiles. The FSM seamlessly accumulates these tiles. 
To tell the FSM "this is the final tile; stop accumulating and output the result", the Master asserts `TLAST` high during the 8th beat (the final row) of Matrix B of the final tile. The FSM respects this and transitions to the `DRAIN` phase.
