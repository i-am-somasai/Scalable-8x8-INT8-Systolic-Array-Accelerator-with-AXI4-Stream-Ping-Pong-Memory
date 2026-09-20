# Ping-Pong Buffering

To keep the systolic array operating at peak efficiency, it cannot sit idle while waiting for the AXI bus to load data from main memory. To solve this, the accelerator uses a **Double-Buffering** scheme, often referred to as Ping-Pong Buffering.

## Architecture

There are two dedicated memory modules: one for Matrix A, and one for Matrix B.
Each memory module (`ping_pong_buffer.sv`) contains exactly two physical SRAM banks:
- **Bank 0** (The "Ping" bank)
- **Bank 1** (The "Pong" bank)

At any given moment, the hardware enforces strict separation of ownership:
- **Load Bank:** One bank is owned by the `axi_stream_input` module. Data streaming in from the bus is written here.
- **Compute Bank:** The other bank is owned by the `accelerator_controller` FSM. Data is read from here and fed into the array feeder.

## Overlap of Loading and Computation

This separation allows loading and computation to occur simultaneously.

### Timeline Example
```text
Time -------->
AXI Bus  : [Load Tile 0 -> Bank 0] [Load Tile 1 -> Bank 1] [Load Tile 2 -> Bank 0] ...
Array FSM: [    IDLE (Waiting)   ] [ Compute Tile 0 from B0] [Compute Tile 1 from B1] ...
```
While Tile 0 is actively being multiplied in the systolic array, the AXI bus is already streaming Tile 1 into the background bank. By the time the array finishes Tile 0, Tile 1 is immediately ready for computation.

## Buffer Ownership & Switching

The module `buffer_controller.sv` acts as a mutex/semaphore manager to prevent data corruption.
It maintains a single bit: `active_bank`.

- `active_bank = 0`: AXI writes to Bank 0. Compute reads from Bank 1.
- `active_bank = 1`: AXI writes to Bank 1. Compute reads from Bank 0.

### The Switching Condition
The `buffer_controller` waits for two signals before it flips the `active_bank` bit:
1. `load_done`: Asserted by the AXI input module when a full 8x8 tile has been successfully written to the Load Bank.
2. `compute_done`: Asserted by the Master FSM when it has finished pushing the previous tile through the array.

If the AXI bus is slow, `compute_done` fires first, and the array waits (`IDLE`).
If the Array is slow, `load_done` fires first, and the AXI bus applies backpressure (drops `s_axis_tready` to low) until the compute phase finishes.

This guarantees that the AXI bus can never accidentally overwrite a matrix that is actively being computed, and the array can never compute garbage un-initialized data.
