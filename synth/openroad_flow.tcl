# OpenROAD Flow Script (Dummy/Template for SKY130)
#
# Since a complete OpenROAD environment with full SKY130 LEF/DEF/LIBs
# might not be installed, this script documents the exact steps required.
# If the tools are available, this will run them.

set DESIGN_NAME "systolic_accelerator_top"

puts "Starting OpenROAD physical design flow for $DESIGN_NAME"

# 1. Read libraries and technology files
set tech_lef "/usr/share/pdk/sky130A/libs.ref/sky130_fd_sc_hd/techlef/sky130_fd_sc_hd__nom.tlef"
set cell_lef "/usr/share/pdk/sky130A/libs.ref/sky130_fd_sc_hd/lef/sky130_fd_sc_hd.lef"
set lib_file "/usr/share/pdk/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"

if {[file exists $tech_lef] && [file exists $cell_lef]} {
    read_lef $tech_lef
    read_lef $cell_lef
    read_liberty $lib_file
} else {
    puts "WARNING: SKY130 PDK files not found. The flow will exit."
    # We exit gracefully because without LEFs, we can't do physical design
    exit 0
}

# 2. Read synthesized netlist and constraints
read_verilog synth_netlist.v
link_design $DESIGN_NAME
read_sdc synth/constraints.sdc

# 3. Floorplan
# Initialize floorplan with 60% utilization, aspect ratio 1.0, and 10um margins
initialize_floorplan -utilization 60 -aspect_ratio 1.0 -core_space 10
# Place pins along the boundary
place_pins -random -hor_layers met3 -ver_layers met2

# 4. Power Grid (PDN)
# Basic PDN configuration (would normally require a pdn.cfg)
add_global_connection -net VDD -inst_pattern .* -pin_pattern VPWR
add_global_connection -net VDD -inst_pattern .* -pin_pattern VPB
add_global_connection -net VSS -inst_pattern .* -pin_pattern VGND
add_global_connection -net VSS -inst_pattern .* -pin_pattern VNB

# 5. Global Placement
global_placement -density 0.6

# 6. CTS (Clock Tree Synthesis)
repair_clock_inverters
clock_tree_synthesis -root_buf sky130_fd_sc_hd__clkbuf_1 -buf_list sky130_fd_sc_hd__clkbuf_2 -wire_rc_layer met3

# 7. Detailed Placement
detailed_placement

# 8. Routing
global_route
detailed_route

# 9. Final Extraction and Reports
extract_parasitics -global_routing
report_checks -path_delay max -format full -digits 3 > reports/openroad_setup.rpt
report_checks -path_delay min -format full -digits 3 > reports/openroad_hold.rpt
report_power > reports/openroad_power.rpt

# Write outputs
write_def openroad/route.def
write_verilog openroad/route.v

puts "OpenROAD flow complete."
exit 0
