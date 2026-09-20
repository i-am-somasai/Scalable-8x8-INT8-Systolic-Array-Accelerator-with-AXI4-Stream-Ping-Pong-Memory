# SDC Constraints for Systolic Accelerator Top

# Define clock (Target: 100 MHz -> 10 ns period)
create_clock -name clk -period 10.0 [get_ports {clk}]

# Clock uncertainty
set_clock_uncertainty 0.5 [get_clocks {clk}]

# Input delays
set_input_delay -clock clk 2.0 [get_ports {rst}]
set_input_delay -clock clk 2.0 [get_ports {s_axis_tdata}]
set_input_delay -clock clk 2.0 [get_ports {s_axis_tvalid}]
set_input_delay -clock clk 2.0 [get_ports {s_axis_tlast}]
set_input_delay -clock clk 2.0 [get_ports {m_axis_tready}]

# Output delays
set_output_delay -clock clk 2.0 [get_ports {s_axis_tready}]
set_output_delay -clock clk 2.0 [get_ports {m_axis_tdata}]
set_output_delay -clock clk 2.0 [get_ports {m_axis_tvalid}]
set_output_delay -clock clk 2.0 [get_ports {m_axis_tlast}]

# Set max transition and capacitance
set_max_transition 1.5 [current_design]
set_max_capacitance 50.0 [current_design]
