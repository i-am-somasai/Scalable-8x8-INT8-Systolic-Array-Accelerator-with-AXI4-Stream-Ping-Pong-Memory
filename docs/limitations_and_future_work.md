# Limitations and Future Work

This project successfully implements a parameterized INT8 Systolic Array. However, to maintain honesty and clarity, we must separate what is currently implemented from what is theoretically possible.

## Current Hardware Limitations
* **INT32 Accumulation Bottleneck:** While the array natively supports multi-K tiling, accumulating into a 32-bit register means there is a mathematical limit before integer overflow occurs. For an 8x8 array with INT8 operands (max product 16,384), you can accumulate roughly 131,000 tiles before hitting the INT32 limit. 
* **Output Stationary Rigidity:** Output stationary arrays are excellent for matrix multiplication but struggle with convolutions (CNNs) without complex data-unrolling in software (im2col). A future iteration could explore Weight-Stationary dataflow for better CNN support.

## Environment Limitations (Testing/EDA)
Because this project targets entirely open-source workflows (Icarus Verilog), some advanced EDA features are coded but cannot be executed in a standard Ubuntu/Icarus environment:
* **Functional Coverage & SVAs:** The `covergroup` and `assert property` blocks are physically written in the code. However, Icarus Verilog does not support them. They are wrapped in `` `ifndef __ICARUS__ `` macros. To execute them, the user must port the simulation to a commercial tool (Questa/VCS) or compile with Verilator.
* **ASIC Flow Execution:** The `scripts/` directory contains complete `.tcl` scripts for Yosys, OpenSTA, and OpenROAD. These cannot be executed unless the user has physically installed the massive SKY130 PDK on their machine and updated the file paths in the scripts.

## Future Work / Roadmap
1. **Weight Stationary Mode:** Add a configuration register to allow the array to switch between Output Stationary and Weight Stationary dataflows.
2. **Activation Functions:** Implement hardware ReLU or SiLU immediately after the output bus, before data is pushed back to memory.
3. **Advanced Quantization:** Implement INT32-to-INT8 requantization logic at the output, allowing the accelerator to feed its outputs directly back into its inputs for multi-layer DNN inference without CPU intervention.
