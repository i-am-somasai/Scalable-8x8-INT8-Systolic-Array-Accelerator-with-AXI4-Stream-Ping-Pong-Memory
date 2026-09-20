`timescale 1ns / 1ps

/**
 * Module: systolic_pe
 * Description: Processing Element (PE) for the INT8 Systolic Array.
 * 
 * Architecture: Output-Stationary
 * - Computes: acc_out <= acc_out + (a_in * b_in)
 * - Forwards A horizontally (a_out <= a_in)
 * - Forwards B vertically (b_out <= b_in)
 * - Supports a 'drain' mode to shift out the final accumulators vertically.
 * 
 * Data Types:
 * - Explicitly uses signed arithmetic for INT8.
 * - Accumulator is sized to ACC_WIDTH (default 32) to prevent overflow.
 */
module systolic_pe #(
    parameter int DATA_WIDTH = 8,
    parameter int ACC_WIDTH  = 32
)(
    input  logic                          clk,
    input  logic                          rst,     // Synchronous active-high reset
    
    // Control signals
    input  logic                          en,      // Enable computation and data forwarding
    input  logic                          clear,   // Synchronous clear for accumulator
    input  logic                          drain,   // Drain mode: shift acc_in to acc_out
    
    // Data inputs
    input  logic signed [DATA_WIDTH-1:0]  a_in,    // Operand A from left PE
    input  logic signed [DATA_WIDTH-1:0]  b_in,    // Operand B from top PE
    input  logic signed [ACC_WIDTH-1:0]   acc_in,  // Accumulator input from top PE (for drain phase)
    
    // Data outputs
    output logic signed [DATA_WIDTH-1:0]  a_out,   // Operand A to right PE
    output logic signed [DATA_WIDTH-1:0]  b_out,   // Operand B to bottom PE
    output logic signed [ACC_WIDTH-1:0]   acc_out  // Current accumulator value / Drain output
);

    // Intermediate signed product
    // 8-bit * 8-bit = 16-bit signed product
    localparam int PROD_WIDTH = 2 * DATA_WIDTH;
    logic signed [PROD_WIDTH-1:0] product;

    // Explicit signed multiplication
    assign product = a_in * b_in;
    
    logic signed [ACC_WIDTH-1:0] product_ext;
    assign product_ext = product;

    always_ff @(posedge clk) begin
        if (rst) begin
            a_out   <= 0;
            b_out   <= 0;
            acc_out <= 0;
        end else begin
            // Forwarding data: 
            // We forward when 'en' is high (active compute) or 'drain' is high (flushing array).
            // When stalled (both 0), we hold the pipeline state.
            if (en || drain) begin
                a_out <= a_in;
                b_out <= b_in;
            end

            // Accumulator datapath
            if (clear) begin
                acc_out <= 0;
            end else if (drain) begin
                // In drain phase, shift the accumulator from the PE above us down to the next PE
                acc_out <= acc_in;
            end else if (en) begin
                // Perform MAC operation.
                // The 'product' is naturally sign-extended to ACC_WIDTH during the addition
                // because 'acc_out' is of ACC_WIDTH and signed.
                acc_out <= acc_out + product_ext;
            end
        end
        
        // Debug X propagation
        if (en) begin
            if ($isunknown(a_in) || $isunknown(b_in)) begin
                $display("Time %0t: PE got X in inputs! a_in=%x, b_in=%x", $time, a_in, b_in);
            end
        end
        
        if ($isunknown(acc_out)) begin
            $display("Time %0t: PE acc_out became X! rst=%b, clear=%b, drain=%b, en=%b, acc_in=%x, product_ext=%x", $time, rst, clear, drain, en, acc_in, product_ext);
        end
    end

endmodule
