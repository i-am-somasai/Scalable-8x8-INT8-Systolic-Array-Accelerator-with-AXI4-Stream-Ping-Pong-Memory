# Technical Interview Guide

This guide provides technical questions and answers based strictly on the implemented RTL architecture, useful for VLSI / ASIC engineering interviews.

### Q: Why did you choose a systolic array architecture for this project?
**A:** Matrix multiplication requires massive data reuse. A standard Von Neumann CPU fetches data from memory for every single operation, creating a severe memory bandwidth bottleneck. A systolic array solves this by passing data locally between Processing Elements (PEs). An element of Matrix A fetched once is reused across the entire row of PEs, drastically reducing memory power and bandwidth.

### Q: Why 8x8? What does scaling to 16x16 entail?
**A:** An 8x8 array is a sweet spot for balancing theoretical throughput (64 MACs/cycle) and utilization on small matrices. Scaling to 16x16 is trivial in this codebase because it is heavily parameterized using `generate` loops. However, scaling up quadratically increases the silicon area and power, and makes clock tree routing more difficult. Additionally, if we run an 8x8 workload on a 16x16 array, 75% of the array will sit idle, hurting our PPA efficiency.

### Q: Why INT8 operands and an INT32 accumulator?
**A:** We chose INT8 because 8-bit multipliers are tiny and consume a fraction of the power of FP32 multipliers. This allows us to pack many more PEs into the same silicon area. However, the product of two 8-bit signed numbers requires 16 bits. When we add hundreds of these 16-bit products together (during multi-K tiling), they will quickly overflow a 16-bit register. We use a 32-bit signed accumulator to guarantee overflow safety.

### Q: What is an Output-Stationary dataflow?
**A:** In this design, the partial sums (Matrix C) remain "stationary" inside the PE accumulators while matrices A and B flow through the array. This is excellent for simple dot-products. When the math is done, the FSM must enter a specific `DRAIN` phase to shift the stationary data vertically out of the array.

### Q: How does K-tiling work? What happens to the accumulators?
**A:** If we multiply matrices with a `K` dimension of 16 on an 8x8 array, we must process it in two tiles. The hardware supports this seamlessly. The FSM (`accelerator_controller`) only pulses the `array_clear` signal on the *very first* tile. For the second tile, it skips the clear, meaning the new products are mathematically added to the existing partial sums.

### Q: Why use Ping-Pong Buffering?
**A:** To overlap memory latency with compute. If we only had one memory bank, the array would sit idle while the AXI bus slowly loaded data. By using two banks (Ping and Pong), the AXI bus loads Bank B while the array computes Bank A. The `buffer_controller` acts as a mutex, only swapping ownership when *both* loading and computation are complete.

### Q: How does the AXI4-Stream backpressure work?
**A:** The AXI protocol uses `TVALID` (master) and `TREADY` (slave). If the downstream slave drops `TREADY`, our accelerator must stall to avoid dropping data. Because you cannot instantly stall a fully-pipelined systolic array without massive routing congestion, we implemented a **Skid Buffer** (a 1-deep FIFO) at the AXI output. The skid buffer catches the data and asserts an internal stall back to the FSM.

### Q: What is TLAST?
**A:** `TLAST` indicates the final beat of an AXI transaction. In our architecture, the Python Golden Model asserts `TLAST` on the final K-tile. This signal propagates through the ping-pong buffers and tells the FSM, "This is the final partial sum; when you finish computing this tile, transition to the `DRAIN` phase."

### Q: What determines the latency and throughput?
**A:** 
- **Latency:** It takes 8 cycles to fill the array, `K` cycles to compute, and 8 cycles to drain the array.
- **Throughput:** While the array is full, it computes 64 MACs per cycle (for an 8x8 array).

### Q: How would you map this to an ASIC?
**A:** I would run Yosys for synthesis to map the RTL to a standard cell library (like SKY130). I would write an SDC file constraining the clock to 100MHz and defining input/output delays for the AXI bus. Then, I would use OpenROAD to initialize the floorplan, generate the PDN, place the standard cells, run Clock Tree Synthesis (CTS) to balance clock delays, and finally route the metal layers.
