`timescale 1ns / 1ps

/**
 * Module: systolic_array
 * Description: Fully parameterized Output-Stationary Systolic Array.
 * 
 * Supports dynamically scalable configurations through instantiation (e.g., 4x4, 8x8, 16x16).
 * Default configuration: 8x8 INT8 Array.
 */
module systolic_array #(
    parameter int ARRAY_ROWS = 8,
    parameter int ARRAY_COLS = 8,
    parameter int DATA_WIDTH = 8,
    parameter int ACC_WIDTH  = 32
)(
    input  logic                          clk,
    input  logic                          rst,
    
    // Control signals
    input  logic                          en,
    input  logic                          clear,
    input  logic                          drain,   // Drain accumulators
    
    // Boundary data
    input  logic [ARRAY_ROWS*DATA_WIDTH-1:0]  a_in_flat,
    input  logic [ARRAY_COLS*DATA_WIDTH-1:0]  b_in_flat,
    output logic [ARRAY_COLS*ACC_WIDTH-1:0] flat_acc_out
);

    // Flattened internal interconnects to avoid Icarus Verilog 2D array port bugs
    logic signed [DATA_WIDTH-1:0] a_wire_flat [(ARRAY_ROWS)*(ARRAY_COLS+1)];
    logic signed [DATA_WIDTH-1:0] b_wire_flat [(ARRAY_ROWS+1)*(ARRAY_COLS)];
    logic signed [ACC_WIDTH-1:0]  acc_wire_flat [(ARRAY_ROWS+1)*(ARRAY_COLS)];

    // Helper macros/functions for flattened indexing
    `define A_IDX(r,c) ((r)*(ARRAY_COLS+1) + (c))
    `define B_IDX(r,c) ((r)*(ARRAY_COLS) + (c))
    `define ACC_IDX(r,c) ((r)*(ARRAY_COLS) + (c))


    genvar r, c;
    generate
        // ----------------------------------------------------
        // Boundary Connections
        // ----------------------------------------------------
        for (r = 0; r < ARRAY_ROWS; r++) begin : gen_a_in
            assign a_wire_flat[`A_IDX(r,0)] = a_in_flat[r*DATA_WIDTH +: DATA_WIDTH];
        end
        
        for (c = 0; c < ARRAY_COLS; c++) begin : gen_b_acc_in
            assign b_wire_flat[`B_IDX(0,c)] = b_in_flat[c*DATA_WIDTH +: DATA_WIDTH];
            assign acc_wire_flat[`ACC_IDX(0,c)] = 0; // Top row of PEs receives 0 for drain
            
            // Bottom boundary: extract final drain values and pack directly
            assign flat_acc_out[c*ACC_WIDTH +: ACC_WIDTH] = acc_wire_flat[`ACC_IDX(ARRAY_ROWS,c)];
        end

        // ----------------------------------------------------
        // PE Grid Generation
        // ----------------------------------------------------
        for (r = 0; r < ARRAY_ROWS; r++) begin : row
            for (c = 0; c < ARRAY_COLS; c++) begin : col
                systolic_pe #(
                    .DATA_WIDTH(DATA_WIDTH),
                    .ACC_WIDTH(ACC_WIDTH)
                ) pe_inst (
                    .clk(clk),
                    .rst(rst),
                    .en(en),
                    .clear(clear),
                    .drain(drain),
                    
                    // Inputs
                    .a_in(a_wire_flat[`A_IDX(r,c)]),
                    .b_in(b_wire_flat[`B_IDX(r,c)]),
                    .acc_in(acc_wire_flat[`ACC_IDX(r,c)]),
                    
                    // Outputs (driven into the next interconnect)
                    .a_out(a_wire_flat[`A_IDX(r,c+1)]),
                    .b_out(b_wire_flat[`B_IDX(r+1,c)]),
                    .acc_out(acc_wire_flat[`ACC_IDX(r+1,c)])
                );
            end
        end
    endgenerate

endmodule
