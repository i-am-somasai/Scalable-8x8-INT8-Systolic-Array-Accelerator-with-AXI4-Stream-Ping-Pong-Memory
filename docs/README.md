# Documentation Index

Welcome to the documentation for the 8x8 INT8 Systolic Array Accelerator. 
This documentation is organized to take you from a high-level understanding of the real-world problem down to the cycle-by-cycle RTL implementation and physical design.

## Getting Started
* [Project Overview](project_overview.md) - Summary, real-world problem, and proposed solution.
* [Build and Run](build_and_run.md) - Step-by-step instructions for installing tools, compiling, and running simulations.
* [Toolchain](toolchain.md) - A breakdown of all EDA tools and software used in this project.
* [Project Structure](project_structure.md) - Directory layout and file descriptions.

## Architecture
* [Architecture Overview](architecture.md) - Complete hardware hierarchy and block diagrams.
* [RTL Design](rtl_design.md) - SystemVerilog coding style, scalability, and design decisions.
* [Systolic Dataflow](systolic_dataflow.md) - Mathematical operations, K-tiling, and cycle-by-cycle array dataflow.
* [AXI4-Stream Interface](axi4_stream.md) - Bus protocols, backpressure handling, and Skid buffering.
* [Ping-Pong Buffering](ping_pong_buffer.md) - Memory architectures, load/compute overlap, and ownership switching.

## Verification
* [Verification Architecture](verification.md) - Directed tests, random tests, coverage, and SVAs.
* [Python Golden Model](verification.md#python-golden-model) - The NumPy-based reference model and automated result comparison.

## ASIC Flow
* [Synthesis](synthesis.md) - RTL synthesis via Yosys.
* [Static Timing Analysis (STA)](timing_analysis.md) - Clock constraints and timing verification via OpenSTA.
* [Physical Design](physical_design.md) - OpenROAD flow from floorplanning to routing.
* [PPA Analysis](ppa_analysis.md) - Measurement of Performance, Power, and Area metrics.

## Advanced
* [Design Trade-offs](design_tradeoffs.md) - Discussions on array dimensions, INT8 precision, and resource utilization.
* [Limitations & Future Work](limitations_and_future_work.md) - Known boundaries of the current implementation.
* [Interview Guide](interview_guide.md) - Q&A covering the deep technical details of the design.
