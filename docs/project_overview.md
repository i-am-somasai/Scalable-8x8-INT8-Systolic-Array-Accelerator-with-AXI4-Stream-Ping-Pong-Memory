# Project Overview

**Project Name:** INT8 Systolic Array Accelerator

## Summary
The INT8 Systolic Array Accelerator is a parameterized, output-stationary hardware matrix-multiplication engine written in SystemVerilog. It is designed to efficiently compute the core mathematical operations required by deep neural networks (DNNs). Featuring an 8x8 grid of Processing Elements (PEs), dedicated memory ping-pong buffers, and industry-standard AXI4-Stream interfaces, the accelerator maximizes data reuse and compute throughput while easily integrating into larger System-on-Chip (SoC) environments.

## What the Accelerator Does
At its core, this accelerator performs the mathematical operation **C = A × B**. 
It receives a stream of 8-bit signed integer (INT8) matrices (A and B) via an AXI4-Stream input bus. It stores them in local double-buffered memory (Ping-Pong Buffers). A finite state machine (FSM) orchestrates feeding this data into a 2D grid of 64 Processing Elements. Each PE computes Multiply-Accumulate (MAC) operations in parallel. The resulting matrix (C) is accumulated in 32-bit precision (INT32) to prevent overflow and is streamed out over an AXI4-Stream output bus.

## Why This Project Was Developed
This project was developed to bridge the gap between theoretical hardware design and practical VLSI implementation. General-purpose CPUs and GPUs struggle with the energy and bandwidth demands of modern ML workloads due to the Von Neumann bottleneck. This project demonstrates how a domain-specific architecture (a Systolic Array) solves these bottlenecks by moving data locally between compute units rather than fetching from global memory for every operation.

## Main Technologies Used
* **Hardware Description Language:** SystemVerilog (IEEE 1800-2012)
* **Simulation & Verification:** Icarus Verilog (`iverilog`), GTKWave
* **Golden Model & Data Generation:** Python 3, NumPy
* **Physical Design (ASIC Flow):** Yosys (Synthesis), OpenSTA (Timing), OpenROAD (P&R)
* **Target Technology Node:** SKY130 (130nm Open-Source PDK)

## Main Hardware Blocks
1. **AXI4-Stream Interfaces:** Handles standard handshaking and backpressure (Skid buffers) to communicate with external DMA/Memory.
2. **Ping-Pong Buffers:** Decouples the memory load phase from the compute phase, allowing the array to compute matrix $N$ while matrix $N+1$ is being loaded.
3. **Accelerator Controller:** The master FSM that synchronizes memory reads, array compute cycles, and drain phases.
4. **Array Feeder:** Skews the incoming matrix data into a triangular wavefront so data arrives at the correct PE at the correct clock cycle.
5. **Systolic Array (8x8):** A grid of 64 PEs that performs output-stationary MAC operations.

## Current Implementation Status
The project is **100% Complete and Validated** at the RTL level.
* ✅ All RTL modules are implemented and fully parameterized.
* ✅ Multi-K matrix tiling (accumulation across multiple input streams) works flawlessly.
* ✅ The testbench handles mid-transaction resets and random AXI backpressure.
* ✅ Simulation output perfectly matches the Python/NumPy Golden Model.
* ✅ Complete scripts for Synthesis, STA, and Physical Design are included.

---

# Real-World Problem

## The AI Compute Bottleneck
Modern Artificial Intelligence (AI) and Machine Learning (ML) applications—particularly Deep Neural Networks (DNNs) and Large Language Models (LLMs)—are built almost entirely upon matrix multiplication. A single inference pass can require billions of Multiply-Accumulate (MAC) operations. 

### Why Conventional Architectures Fail
General-purpose processors (CPUs) use a Von Neumann architecture. To perform `C = A * B + C`, a CPU must:
1. Fetch `A` from memory.
2. Fetch `B` from memory.
3. Fetch `C` from memory.
4. Multiply and Add.
5. Write `C` back to memory.

For a matrix multiplication, the same elements of `A` and `B` are used multiple times. A CPU wastes enormous amounts of time and energy moving this data back and forth across the memory hierarchy. The **data movement** often consumes orders of magnitude more power than the actual computation.

## Engineering Considerations
* **Compute Requirements:** ML models require immense parallel compute capability.
* **Memory Bandwidth:** You cannot compute faster than you can supply data. If an architecture requires fetching data from DRAM for every MAC, it hits the "Memory Wall."
* **Energy Efficiency:** Moving a 32-bit floating-point number from off-chip DRAM costs ~200x more energy than performing a MAC operation on chip.
* **Latency:** Real-time applications (e.g., autonomous driving, voice recognition) require deterministic, low-latency processing.

## Why INT8 Quantization?
Floating-point (FP32) arithmetic requires large, power-hungry ALUs. Research has shown that neural networks are highly resilient to lower precision. By converting weights and activations to 8-bit integers (INT8), we gain several massive advantages:
1. **4x less memory bandwidth** required compared to FP32.
2. **4x smaller memory footprint** for model storage.
3. **Dramatically smaller MAC hardware**, allowing us to fit many more compute units into the same silicon area.

---

# Proposed Solution

This project directly addresses the AI compute bottleneck by implementing a **Systolic Array Accelerator**.

## How the Architecture Solves the Problem

1. **Matrix Multiplication via Systolic Array:** Instead of relying on a centralized memory architecture, a Systolic Array consists of a grid of tiny compute units (Processing Elements). Data is fed into the edges of the array and flows rhythmically (systolically) from one PE to its neighbor.
2. **Local Data Movement:** Once a piece of data is fetched from the main memory, it is passed directly between PEs. This maximizes **data reuse**. An element of Matrix A fetched once is used by every PE in that row, drastically reducing global memory bandwidth.
3. **Parallel MAC Operations:** An 8x8 array performs 64 MAC operations simultaneously every clock cycle. 
4. **INT8 Quantization:** The accelerator natively computes using INT8 signed arithmetic, optimizing silicon area and energy efficiency. Accumulation is performed in INT32 to guarantee that the sum of products does not overflow.
5. **Ping-Pong Buffering:** The architecture includes double-buffering. The AXI4 interface loads the next matrix into "Buffer B" while the Systolic Array is actively computing using "Buffer A". This overlaps memory latency with computation, keeping the array fed and utilization near 100%.
6. **AXI4-Stream Interface:** By implementing standard AXI protocols, this accelerator is not an isolated academic exercise; it can be instantly integrated into an SoC alongside an ARM processor or a DMA controller.
