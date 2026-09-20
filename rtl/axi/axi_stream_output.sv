`timescale 1ns / 1ps

/**
 * Module: axi_stream_output
 * Description: Outputs the computed Matrix C tile via AXI4-Stream.
 * Implements a standard Skid Buffer to provide flawless TREADY backpressure
 * without introducing combinatorial logic loops.
 * 
 * Width: M_AXIS_DATA_WIDTH default 256 bits (8 accumulators x 32 bits).
 */
module axi_stream_output #(
    parameter int M_AXIS_DATA_WIDTH = 256
)(
    input  logic clk,
    input  logic rst,
    
    // Internal interface from array drain FSM
    input  logic [M_AXIS_DATA_WIDTH-1:0] internal_data,
    input  logic                         internal_valid,
    output logic                         internal_ready,
    input  logic                         internal_last, // Asserts on final drain cycle
    
    // AXI4-Stream Output
    output logic [M_AXIS_DATA_WIDTH-1:0] m_axis_tdata,
    output logic                         m_axis_tvalid,
    input  logic                         m_axis_tready,
    output logic                         m_axis_tlast
);

    // Primary output registers
    logic [M_AXIS_DATA_WIDTH-1:0] data_reg;
    logic                         last_reg;
    logic                         valid_reg;
    
    // Skid buffer registers
    logic [M_AXIS_DATA_WIDTH-1:0] skid_data_reg;
    logic                         skid_last_reg;
    logic                         skid_valid_reg;

    // We can accept data internally if the skid buffer is empty
    assign internal_ready = !skid_valid_reg;

    always_ff @(posedge clk) begin
        if (rst) begin
            valid_reg      <= 1'b0;
            skid_valid_reg <= 1'b0;
            
            data_reg       <= {M_AXIS_DATA_WIDTH{1'b0}};
            last_reg       <= 1'b0;
            skid_data_reg  <= {M_AXIS_DATA_WIDTH{1'b0}};
            skid_last_reg  <= 1'b0;
        end else begin
            // Scenario 1: The AXI interface accepts data (or is currently empty)
            if (m_axis_tready || !valid_reg) begin
                // If skid buffer has data, flush it to the primary output
                if (skid_valid_reg) begin
                    valid_reg      <= 1'b1;
                    data_reg       <= skid_data_reg;
                    last_reg       <= skid_last_reg;
                    skid_valid_reg <= 1'b0; // Skid buffer is now empty
                end 
                // Otherwise, pass internal data straight through
                else if (internal_valid && internal_ready) begin
                    valid_reg <= 1'b1;
                    data_reg  <= internal_data;
                    last_reg  <= internal_last;
                end 
                // No data available
                else begin
                    valid_reg <= 1'b0;
                end
            end 
            // Scenario 2: The AXI interface is stalled, but new data arrived
            else if (internal_valid && internal_ready) begin
                // "Skid" the incoming data into the secondary buffer
                skid_valid_reg <= 1'b1;
                skid_data_reg  <= internal_data;
                skid_last_reg  <= internal_last;
            end
        end
    end

    // Drive the AXI outputs
    assign m_axis_tvalid = valid_reg;
    assign m_axis_tdata  = data_reg;
    assign m_axis_tlast  = last_reg;

    // ----------------------------------------------------
    // SystemVerilog Assertions (AXI4-Stream Protocol)
    // ----------------------------------------------------
`ifndef __ICARUS__
    // AXI protocol: TDATA must remain stable when TVALID is asserted but TREADY is low
    property p_m_tdata_stable;
        @(posedge clk) disable iff (rst)
        (m_axis_tvalid && !m_axis_tready) |=> ($stable(m_axis_tdata) && m_axis_tvalid);
    endproperty
    assert property (p_m_tdata_stable) else $error("AXI Output Protocol Violation: TDATA changed while stalled");

    // AXI protocol: TLAST must remain stable when TVALID is asserted but TREADY is low
    property p_m_tlast_stable;
        @(posedge clk) disable iff (rst)
        (m_axis_tvalid && !m_axis_tready) |=> ($stable(m_axis_tlast));
    endproperty
    assert property (p_m_tlast_stable) else $error("AXI Output Protocol Violation: TLAST changed while stalled");
`endif

endmodule
