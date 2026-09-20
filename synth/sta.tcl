# OpenSTA timing script

# Read library (using a generic SKY130 dummy or standard file if available)
# Since we might not have SKY130, we will try to read the liberty file from OpenROAD if it exists,
# otherwise we gracefully report that it's unavailable.
set lib_file "/usr/share/pdk/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib"

if {[file exists $lib_file]} {
    read_liberty $lib_file
} else {
    puts "WARNING: Liberty file not found at $lib_file. Timing analysis will fail or use default limits."
}

# Read synthesized netlist
if {[file exists "synth_netlist.v"]} {
    read_verilog synth_netlist.v
} else {
    puts "ERROR: synth_netlist.v not found. Run synthesis first."
    exit 1
}

link_design systolic_accelerator_top

# Read constraints
read_sdc synth/constraints.sdc

# Generate timing reports
report_checks -path_delay max -format full -digits 3 > reports/sta_setup.rpt
report_checks -path_delay min -format full -digits 3 > reports/sta_hold.rpt
report_power > reports/sta_power.rpt
report_wns > reports/sta_wns.rpt
report_tns > reports/sta_tns.rpt

puts "OpenSTA analysis complete."
exit 0
