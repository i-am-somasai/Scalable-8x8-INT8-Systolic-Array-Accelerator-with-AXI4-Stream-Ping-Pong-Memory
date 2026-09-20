`timescale 1ns / 1ps

/**
 * Testbench: pe_tb
 * Description: Verifies the functional correctness of systolic_pe.
 * Covers:
 * - Basic MAC (Positive, Negative, Mixed signs)
 * - Corner cases (+127 * +127, -128 * -128, -128 * +127)
 * - Synchronous clear
 * - Pipeline stall (en = 0)
 * - Drain phase (shifting accumulators)
 */
module pe_tb;

    // Parameters
    localparam int DATA_WIDTH = 8;
    localparam int ACC_WIDTH  = 32;
    localparam time CLK_PERIOD = 10ns;

    // DUT Signals
    logic                          clk;
    logic                          rst;
    logic                          en;
    logic                          clear;
    logic                          drain;
    
    logic signed [DATA_WIDTH-1:0]  a_in;
    logic signed [DATA_WIDTH-1:0]  b_in;
    logic signed [ACC_WIDTH-1:0]   acc_in;
    
    logic signed [DATA_WIDTH-1:0]  a_out;
    logic signed [DATA_WIDTH-1:0]  b_out;
    logic signed [ACC_WIDTH-1:0]   acc_out;

    // Instantiate DUT
    systolic_pe #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) dut (
        .*
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Helper task to check outputs
    task check_output(
        input string test_name,
        input logic signed [ACC_WIDTH-1:0] expected_acc,
        input logic signed [DATA_WIDTH-1:0] expected_a_out,
        input logic signed [DATA_WIDTH-1:0] expected_b_out
    );
        begin
            // Wait for non-blocking assignments to resolve
            #1;
            if (acc_out !== expected_acc || a_out !== expected_a_out || b_out !== expected_b_out) begin
                $display("[FAILED] %s", test_name);
                $display("  Expected: acc=%0d, a_out=%0d, b_out=%0d", expected_acc, expected_a_out, expected_b_out);
                $display("  Got     : acc=%0d, a_out=%0d, b_out=%0d", acc_out, a_out, b_out);
            end else begin
                $display("[PASSED] %s", test_name);
            end
        end
    endtask

    // Test sequence
    initial begin
        // 1. Initialize signals
        rst = 1;
        en = 0;
        clear = 0;
        drain = 0;
        a_in = '0;
        b_in = '0;
        acc_in = '0;

        #(CLK_PERIOD * 2);
        rst = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("              PE TESTBENCH START                 ");
        $display("=================================================");

        // Test 1: Basic Positive Multiplication
        // a=10, b=5 => acc=50
        en = 1;
        a_in = 8'sd10;
        b_in = 8'sd5;
        #(CLK_PERIOD);
        check_output("Positive * Positive", 32'sd50, 8'sd10, 8'sd5);

        // Test 2: Accumulate Mixed Signs
        // a=-4, b=6 => acc = 50 + (-24) = 26
        a_in = -8'sd4;
        b_in = 8'sd6;
        #(CLK_PERIOD);
        check_output("Accumulate Negative", 32'sd26, -8'sd4, 8'sd6);

        // Test 3: Clear Accumulator
        // clear=1 during compute => acc should become 0
        clear = 1;
        a_in = 8'sd12;
        b_in = 8'sd2;
        #(CLK_PERIOD);
        check_output("Clear Active", 32'sd0, 8'sd12, 8'sd2);
        
        // Test 4: Post Clear MAC
        // Release clear, acc should accumulate newly again: 0 + (12 * 2) = 24
        clear = 0;
        #(CLK_PERIOD);
        check_output("Post Clear MAC", 32'sd24, 8'sd12, 8'sd2);

        // Test 5: Maximum Positive INT8 (+127 * +127)
        clear = 1; #(CLK_PERIOD); clear = 0; // Reset acc
        a_in = 8'sd127;
        b_in = 8'sd127;
        #(CLK_PERIOD);
        check_output("Max Pos * Max Pos (+127 * +127)", 32'sd16129, 8'sd127, 8'sd127);

        // Test 6: Minimum Negative INT8 (-128 * -128)
        clear = 1; #(CLK_PERIOD); clear = 0; // Reset acc
        a_in = -8'sd128;
        b_in = -8'sd128;
        #(CLK_PERIOD);
        check_output("Min Neg * Min Neg (-128 * -128)", 32'sd16384, -8'sd128, -8'sd128);

        // Test 7: Min * Max (-128 * +127)
        clear = 1; #(CLK_PERIOD); clear = 0; // Reset acc
        a_in = -8'sd128;
        b_in = 8'sd127;
        #(CLK_PERIOD);
        check_output("Min Neg * Max Pos (-128 * +127)", -32'sd16256, -8'sd128, 8'sd127);

        // Test 8: Zero multiplication
        a_in = 8'sd0;
        b_in = 8'sd55;
        #(CLK_PERIOD);
        // Should remain -16256
        check_output("Zero Multiplication", -32'sd16256, 8'sd0, 8'sd55);

        // Test 9: Pipeline Stall (en = 0)
        en = 0;
        a_in = 8'sd10;
        b_in = 8'sd10;
        #(CLK_PERIOD);
        // The outputs should remain unchanged from the previous cycle since en=0.
        // Previous cycle forwarded 0 and 55. Acc is still -16256.
        check_output("Pipeline Stall", -32'sd16256, 8'sd0, 8'sd55);

        // Test 10: Drain Mode
        // Drain mode shifts acc_in down to acc_out.
        drain = 1;
        en = 0;
        acc_in = 32'sd9999;
        // The inputs a_in and b_in are 10, and forwarding works during drain to flush inputs.
        #(CLK_PERIOD);
        check_output("Drain Shift", 32'sd9999, 8'sd10, 8'sd10);

        $display("=================================================");
        $display("              PE TESTBENCH END                   ");
        $display("=================================================");
        $finish;
    end

endmodule
