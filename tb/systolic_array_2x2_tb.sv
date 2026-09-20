`timescale 1ns / 1ps

/**
 * Testbench: systolic_array_2x2_tb
 * Description: Verifies the 2x2 Systolic Array manually.
 * 
 * Matrix Multiplication: C = A @ B
 * A = [[1, 2],
 *      [3, 4]]
 * 
 * B = [[5, 6],
 *      [7, 8]]
 * 
 * Expected C = [[19, 22],
 *               [43, 50]]
 * 
 * Skewing Logic:
 * Inputs must be skewed in time to match the systolic wavefront.
 */
module systolic_array_2x2_tb;

    localparam int DATA_WIDTH = 8;
    localparam int ACC_WIDTH  = 32;
    localparam time CLK_PERIOD = 10ns;

    logic                          clk;
    logic                          rst;
    logic                          en;
    logic                          clear;
    logic                          drain;
    
    logic signed [DATA_WIDTH-1:0]  a_in [1:0];
    logic signed [DATA_WIDTH-1:0]  b_in [1:0];
    logic signed [ACC_WIDTH-1:0]   acc_out [1:0];

    systolic_array_2x2 #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .en(en),
        .clear(clear),
        .drain(drain),
        .a_in(a_in),
        .b_in(b_in),
        .acc_out(acc_out)
    );

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    initial begin
        // Initialize
        rst = 1;
        en = 0;
        clear = 0;
        drain = 0;
        a_in[0] = '0; a_in[1] = '0;
        b_in[0] = '0; b_in[1] = '0;

        #(CLK_PERIOD * 2);
        rst = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("          2x2 SYSTOLIC ARRAY TESTBENCH           ");
        $display("=================================================");

        // Clear accumulators before starting
        clear = 1;
        #(CLK_PERIOD);
        clear = 0;
        en = 1;

        // ---------------------------------------------------------
        // COMPUTE PHASE
        // ---------------------------------------------------------
        
        // Cycle 0
        // A: row 0 starts
        // B: col 0 starts
        $display("[Cycle 0] Pumping: A(0,0)=1, B(0,0)=5");
        a_in[0] = 8'sd1; a_in[1] = 8'sd0;
        b_in[0] = 8'sd5; b_in[1] = 8'sd0;
        #(CLK_PERIOD);

        // Cycle 1
        // A: row 0 gets col 1, row 1 starts with col 0
        // B: col 0 gets row 1, col 1 starts with row 0
        $display("[Cycle 1] Pumping: A(0,1)=2, A(1,0)=3, B(1,0)=7, B(0,1)=6");
        a_in[0] = 8'sd2; a_in[1] = 8'sd3;
        b_in[0] = 8'sd7; b_in[1] = 8'sd6;
        #(CLK_PERIOD);

        // Cycle 2
        // A: row 0 done, row 1 gets col 1
        // B: col 0 done, col 1 gets row 1
        $display("[Cycle 2] Pumping: A(1,1)=4, B(1,1)=8");
        a_in[0] = 8'sd0; a_in[1] = 8'sd4;
        b_in[0] = 8'sd0; b_in[1] = 8'sd8;
        #(CLK_PERIOD);

        // Cycle 3
        // All inputs pumped, wait for last MAC to finish in PE(1,1)
        $display("[Cycle 3] Pumping: Zeros (Waiting for final MACs)");
        a_in[0] = 8'sd0; a_in[1] = 8'sd0;
        b_in[0] = 8'sd0; b_in[1] = 8'sd0;
        #(CLK_PERIOD);

        // Cycle 4
        // Array compute is fully done
        $display("[Cycle 4] Compute complete. Transition to drain.");
        en = 0;
        #(CLK_PERIOD);

        // ---------------------------------------------------------
        // DRAIN PHASE
        // ---------------------------------------------------------
        drain = 1;
        
        // First drain cycle will shift the bottom accumulators out
        // PE(1,0) and PE(1,1) represent the second row of the resulting matrix C
        #(CLK_PERIOD);
        $display("[Drain 1] acc_out[0] = %0d (Expected 43), acc_out[1] = %0d (Expected 50)", acc_out[0], acc_out[1]);
        if (acc_out[0] !== 32'sd43 || acc_out[1] !== 32'sd50) begin
            $display("  -> FAILED: Drain 1 mismatch.");
        end else begin
            $display("  -> PASSED: Row 1 of C is correct.");
        end

        // Second drain cycle will shift the top accumulators out
        // PE(0,0) and PE(0,1) represent the first row of the resulting matrix C
        #(CLK_PERIOD);
        $display("[Drain 2] acc_out[0] = %0d (Expected 19), acc_out[1] = %0d (Expected 22)", acc_out[0], acc_out[1]);
        if (acc_out[0] !== 32'sd19 || acc_out[1] !== 32'sd22) begin
            $display("  -> FAILED: Drain 2 mismatch.");
        end else begin
            $display("  -> PASSED: Row 0 of C is correct.");
        end

        drain = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("          2x2 SYSTOLIC ARRAY TESTS END           ");
        $display("=================================================");
        $finish;
    end

endmodule
