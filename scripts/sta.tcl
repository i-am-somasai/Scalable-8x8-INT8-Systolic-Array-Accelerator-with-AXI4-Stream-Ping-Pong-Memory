# OpenSTA script for Static Timing Analysis
read_liberty /path/to/sky130_fd_sc_hd__tt_025C_1v80.lib
read_verilog synthesis_output.v
read_sdc synth/constraints.sdc

link_design systolic_accelerator_top

report_checks -path_delay max -format full
report_checks -path_delay min -format full
report_tns
report_wns
report_power
