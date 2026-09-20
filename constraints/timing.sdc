# Basic Timing Constraints (SDC) for the Systolic Accelerator

# 1. Clock definition (Targeting 100 MHz / 10ns period)
create_clock -name clk -period 10.0 [get_ports clk]

# 2. Input Delays (Assuming AXI stream data arrives from a neighboring module)
# 2.0ns delay leaves 8.0ns for logic inside the accelerator
set_input_delay -clock clk 2.0 [get_ports {s_axis_tdata s_axis_tvalid s_axis_tlast}]
set_input_delay -clock clk 2.0 [get_ports {m_axis_tready}]

# 3. Output Delays (Setup requirements for downstream receiver)
set_output_delay -clock clk 2.0 [get_ports {m_axis_tdata m_axis_tvalid m_axis_tlast}]
set_output_delay -clock clk 2.0 [get_ports {s_axis_tready}]

# 4. Load constraints for output ports
set_load 0.05 [all_outputs]
