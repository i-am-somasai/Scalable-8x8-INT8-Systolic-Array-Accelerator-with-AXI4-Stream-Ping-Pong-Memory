# Static Timing Analysis (STA)

STA proves that the synthesized netlist can run at the target clock frequency without violating physics.

## OpenSTA Integration
The timing analysis script is located at `scripts/sta.tcl`. It utilizes **OpenSTA**.

### Constraints (`constraints.sdc`)
Before running STA, we must define the rules of the universe. This is done in a Synopsys Design Constraints (SDC) file located at `synth/constraints.sdc`.
Our SDC file defines:
- A target clock frequency of **100 MHz** (10ns period).
- Input delays and output delays (to model the latency of the external AXI bus).

### What STA Checks
1. **Setup Time (Max Delay):** Ensures that the longest combinational path between two flip-flops (e.g., through the multiplier and accumulator) completes in less than 10ns. If it fails, the design will sample old, incorrect data.
2. **Hold Time (Min Delay):** Ensures that the shortest combinational path is long enough that the data doesn't accidentally race through two flip-flops in a single clock cycle.

## Current Implementation Status
The `scripts/sta.tcl` and `constraints.sdc` are fully implemented. Like synthesis, the `sta.tcl` script requires the user to point it to their local SKY130 `.lib` files before execution.
