# OpenROAD Flow Script
read_lef /path/to/sky130_fd_sc_hd.tlef
read_lef /path/to/sky130_fd_sc_hd_merged.lef
read_liberty /path/to/sky130_fd_sc_hd__tt_025C_1v80.lib

read_verilog synthesis_output.v
link_design systolic_accelerator_top
read_sdc synth/constraints.sdc

# Floorplan
initialize_floorplan -die_area "0 0 1000 1000" -core_area "50 50 950 950" -site unithd
place_pins -random

# PDN
add_global_connection -net VDD -inst_pattern .* -pin_pattern VPWR -power
add_global_connection -net VSS -inst_pattern .* -pin_pattern VGND -ground
# Note: full PDN generation omitted for simplicity

# Placement
global_placement -density 0.6
detailed_placement

# CTS
clock_tree_synthesis -root_buf sky130_fd_sc_hd__clkbuf_1 -buf_list "sky130_fd_sc_hd__clkbuf_1 sky130_fd_sc_hd__clkbuf_2" -sink_clustering_enable

# Routing
global_route
detailed_route

# Final reporting
report_tns
report_wns
report_power
report_design_area

# Write outputs
write_def final.def
write_verilog final.v
