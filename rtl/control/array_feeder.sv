`timescale 1ns / 1ps

/**
 * Module: array_feeder
 * Description: Interface between memory buffers and systolic array.
 * Reads a flat word of data (e.g. 64 bits = 8 INT8 elements) from the buffer
 * and passes it through a triangular delay network to create the necessary 
 * diagonal wavefront skew required by the systolic array dataflow.
 */
module array_feeder #(
    parameter int ARRAY_DIM = 8,
    parameter int DATA_WIDTH = 8
)(
    input  logic                                clk,
    input  logic                                rst,
    input  logic                                en, // Stalls skew pipeline if low
    
    // Flat input from memory (synchronous read implies it arrives 1 cycle after addr)
    input  logic [ARRAY_DIM*DATA_WIDTH-1:0]     mem_data_in,
    
    // Skewed outputs to array boundary (flattened to avoid Icarus unpacked array bug)
    output logic [ARRAY_DIM*DATA_WIDTH-1:0]     skewed_data_out_flat
);

    // Triangular delay registers
    logic signed [DATA_WIDTH-1:0] delay_regs [ARRAY_DIM][ARRAY_DIM];

    genvar i, d;
    generate
        for (i = 0; i < ARRAY_DIM; i++) begin : gen_skew
            if (i == 0) begin
                // Row/Col 0 has 0 cycles of delay skew.
                assign skewed_data_out_flat[i*DATA_WIDTH +: DATA_WIDTH] = mem_data_in[0 +: DATA_WIDTH];
            end else begin
                // If delay is needed (i > 0), instantiate sequential shift stages
                for (d = 1; d <= i; d++) begin : delay_stages
                    always_ff @(posedge clk) begin
                        if (rst) begin
                            delay_regs[i][d] <= 0;
                        end else if (en) begin
                            if (d == 1)
                                delay_regs[i][d] <= mem_data_in[i*DATA_WIDTH +: DATA_WIDTH];
                            else
                                delay_regs[i][d] <= delay_regs[i][d-1];
                        end
                    end
                end
                // The output to the array row/col is simply the i-th delay stage
                assign skewed_data_out_flat[i*DATA_WIDTH +: DATA_WIDTH] = delay_regs[i][i];
            end
        end
    endgenerate

endmodule
