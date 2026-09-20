`timescale 1ns / 1ps

/**
 * Module: accelerator_controller
 * Description: Master FSM managing the systolic compute and drain phases.
 * Reads data from the active ping-pong compute bank, masks it to zero after 
 * the valid extraction window to clear the skew buffers, and orchestrates 
 * array computation and shifting.
 */
module accelerator_controller #(
    parameter int ARRAY_DIM  = 8,
    parameter int ADDR_WIDTH = 3
)(
    input  logic clk,
    input  logic rst,
    
    // Interface to ping_pong_controller
    input  logic compute_ready,
    output logic compute_done,
    input  logic compute_is_last,
    
    // Interface to ping_pong_buffer (Read Port)
    output logic                  rd_en,
    output logic [ADDR_WIDTH-1:0] rd_addr,
    output logic                  rd_phase, // 1 when valid data is read, 0 to flush skew pipes
    
    // Interface to Systolic Array & Skew Feeders
    output logic array_en,
    output logic array_clear,
    output logic array_drain,
    
    // Interface to Output Skid Buffer
    output logic internal_valid,
    input  logic internal_ready,
    output logic internal_last
);

    typedef enum logic [1:0] {
        IDLE    = 2'b00,
        INIT    = 2'b01,
        COMPUTE = 2'b10,
        DRAIN   = 2'b11
    } state_t;
    
    state_t state, next_state;
    logic [5:0] t_cnt, next_t_cnt; // up to 3*8 = 24
    logic is_first_tile, next_is_first_tile;

    always_ff @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            t_cnt <= 0;
            is_first_tile <= 1'b1;
        end else begin
            state <= next_state;
            t_cnt <= next_t_cnt;
            is_first_tile <= next_is_first_tile;
        end
    end
    
    assign rd_addr = t_cnt[ADDR_WIDTH-1:0];

    always_comb begin
        next_state = state;
        next_t_cnt = t_cnt;
        next_is_first_tile = is_first_tile;
        
        compute_done = 1'b0;
        rd_en        = 1'b0;
        rd_phase     = 1'b0;
        
        array_en     = 1'b0;
        array_clear  = 1'b0;
        array_drain  = 1'b0;
        
        internal_valid = 1'b0;
        internal_last  = 1'b0;

        case (state)
            IDLE: begin
                if (compute_ready) begin
                    if (is_first_tile) begin
                        next_state = INIT;
                    end else begin
                        next_state = COMPUTE;
                    end
                    next_t_cnt = 0;
                end
            end
            
            INIT: begin
                // Pulse clear to zero out the accumulators safely before data hits
                array_clear = 1'b1;
                next_state = COMPUTE;
                next_t_cnt = 0;
            end
            
            COMPUTE: begin
                // Read from memory only for the first K cycles (ARRAY_DIM cycles)
                // This covers exactly one full tile worth of inputs
                if (t_cnt < ARRAY_DIM) begin
                    rd_en = 1'b1;
                    rd_phase = 1'b1;
                end
                
                // Delay array_en by 1 cycle to account for SRAM read latency
                if (t_cnt > 0) begin
                    array_en = 1'b1;
                end
                
                // Wait extra cycles for pipeline flush
                if (t_cnt == (3 * ARRAY_DIM) + 1) begin
                    if (compute_is_last) begin
                        next_state = DRAIN;
                    end else begin
                        compute_done = 1'b1; // Free this bank, wait for next K-tile
                        next_state = IDLE;
                        next_is_first_tile = 1'b0;
                    end
                    next_t_cnt = 0;
                end else begin
                    next_t_cnt = t_cnt + 1;
                end
            end
            
            DRAIN: begin
                // 'array_drain' shifts the results down by 1 row
                // 'internal_valid' signals the output skid buffer to capture the row
                
                // We only shift and output if the downstream AXI interface is ready.
                // If backpressured (!internal_ready), we simply stall in this state.
                if (internal_ready) begin
                    array_drain = 1'b1;
                    internal_valid = 1'b1;
                    
                    if (t_cnt == ARRAY_DIM - 1) begin
                        internal_last = 1'b1;  // TLAST semantics on final row
                        compute_done = 1'b1;   // Release compute bank to ping-pong controller
                        next_state = IDLE;
                        next_is_first_tile = 1'b1; // Next transaction will be a fresh matrix
                    end else begin
                        next_t_cnt = t_cnt + 1;
                    end
                end
            end
        endcase
    end

    // ----------------------------------------------------
    // SystemVerilog Assertions (Controller FSM)
    // ----------------------------------------------------
`ifndef __ICARUS__
    property p_array_clear;
        @(posedge clk) disable iff (rst)
        (state == INIT) |-> (array_clear == 1'b1);
    endproperty
    assert property (p_array_clear) else $error("FSM Violation: array_clear not asserted in INIT");
`endif

endmodule
