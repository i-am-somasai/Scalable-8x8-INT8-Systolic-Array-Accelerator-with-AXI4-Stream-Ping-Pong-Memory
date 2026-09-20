# Design Trade-Offs

When designing computer architecture, there is no "perfect" design. Every architectural decision is a trade-off between Power, Performance, Area (PPA), and flexibility.

## 1. 8x8 vs. Larger Arrays (16x16, 256x256)
- **The Trade-off:** Throughput vs. Silicon Area & Utilization.
- **Why 8x8?** An 8x8 array is small enough to place-and-route easily without massive clock routing issues, yet large enough to demonstrate genuine systolic dataflow. 
- **The Utilization Problem:** If you build a 256x256 array (like the Google TPU v1), your theoretical throughput is massive (65,536 MACs/cycle). However, if a user tries to run a neural network layer that is only 64x64, 93% of the PEs will be burning power doing absolutely nothing. Smaller arrays offer higher utilization on small/irregular models at the cost of lower peak throughput.

## 2. INT8 vs. INT16 / FP32
- **The Trade-off:** Accuracy vs. Power/Area.
- **Why INT8?** Floating-point multipliers are massive, complicated circuits requiring complex alignment and normalization steps. INT8 multipliers are tiny combinational logic clouds. By choosing INT8, we drastically reduce Area and Power, allowing us to fit more PEs onto the chip. The trade-off is a slight loss in model accuracy, which the ML industry has largely mitigated through advanced quantization-aware training.

## 3. Ping-Pong Buffering vs. Unified Memory
- **The Trade-off:** Constant Compute vs. Memory Area.
- **Why Ping-Pong?** We doubled the required SRAM area by having a "Bank 0" and "Bank 1" for every matrix. In return, we achieve 100% compute overlap. The array never has to stall while waiting for memory to load. If we used a unified memory, the FSM would have to stall the array while the AXI bus loaded the next tile.

## 4. AXI4-Stream vs. Custom Interfaces
- **The Trade-off:** Integration ease vs. Protocol Overhead.
- **Why AXI4?** We could have used a simple "valid/data" wire pair. But standard SoC buses speak AXI. By absorbing the complexity of Skid Buffers and AXI handshaking, this IP core can be dropped into an ARM or RISC-V SoC instantly. We traded a few dozen gates of protocol overhead for massive re-usability.
