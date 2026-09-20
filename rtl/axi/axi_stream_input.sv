`timescale 1ns / 1ps

/**
 * Module: axi_stream_input
 * Description: Receives a tile of Matrix A and Matrix B via AXI4-Stream.
 * Protocol: 
 *   - Expects ARRAY_ROWS beats of Matrix A.
 *   - Followed by ARRAY_COLS beats of Matrix B.
 *   - s_axis_tlast must be asserted on the final beat of Matrix B.
 *   - Safely backpressures using s_axis_tready if the Ping-Pong buffer is not ready.
 * 
 * Packing:
 *   - 64-bit TDATA contains 8 x 8-bit INT8 elements.
 *   - Element 0 is TDATA[7:0].
 */
module axi_stream_input #(
    parameter int AXIS_DATA_WIDTH = 64,
    parameter int ARRAY_ROWS      = 8,
    parameter int ARRAY_COLS      = 8,
    parameter int ADDR_WIDTH      = 3
)(
    input  logic clk,
    input  logic rst,
    
    // AXI4-Stream Input
    input  logic [AXIS_DATA_WIDTH-1:0] s_axis_tdata,
    input  logic                       s_axis_tvalid,
    output logic                       s_axis_tready,
    input  logic                       s_axis_tlast,
    
    // Buffer Controller Interface
    input  logic                       load_ready,
    output logic                       load_done,
    output logic                       load_is_last,
    
    // Ping-Pong Buffer Write Interfaces
    output logic                       wr_en_a,
    output logic [ADDR_WIDTH-1:0]      wr_addr_a,
    output logic [AXIS_DATA_WIDTH-1:0] wr_data_a,
    
    output logic                       wr_en_b,
    output logic [ADDR_WIDTH-1:0]      wr_addr_b,
    output logic [AXIS_DATA_WIDTH-1:0] wr_data_b
);

    typedef enum logic [1:0] {
        IDLE   = 2'b00,
        LOAD_A = 2'b01,
        LOAD_B = 2'b10
    } state_t;
    
    state_t state, next_state;
    logic [ADDR_WIDTH:0] beat_cnt, next_beat_cnt;

    always_ff @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            beat_cnt <= 0;
        end else begin
            state <= next_state;
            beat_cnt <= next_beat_cnt;
        end
    end
    
    assign wr_addr_a = beat_cnt[ADDR_WIDTH-1:0];
    assign wr_addr_b = beat_cnt[ADDR_WIDTH-1:0];

    always_comb begin
        next_state    = state;
        next_beat_cnt = beat_cnt;
        
        s_axis_tready = 1'b0;
        load_done     = 1'b0;
        load_is_last  = 1'b0;
        
        wr_en_a = 1'b0;
        wr_data_a = s_axis_tdata;
        
        wr_en_b = 1'b0;
        wr_data_b = s_axis_tdata;

        case (state)
            IDLE: begin
                if (load_ready) begin
                    next_state = LOAD_A;
                    next_beat_cnt = 0;
                end
            end
            
            LOAD_A: begin
                s_axis_tready = 1'b1; // We have a buffer ready
                if (s_axis_tvalid && s_axis_tready) begin
                    wr_en_a = 1'b1;
                    if (beat_cnt == ARRAY_ROWS - 1) begin
                        next_state = LOAD_B;
                        next_beat_cnt = 0;
                    end else begin
                        next_beat_cnt = beat_cnt + 1;
                    end
                end
            end
            
            LOAD_B: begin
                s_axis_tready = 1'b1;
                if (s_axis_tvalid && s_axis_tready) begin
                    wr_en_b = 1'b1;
                    if (beat_cnt == ARRAY_COLS - 1) begin
                        load_done = 1'b1;
                        load_is_last = s_axis_tlast; // Indicates this is the final K-tile
                        
                        next_state = IDLE;
                        next_beat_cnt = 0;
                    end else begin
                        next_beat_cnt = beat_cnt + 1;
                    end
                end
            end
        endcase
    end

    // ----------------------------------------------------
    // SystemVerilog Assertions (AXI4-Stream Protocol)
    // ----------------------------------------------------
`ifndef __ICARUS__
    // AXI protocol: TDATA must remain stable when TVALID is asserted but TREADY is low
    property p_tdata_stable;
        @(posedge clk) disable iff (rst)
        (s_axis_tvalid && !s_axis_tready) |=> ($stable(s_axis_tdata) && s_axis_tvalid);
    endproperty
    assert property (p_tdata_stable) else $error("AXI Protocol Violation: TDATA changed while TVALID=1 and TREADY=0");

    // AXI protocol: TLAST must remain stable when TVALID is asserted but TREADY is low
    property p_tlast_stable;
        @(posedge clk) disable iff (rst)
        (s_axis_tvalid && !s_axis_tready) |=> ($stable(s_axis_tlast));
    endproperty
    assert property (p_tlast_stable) else $error("AXI Protocol Violation: TLAST changed while TVALID=1 and TREADY=0");
`endif

endmodule
