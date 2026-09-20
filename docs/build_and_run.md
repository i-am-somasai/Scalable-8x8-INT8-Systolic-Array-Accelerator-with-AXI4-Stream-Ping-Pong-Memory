# How to Build and Run

This guide assumes you are starting on a fresh Ubuntu Linux machine.

## 1. System Requirements & Installation

First, install the open-source EDA tools and Python dependencies required to run the regressions.

### Install Basic Tools and Icarus Verilog
```bash
sudo apt update
sudo apt install -y build-essential make git
sudo apt install -y iverilog gtkwave
```

### Install Python & NumPy (Golden Model)
```bash
sudo apt install -y python3 python3-pip
pip3 install numpy
```

### Install OpenROAD Flow Tools (Optional, for Physical Design)
If you wish to synthesize the design and run the physical layout, you must install Yosys, OpenSTA, and OpenROAD. (Note: Building OpenROAD from source is complex; we recommend using the OpenLane Docker image if you intend to push to GDSII).
```bash
sudo apt install -y yosys
```

## 2. Clone the Repository

```bash
git clone https://github.com/your-username/VLSI_project.git
cd VLSI_project
```

## 3. Run the Complete Verification Suite

The repository contains a unified `Makefile` that automatically handles Python vector generation, RTL compilation, and simulation.

To run everything at once:
```bash
make sim
```

### What this command does:
1. Calls `python3 python/generate_vectors.py`. This generates random INT8 matrices, computes the expected results using NumPy, and saves them as `.hex` files in `verification/test_vectors/`.
2. Compiles all `.sv` files in `rtl/` and `tb/` using `iverilog`. It outputs a compiled binary `sim.vvp`.
3. Executes the binary `vvp sim.vvp`.
4. The testbench (`accelerator_tb.sv`) runs, injecting the vectors into the RTL and saving the RTL's output to `verification/test_vectors/C_rtl.hex`.
5. Finally, it calls `python3 python/compare_results.py`, which performs a byte-by-byte comparison of the RTL output against the NumPy output and prints `TEST PASSED`.

## 4. Viewing the Waveforms

If the simulation is successful, it will generate a large VCD (Value Change Dump) file named `accelerator.vcd` in the root directory.

To view the cycle-by-cycle waveforms:
```bash
gtkwave accelerator.vcd &
```
*Tip: Look at the `s_axis_tdata` and `m_axis_tdata` signals to see the data entering and leaving the accelerator.*

## 5. Running Synthesis and Physical Design

The scripts for ASIC implementation are located in `scripts/`. **You must modify these scripts to point to your local installation of the SKY130 PDK `.lib` and `.lef` files before running.**

### Synthesis
```bash
yosys scripts/synthesis.tcl
```
*What it does: Maps the SystemVerilog RTL to SKY130 standard cells and generates `synthesis_output.v`.*

### Static Timing Analysis
```bash
sta scripts/sta.tcl
```
*What it does: Analyzes the synthesized netlist against the constraints in `synth/constraints.sdc` to report setup/hold slack.*

### OpenROAD Flow (Placement & Routing)
```bash
openroad scripts/flow.tcl
```
*What it does: Executes Floorplanning, Power Grid insertion, Placement, Clock Tree Synthesis (CTS), and Routing.*

### PPA Extraction
Once the logs are generated, you can extract the final Power, Performance, and Area metrics:
```bash
python3 scripts/extract_ppa.py
```
