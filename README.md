# INT8 Systolic Array Accelerator

An open-source, parameterized, output-stationary hardware matrix-multiplication engine written in SystemVerilog.

This project was built to demonstrate how domain-specific architectures solve the AI compute bottleneck. By utilizing an 8x8 grid of Processing Elements, double-buffered memory, and native AXI4-Stream interfaces, it maximizes data reuse and dramatically lowers the power required for Neural Network MAC (Multiply-Accumulate) operations.

## 🚀 Quick Start

**What is implemented?**
- A fully parameterized 8x8 Systolic Array.
- INT8 Signed Arithmetic with INT32 Accumulators to prevent overflow.
- Native Multi-K Matrix Tiling (seamlessly accumulates matrices larger than the array).
- Ping-Pong double buffering for 100% compute/load overlap.
- AXI4-Stream input/output with Skid Buffering for stall recovery.
- A Python/NumPy Golden Model for dynamic, randomized test generation.

**How do I run it?**
Ensure you have `iverilog`, `python3`, and `numpy` installed.
```bash
git clone https://github.com/your-username/VLSI_project.git
cd VLSI_project
make sim
```
*This command auto-generates randomized matrices using Python, compiles the SystemVerilog codebase, runs the RTL simulation, and automatically compares the RTL output against the NumPy Golden Model byte-for-byte.*

**Where are the results?**
If successful, the terminal will print `TEST PASSED: RTL matches Golden Model perfectly.` You can view the cycle-by-cycle waveforms by opening `accelerator.vcd` with GTKWave.

## 📚 Comprehensive Documentation

We have prepared a complete documentation set explaining this project from beginner AI concepts all the way down to physical ASIC design.

### 📖 [Read the Documentation Index](docs/README.md)

**Highlighted Sections:**
* [Project Overview & Real-World Problem](docs/project_overview.md)
* [Systolic Dataflow & Multi-K Tiling](docs/systolic_dataflow.md)
* [Hardware Architecture](docs/architecture.md)
* [Ping-Pong Buffering](docs/ping_pong_buffer.md)
* [AXI4-Stream Integration](docs/axi4_stream.md)
* [Verification & Golden Model](docs/verification.md)
* [Physical Design Flow (Synthesis, STA, P&R)](docs/physical_design.md)

## 🏗️ Repository Structure

```text
VLSI_project/
├── docs/                 <-- Comprehensive documentation (Start here!)
├── rtl/                  <-- Parameterized SystemVerilog source code
├── tb/                   <-- Master integration testbench
├── python/               <-- NumPy Golden Model and verification scripts
├── scripts/              <-- ASIC Physical Design Flow automation (Yosys/OpenROAD)
├── synth/                <-- SDC Timing Constraints
├── verification/         <-- Auto-generated test vectors and outputs
└── Makefile              <-- Unified build/run system
```

## 🛠️ Toolchain Status

- **Verification:** 100% Complete. RTL passes all randomized Multi-K tests against the Python Golden Reference Model via `iverilog`.
- **SystemVerilog Assertions & Coverage:** Implemented in code, but wrapped in `ifndef __ICARUS__` macros for compatibility with open-source simulators. Requires Verilator or commercial tools to execute.
- **ASIC Physical Design:** Scripts for Yosys (Synthesis), OpenSTA (Timing), and OpenROAD (P&R) are provided in `scripts/`. Execution requires local installation of the SKY130 PDK.

## ⚠️ Current Limitations
The architecture uses an Output-Stationary dataflow which is highly optimized for Dense Matrix Multiplication. It does not currently support Weight-Stationary modes, meaning Convolutional Neural Networks (CNNs) require software `im2col` unwrapping before streaming to the accelerator. The INT32 accumulators will eventually overflow if accumulating a `K` dimension larger than ~131,000 tiles.
