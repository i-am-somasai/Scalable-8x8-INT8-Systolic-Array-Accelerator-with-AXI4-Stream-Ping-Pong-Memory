`timescale 1ns / 1ps

/**
 * Module: systolic_accelerator_top
 * Description: Top-level integration of the 8x8 INT8 Systolic Array Accelerator.
 * Wires together the AXI-Stream IO wrappers, ping-pong double buffering subsystem,
 * master state controller, skew buffers, and the scalable systolic grid.
 */
module systolic_accelerator_top #(
    parameter int ARRAY_ROWS      = 8,
    parameter int ARRAY_COLS      = 8,
    parameter int DATA_WIDTH      = 8,
    parameter int ACC_WIDTH       = 32,
    parameter int AXIS_DATA_WIDTH = 64,  // 8 * 8-bit
    parameter int M_AXIS_WIDTH    = 256  // 8 * 32-bit
)(
    input  logic clk,
    input  logic rst,
    
    // AXI4-Stream Input (receives Matrix A and B tiles)
    input  logic [AXIS_DATA_WIDTH-1:0] s_axis_tdata,
    input  logic                       s_axis_tvalid,
    output logic                       s_axis_tready,
    input  logic                       s_axis_tlast,
    
    // AXI4-Stream Output (transmits Matrix C tiles)
    output logic [M_AXIS_WIDTH-1:0]    m_axis_tdata,
    output logic                       m_axis_tvalid,
    input  logic                       m_axis_tready,
    output logic                       m_axis_tlast
);

    localparam int ADDR_WIDTH = $clog2(ARRAY_ROWS);

    // ----------------------------------------------------
    // Internal Signals
    // ----------------------------------------------------
    
    logic load_done, load_ready, load_is_last;
    logic compute_done, compute_ready, compute_is_last;
    logic compute_bank_sel;
    logic load_bank_sel;
    
    logic                       wr_en_a, wr_en_b;
    logic [ADDR_WIDTH-1:0]      wr_addr_a, wr_addr_b;
    logic [AXIS_DATA_WIDTH-1:0] wr_data_a, wr_data_b;
    
    logic                       rd_en;
    logic [ADDR_WIDTH-1:0]      rd_addr;
    logic                       rd_phase, rd_phase_q;
    logic [AXIS_DATA_WIDTH-1:0] rd_data_a, rd_data_b;
    
    logic array_en, array_clear, array_drain;
    logic [ARRAY_ROWS*DATA_WIDTH-1:0] flat_a_in;
    logic [ARRAY_COLS*DATA_WIDTH-1:0] flat_b_in;
    logic [ARRAY_COLS*ACC_WIDTH-1:0]  flat_acc_out;
    
    logic internal_valid, internal_ready, internal_last;

    // ----------------------------------------------------
    // SRAM Read Latency Matching
    // ----------------------------------------------------
    // The rd_phase signal must be delayed by 1 cycle to align 
    // with the synchronous SRAM read data output.
    always_ff @(posedge clk) begin
        if (rst) rd_phase_q <= 1'b0;
        else     rd_phase_q <= rd_phase;
    end
    
    assign flat_a_in = rd_phase_q ? rd_data_a : 0;
    assign flat_b_in = rd_phase_q ? rd_data_b : 0;

    // ----------------------------------------------------
    // 1. AXI Input Stream
    // ----------------------------------------------------
    axi_stream_input #(
        .AXIS_DATA_WIDTH(AXIS_DATA_WIDTH),
        .ARRAY_ROWS(ARRAY_ROWS),
        .ARRAY_COLS(ARRAY_COLS),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) axi_in_inst (
        .clk(clk), .rst(rst),
        .s_axis_tdata(s_axis_tdata), .s_axis_tvalid(s_axis_tvalid),
        .s_axis_tready(s_axis_tready), .s_axis_tlast(s_axis_tlast),
        .load_ready(load_ready), .load_done(load_done), .load_is_last(load_is_last),
        .wr_en_a(wr_en_a), .wr_addr_a(wr_addr_a), .wr_data_a(wr_data_a),
        .wr_en_b(wr_en_b), .wr_addr_b(wr_addr_b), .wr_data_b(wr_data_b)
    );

    // ----------------------------------------------------
    // 2. Buffer Controller
    // ----------------------------------------------------
    buffer_controller buf_ctrl_inst (
        .clk(clk), .rst(rst),
        .load_done(load_done), .load_is_last(load_is_last), .load_ready(load_ready),
        .compute_done(compute_done), .compute_ready(compute_ready), .compute_is_last(compute_is_last),
        .compute_bank_sel(compute_bank_sel),
        .load_bank_sel(load_bank_sel)
    );

    // ----------------------------------------------------
    // 3. Ping-Pong Buffers
    // ----------------------------------------------------
    ping_pong_buffer #(
        .WORD_WIDTH(AXIS_DATA_WIDTH), .DEPTH(ARRAY_ROWS), .ADDR_WIDTH(ADDR_WIDTH)
    ) buf_a_inst (
        .clk(clk), .rst(rst),
        .compute_bank_sel(compute_bank_sel),
        .load_bank_sel(load_bank_sel),
        .wr_en(wr_en_a), .wr_addr(wr_addr_a), .wr_data(wr_data_a),
        .rd_en(rd_en), .rd_addr(rd_addr), .rd_data(rd_data_a)
    );

    ping_pong_buffer #(
        .WORD_WIDTH(AXIS_DATA_WIDTH), .DEPTH(ARRAY_COLS), .ADDR_WIDTH(ADDR_WIDTH)
    ) buf_b_inst (
        .clk(clk), .rst(rst),
        .compute_bank_sel(compute_bank_sel),
        .load_bank_sel(load_bank_sel),
        .wr_en(wr_en_b), .wr_addr(wr_addr_b), .wr_data(wr_data_b),
        .rd_en(rd_en), .rd_addr(rd_addr), .rd_data(rd_data_b)
    );

    // ----------------------------------------------------
    // 4. Accelerator Master Controller
    // ----------------------------------------------------
    accelerator_controller #(
        .ARRAY_DIM(ARRAY_ROWS), .ADDR_WIDTH(ADDR_WIDTH)
    ) acc_ctrl_inst (
        .clk(clk), .rst(rst),
        .compute_ready(compute_ready), .compute_done(compute_done), .compute_is_last(compute_is_last),
        .rd_en(rd_en), .rd_addr(rd_addr), .rd_phase(rd_phase),
        .array_en(array_en), .array_clear(array_clear), .array_drain(array_drain),
        .internal_valid(internal_valid), .internal_ready(internal_ready), .internal_last(internal_last)
    );

    // ----------------------------------------------------
    // 5. Array Skew Feeders
    // ----------------------------------------------------
    logic [ARRAY_ROWS*DATA_WIDTH-1:0] skewed_a_flat;
    logic [ARRAY_COLS*DATA_WIDTH-1:0] skewed_b_flat;

    array_feeder #(
        .ARRAY_DIM(ARRAY_ROWS), .DATA_WIDTH(DATA_WIDTH)
    ) feeder_a (
        .clk(clk), .rst(rst), .en(array_en),
        .mem_data_in(flat_a_in), .skewed_data_out_flat(skewed_a_flat)
    );

    array_feeder #(
        .ARRAY_DIM(ARRAY_COLS), .DATA_WIDTH(DATA_WIDTH)
    ) feeder_b (
        .clk(clk), .rst(rst), .en(array_en),
        .mem_data_in(flat_b_in), .skewed_data_out_flat(skewed_b_flat)
    );

    // ----------------------------------------------------
    // 6. Systolic Array Core
    // ----------------------------------------------------
    systolic_array #(
        .ARRAY_ROWS(ARRAY_ROWS), .ARRAY_COLS(ARRAY_COLS),
        .DATA_WIDTH(DATA_WIDTH), .ACC_WIDTH(ACC_WIDTH)
    ) array_inst (
        .clk(clk), .rst(rst),
        .en(array_en), .clear(array_clear), .drain(array_drain),
        .a_in_flat(skewed_a_flat), .b_in_flat(skewed_b_flat), .flat_acc_out(flat_acc_out)
    );



    // ----------------------------------------------------
    // 7. AXI Output Stream
    // ----------------------------------------------------
    axi_stream_output #(
        .M_AXIS_DATA_WIDTH(M_AXIS_WIDTH)
    ) axi_out_inst (
        .clk(clk), .rst(rst),
        .internal_data(flat_acc_out), .internal_valid(internal_valid),
        .internal_ready(internal_ready), .internal_last(internal_last),
        .m_axis_tdata(m_axis_tdata), .m_axis_tvalid(m_axis_tvalid),
        .m_axis_tready(m_axis_tready), .m_axis_tlast(m_axis_tlast)
    );

    // ----------------------------------------------------
    // 8. SystemVerilog Assertions (Verification)
    // ----------------------------------------------------
    // synthesis translate_off
`ifndef __ICARUS__
    property p_axi_in_stable;
        @(posedge clk) disable iff (rst)
        (s_axis_tvalid && !s_axis_tready) |=> $stable(s_axis_tdata);
    endproperty
    assert property (p_axi_in_stable) else $error("AXI Protocol Violation: TDATA changed when TVALID=1 and TREADY=0");

    property p_axi_out_stable;
        @(posedge clk) disable iff (rst)
        (m_axis_tvalid && !m_axis_tready) |=> $stable(m_axis_tdata);
    endproperty
    assert property (p_axi_out_stable) else $error("AXI Output Protocol Violation: TDATA changed while stalled.");
`endif
    // synthesis translate_on

endmodule
