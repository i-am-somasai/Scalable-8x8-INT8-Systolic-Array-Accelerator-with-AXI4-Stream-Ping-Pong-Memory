`timescale 1ns / 1ps

/**
 * Module: ping_pong_buffer
 * Description: Double-buffered memory for overlapping load and compute phases.
 * Implements synchronous reads for realistic SRAM modeling.
 */
module ping_pong_buffer #(
    parameter int WORD_WIDTH = 64,  // Default: 8 elements * 8 bits
    parameter int DEPTH      = 8,   // Default: K dimension
    parameter int ADDR_WIDTH = $clog2(DEPTH)
)(
    input  logic                   clk,
    input  logic                   rst,
    
    // Decoupled bank pointers
    input  logic                   compute_bank_sel, // Which bank the array is reading
    input  logic                   load_bank_sel,    // Which bank AXI is writing
    
    // Write port (Load side - driven by AXI)
    input  logic                   wr_en,
    input  logic [ADDR_WIDTH-1:0]  wr_addr,
    input  logic [WORD_WIDTH-1:0]  wr_data,
    
    // Read port (Compute side - driven by Array Controller)
    input  logic                   rd_en,
    input  logic [ADDR_WIDTH-1:0]  rd_addr,
    output logic [WORD_WIDTH-1:0]  rd_data
);

    // Two SRAM banks
    logic [WORD_WIDTH-1:0] bank0 [DEPTH-1:0];
    logic [WORD_WIDTH-1:0] bank1 [DEPTH-1:0];

    // Synchronous Read datapath
    always_ff @(posedge clk) begin
        if (rd_en) begin
            if (compute_bank_sel == 1'b0) begin
                rd_data <= bank0[rd_addr];
            end else begin
                rd_data <= bank1[rd_addr];
            end
        end else begin
            rd_data <= {WORD_WIDTH{1'b0}};
        end
    end

    // Synchronous Write datapath
    always_ff @(posedge clk) begin
        if (wr_en) begin
            if (load_bank_sel == 1'b0) begin
                bank0[wr_addr] <= wr_data;
            end else begin
                bank1[wr_addr] <= wr_data;
            end
        end
    end

endmodule
