# Project Directory Structure

Below is the complete tree of the `VLSI_project` repository.

```text
VLSI_project/
├── Makefile                          <-- Master build/run script
├── README.md                         <-- Project Landing Page / Quick Start
├── constraints/                      
│   └── constraints.sdc               <-- SDC timing constraints (e.g. 100MHz clock)
├── docs/                             <-- Comprehensive project documentation
│   ├── README.md                     <-- Documentation Index
│   ├── architecture.md               <-- Hardware hierarchy & diagrams
│   ├── axi4_stream.md                <-- AXI Protocol integration
│   ├── build_and_run.md              <-- Practical user instructions
│   ├── design_tradeoffs.md           <-- Architectural decisions
│   ├── interview_guide.md            <-- Q&A for VLSI interviews
│   ├── limitations_and_future_work.md<-- Known boundaries and roadmap
│   ├── module_documentation.md       <-- Detailed RTL module specs
│   ├── physical_design.md            <-- OpenROAD flow documentation
│   ├── ping_pong_buffer.md           <-- Memory architecture
│   ├── ppa_analysis.md               <-- Power/Performance/Area measurement
│   ├── project_overview.md           <-- Problem and Solution
│   ├── project_structure.md          <-- (This file)
│   ├── rtl_design.md                 <-- SystemVerilog methodology
│   ├── synthesis.md                  <-- Yosys integration
│   ├── systolic_dataflow.md          <-- Mathematical operation & K-Tiling
│   ├── timing_analysis.md            <-- OpenSTA integration
│   ├── toolchain.md                  <-- EDA software list
│   └── verification.md               <-- Testbench & Golden Model architecture
├── python/
│   ├── compare_results.py            <-- Python script to verify RTL vs NumPy
│   └── generate_vectors.py           <-- Python Golden Model & Stimulus Generator
├── rtl/                              <-- The SystemVerilog Codebase
│   ├── array/
│   │   └── systolic_array.sv         <-- 8x8 Grid instantiation
│   ├── axi/
│   │   ├── axi_stream_input.sv       <-- AXI slave with Skid Buffer
│   │   └── axi_stream_output.sv      <-- AXI master with Skid Buffer
│   ├── control/
│   │   ├── accelerator_controller.sv <-- Master FSM (INIT, COMPUTE, DRAIN)
│   │   └── array_feeder.sv           <-- Triangular data skew registers
│   ├── memory/
│   │   ├── buffer_controller.sv      <-- Ping-Pong active bank mutex
│   │   └── ping_pong_buffer.sv       <-- Double-buffered local SRAM
│   ├── pe/
│   │   └── systolic_pe.sv            <-- Core multiply-accumulate unit
│   └── top/
│       └── systolic_accelerator_top.sv<-- Utilitarian wrapper
├── scripts/                          <-- ASIC Flow automation
│   ├── extract_ppa.py                <-- Parses logs to measure PPA
│   ├── flow.tcl                      <-- OpenROAD Placement & Routing script
│   ├── sta.tcl                       <-- OpenSTA script
│   └── synthesis.tcl                 <-- Yosys synthesis script
├── tb/
│   └── accelerator_tb.sv             <-- Master integration testbench
└── verification/                     <-- Working directory for simulation outputs
    └── test_vectors/                 <-- Auto-generated `.hex` files (A, B, C_exp, C_rtl)
```
