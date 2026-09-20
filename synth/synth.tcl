# Yosys synthesis script for SKY130 PDK
yosys -import

# Read all RTL files
read_verilog -sv ../rtl/pe/systolic_pe.sv
read_verilog -sv ../rtl/array/systolic_array.sv
read_verilog -sv ../rtl/memory/ping_pong_buffer.sv
read_verilog -sv ../rtl/control/array_feeder.sv
read_verilog -sv ../rtl/control/accelerator_controller.sv
read_verilog -sv ../rtl/axi/axi_stream_input.sv
read_verilog -sv ../rtl/axi/axi_stream_output.sv
read_verilog -sv ../rtl/top/systolic_accelerator_top.sv

# Elaborate top module
hierarchy -check -top systolic_accelerator_top

# High-level synthesis
synth -top systolic_accelerator_top

# Map to sky130 cells (placeholder for actual techmap if available in environment)
# dfflibmap -liberty sky130_fd_sc_hd__tt_025C_1v80.lib
# abc -liberty sky130_fd_sc_hd__tt_025C_1v80.lib

# Clean up
opt_clean -purge

# Write output netlist
write_verilog -noattr synth_netlist.v
stat

puts "Synthesis completed."
