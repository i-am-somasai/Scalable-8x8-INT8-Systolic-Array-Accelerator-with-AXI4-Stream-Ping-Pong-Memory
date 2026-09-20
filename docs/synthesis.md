# RTL Synthesis

Synthesis is the process of translating behavioral SystemVerilog (if/else, always_ff) into a structural netlist (AND, OR, Flip-Flops) targeted at a specific technology library.

## Yosys Integration
This project uses **Yosys**, an open-source synthesis suite.
The synthesis script is located at `scripts/synthesis.tcl`.

### The Synthesis Flow
1. **Read RTL:** Yosys parses all `.sv` files.
2. **Elaboration:** It resolves parameters (e.g., expanding the 8x8 `generate` loops into 64 distinct PE instances).
3. **Technology Mapping:** It uses the internal `ABC` tool to map generic logic gates into the actual physical standard cells provided by the SKY130 PDK.
4. **Netlist Generation:** It outputs a purely structural Verilog file (`synthesis_output.v`).

## Current Implementation Status
The `scripts/synthesis.tcl` script is fully written and functional. 
However, **it cannot be executed out-of-the-box without manual configuration.**
To run it, a user must download the Open-Source SKY130 PDK and replace the placeholder `/path/to/` paths in the `.tcl` script with the absolute paths to their local `.lib` files.


