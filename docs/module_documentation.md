# Module-by-Module Documentation

This section provides a detailed breakdown of every significant SystemVerilog module in the repository.

## 1. `systolic_accelerator_top.sv`
* **Path:** `rtl/top/systolic_accelerator_top.sv`
* **Purpose:** The outermost wrapper of the IP core. It instantiates the AXI wrappers, Ping-Pong buffers, array feeders, the systolic array, and the control FSMs, tying them all together into a unified accelerator.
* **Parameters:** `AXIS_DATA_WIDTH` (default 64), `ARRAY_DIM` (default 8).
* **Inputs:** `clk`, `rst`, `s_axis_tdata`, `s_axis_tvalid`, `s_axis_tlast`, `m_axis_tready`.
* **Outputs:** `s_axis_tready`, `m_axis_tdata`, `m_axis_tvalid`, `m_axis_tlast`.
* **Design Decision:** The top module contains absolutely no logic. It exists purely as a structural wrapper to ensure physical design tools can easily parse the hierarchy.

## 2. `systolic_pe.sv`
* **Path:** `rtl/pe/systolic_pe.sv`
* **Purpose:** The core Processing Element that executes the math.
* **Parameters:** `DATA_WIDTH` (8), `ACC_WIDTH` (32).
* **Inputs:** `a_in`, `b_in` (INT8 operands), `acc_in` (INT32 for drain phase), `en`, `clear`, `drain`.
* **Outputs:** `a_out`, `b_out`, `acc_out`.
* **Internal Operation:** 
  1. Computes a signed 16-bit intermediate product (`a_in * b_in`).
  2. If `en` is high, accumulates product into a 32-bit register (`acc_out`).
  3. If `clear` is high, resets `acc_out` to 0.
  4. If `drain` is high, acts as a vertical shift register (`acc_out <= acc_in`).
  5. Registers `a_in` to `a_out` and `b_in` to `b_out` on every enabled cycle to propagate data across the array.

## 3. `systolic_array.sv`
* **Path:** `rtl/array/systolic_array.sv`
* **Purpose:** Dynamically generates the 2D grid of PEs based on parameters.
* **Parameters:** `ARRAY_ROWS`, `ARRAY_COLS`, `DATA_WIDTH`, `ACC_WIDTH`.
* **Internal Operation:** Uses standard SystemVerilog `generate` loops. It maps the flattened 1D input arrays (`a_in_flat`, `b_in_flat`) onto the 2D grid boundaries. It chains the output of PE(row, col) to PE(row, col+1) for `A`, and PE(row+1, col) for `B`. 

## 4. `array_feeder.sv`
* **Path:** `rtl/control/array_feeder.sv`
* **Purpose:** Generates the required triangular data skew to ensure systolic dataflow.
* **Inputs:** `mem_data_in` (flat 64-bit row/col from memory).
* **Outputs:** `skewed_data_out_flat` (skewed 64-bit row/col to array).
* **Internal Operation:** Generates an array of shift registers. Index 0 has 0 delay. Index 1 has 1 cycle delay. Index 7 has 7 cycles of delay.

## 5. `accelerator_controller.sv`
* **Path:** `rtl/control/accelerator_controller.sv`
* **Purpose:** The Master FSM that drives the compute pipeline.
* **Internal Operation:**
  - `IDLE`: Waits for `compute_ready` from the buffer controller.
  - `INIT`: Pulses `array_clear` for 1 cycle (only if `is_first_tile` is high) to zero the accumulators safely.
  - `COMPUTE`: A 25-cycle sequence. Reads from the SRAM for 8 cycles. Asserts `array_en` to pump the data through the array. 
  - `DRAIN`: An 8-cycle sequence. Asserts `array_drain` to shift the accumulators vertically down to the AXI output.

## 6. `ping_pong_buffer.sv`
* **Path:** `rtl/memory/ping_pong_buffer.sv`
* **Purpose:** Double-buffered local SRAM.
* **Internal Operation:** Contains two distinct arrays (`bank0` and `bank1`). Uses `compute_bank_sel` to route the compute logic's read address to the correct bank, and `load_bank_sel` to route the AXI logic's write address to the other bank. Implements a strictly synchronous read to accurately model real ASIC SRAM macros.

## 7. `buffer_controller.sv`
* **Path:** `rtl/memory/buffer_controller.sv`
* **Purpose:** Acts as the semaphore/mutex manager for the ping-pong buffers.
* **Internal Operation:** Listens for `load_done` from AXI, and `compute_done` from the FSM. Only when both are true (meaning a tile has been fully loaded AND the previous tile has been fully computed) does it flip the `active_bank` bit and lower `load_ready`/`compute_ready` until the next cycle.

## 8. `axi_stream_input.sv` / `axi_stream_output.sv`
* **Path:** `rtl/axi/`
* **Purpose:** Protocol translators that shield the compute core from AXI bus irregularities.
* **Internal Operation:** Implements a Skid Buffer (a 1-deep FIFO). This completely cuts combinational paths between `TREADY` and `TVALID`, ensuring the design effortlessly meets setup/hold timing during Physical Design while allowing seamless backpressure stalling.
