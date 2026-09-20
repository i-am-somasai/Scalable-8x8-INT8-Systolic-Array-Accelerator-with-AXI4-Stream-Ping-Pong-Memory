`timescale 1ns / 1ps

/**
 * Module: systolic_array_2x2
 * Description: Hardcoded 2x2 Systolic Array for incremental verification.
 * 
 * Architecture: Output-Stationary
 * - A operands propagate left-to-right.
 * - B operands propagate top-to-bottom.
 * - Accumulators stay stationary during compute.
 * - Accumulators shift top-to-bottom during drain.
 */
module systolic_array_2x2 #(
    parameter int DATA_WIDTH = 8,
    parameter int ACC_WIDTH  = 32
)(
    input  logic                          clk,
    input  logic                          rst,
    
    // Global control
    input  logic                          en,
    input  logic                          clear,
    input  logic                          drain,
    
    // Inputs at the array boundaries
    // a_in[0] feeds Row 0, a_in[1] feeds Row 1
    input  logic signed [DATA_WIDTH-1:0]  a_in [1:0],
    
    // b_in[0] feeds Col 0, b_in[1] feeds Col 1
    input  logic signed [DATA_WIDTH-1:0]  b_in [1:0],
    
    // Outputs at the bottom boundary (drain network)
    // acc_out[0] from Col 0, acc_out[1] from Col 1
    output logic signed [ACC_WIDTH-1:0]   acc_out [1:0]
);

    // Internal wires between PEs
    // A-wires: row 0 and 1, connecting col 0 to col 1
    logic signed [DATA_WIDTH-1:0] a_w_0_0to1; 
    logic signed [DATA_WIDTH-1:0] a_w_1_0to1;

    // B-wires: col 0 and 1, connecting row 0 to row 1
    logic signed [DATA_WIDTH-1:0] b_w_0_0to1;
    logic signed [DATA_WIDTH-1:0] b_w_1_0to1;

    // Accumulator wires (for draining top to bottom)
    logic signed [ACC_WIDTH-1:0]  acc_w_0_0to1;
    logic signed [ACC_WIDTH-1:0]  acc_w_1_0to1;

    // ----------------------------------------------------
    // Row 0
    // ----------------------------------------------------
    // PE (0,0)
    systolic_pe #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) pe_0_0 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .clear(clear),
        .drain(drain),
        
        .a_in(a_in[0]),
        .b_in(b_in[0]),
        .acc_in(0),       // Top boundary has no accumulator above it
        
        .a_out(a_w_0_0to1),
        .b_out(b_w_0_0to1),
        .acc_out(acc_w_0_0to1)
    );

    // PE (0,1)
    systolic_pe #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) pe_0_1 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .clear(clear),
        .drain(drain),
        
        .a_in(a_w_0_0to1), // From PE(0,0)
        .b_in(b_in[1]),
        .acc_in(0),       // Top boundary
        
        .a_out(),          // Right boundary (unconnected)
        .b_out(b_w_1_0to1),
        .acc_out(acc_w_1_0to1)
    );

    // ----------------------------------------------------
    // Row 1
    // ----------------------------------------------------
    // PE (1,0)
    systolic_pe #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) pe_1_0 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .clear(clear),
        .drain(drain),
        
        .a_in(a_in[1]),
        .b_in(b_w_0_0to1), // From PE(0,0)
        .acc_in(acc_w_0_0to1), // From PE(0,0) for drain
        
        .a_out(a_w_1_0to1),
        .b_out(),          // Bottom boundary
        .acc_out(acc_out[0]) // Output to array boundary
    );

    // PE (1,1)
    systolic_pe #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) pe_1_1 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .clear(clear),
        .drain(drain),
        
        .a_in(a_w_1_0to1), // From PE(1,0)
        .b_in(b_w_1_0to1), // From PE(0,1)
        .acc_in(acc_w_1_0to1), // From PE(0,1) for drain
        
        .a_out(),          // Right boundary
        .b_out(),          // Bottom boundary
        .acc_out(acc_out[1]) // Output to array boundary
    );

endmodule
