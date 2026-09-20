# Hardware Architecture

The accelerator is highly modular, ensuring strong isolation between bus protocols, memory management, FSM control, and the datapath.

## System-Level Block Diagram

```text
    External DMA / CPU / Memory
             │
             │ AXI4-Stream (TDATA, TVALID, TREADY, TLAST)
             ▼
    ┌─────────────────────────┐
    │                         │
    │   axi_stream_input.sv   │   <-- Skids and de-couples external bus timing
    │                         │
    └────────┬────────────────┘
             │ Handshake + Data
             ▼
    ┌─────────────────────────┐   ┌─────────────────────────┐
    │                         │   │                         │
    │  ping_pong_buffer.sv (A)│   │  ping_pong_buffer.sv (B)│ <-- Overlaps Load & Compute
    │                         │   │                         │
    └────────┬────────────────┘   └────────┬────────────────┘
             │                             │
             └───────────┬─────────────────┘
                         │ 
                         │ (Read by Controller)
                         ▼
    ┌───────────────────────────────────────────────┐
    │                                               │
    │          accelerator_controller.sv            │ <-- Master FSM (INIT, COMPUTE, DRAIN)
    │                                               │
    └────────────────────┬──────────────────────────┘
                         │
                         ▼
    ┌───────────────────────────────────────────────┐
    │                                               │
    │               array_feeder.sv                 │ <-- Generates triangular data skew
    │                                               │
    └────────────────────┬──────────────────────────┘
                         │
                         ▼
    ┌───────────────────────────────────────────────┐
    │                                               │
    │              systolic_array.sv                │ <-- 8x8 Grid of systolic_pe.sv
    │                                               │
    └────────────────────┬──────────────────────────┘
                         │ 
                         ▼
    ┌─────────────────────────┐
    │                         │
    │  axi_stream_output.sv   │   <-- Skids array output to handle AXI backpressure
    │                         │
    └────────┬────────────────┘
             │ AXI4-Stream
             ▼
    External DMA / CPU / Memory
```

## Architectural Hierarchy

1. **`systolic_accelerator_top.sv`**: The top-level wrapper that instantiates all submodules and connects them. It exposes only the AXI4-Stream input and output interfaces to the outside world.
2. **`buffer_controller.sv`**: The FSM that tracks the state of the ping-pong banks. It flips the `active_bank` only when the AXI interface finishes loading a tile AND the array finishes computing a tile.
3. **`ping_pong_buffer.sv`**: Instantiated twice (once for A, once for B). Each contains two SRAM blocks. One block is connected to the AXI load interface, while the other is connected to the `accelerator_controller` read interface.
4. **`accelerator_controller.sv`**: The FSM responsible for reading data from the compute buffer, driving it into the feeder, enabling the array, and flushing the accumulators when the math is done.
5. **`array_feeder.sv`**: Instantiated twice. It contains a triangular array of shift registers to delay row/col $i$ by $i$ clock cycles.
6. **`systolic_array.sv`**: The structural grid that wires together the 64 Processing Elements. Uses SystemVerilog `generate` loops to construct the 2D mesh dynamically based on parameters.
7. **`systolic_pe.sv`**: The lowest-level leaf node. Contains the INT8 signed multiplier, INT32 accumulator, and pipeline registers.
8. **`axi_stream_input.sv` / `axi_stream_output.sv`**: Protocol adapters that implement Skid buffering. This ensures that the array is completely shielded from external bus stalls and 1-cycle AXI combinational loops.
