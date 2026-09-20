# Yosys synthesis script for the Systolic Accelerator
# To be run with: yosys -s synthesis.tcl

# 1. Read all SystemVerilog RTL files
read_verilog -sv ../rtl/pe/*.sv
read_verilog -sv ../rtl/array/*.sv
read_verilog -sv ../rtl/memory/*.sv
read_verilog -sv ../rtl/control/*.sv
read_verilog -sv ../rtl/axi/*.sv
read_verilog -sv ../rtl/top/*.sv

# 2. Check Hierarchy
hierarchy -check -top systolic_accelerator_top

# 3. High-level synthesis optimizations
proc
opt
fsm
opt
memory
opt

# 4. Map to internal cell library
techmap
opt

# 5. Map to basic standard cells (or Sky130 PDK if openROAD is used)
# Note: For Sky130, you would read the liberty file here via `read_liberty`
abc -g AND,NAND,OR,NOR,XOR,XNOR,DFF

# 6. Clean up unused logic
clean

# 7. Print statistics and write output netlist
stat
write_verilog synth_netlist.v
