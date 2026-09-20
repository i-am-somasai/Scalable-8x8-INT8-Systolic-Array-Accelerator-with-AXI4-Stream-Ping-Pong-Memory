`timescale 1ns / 1ps

/**
 * Testbench: systolic_array_tb
 * Description: Verifies the parameterized systolic array.
 * By default simulates the 8x8 configuration. Changing ARRAY_ROWS and 
 * ARRAY_COLS to 4 effortlessly tests the 4x4 configuration.
 */
module systolic_array_tb;

    // Configurable parameters
    parameter int ARRAY_ROWS = 8;
    parameter int ARRAY_COLS = 8;
    parameter int DATA_WIDTH = 8;
    parameter int ACC_WIDTH  = 32;
    parameter time CLK_PERIOD = 10ns;

    localparam int N = ARRAY_ROWS; // Assuming square for tests

    logic                          clk;
    logic                          rst;
    logic                          en;
    logic                          clear;
    logic                          drain;
    
    logic signed [DATA_WIDTH-1:0]  a_in [ARRAY_ROWS];
    logic signed [DATA_WIDTH-1:0]  b_in [ARRAY_COLS];
    logic signed [ACC_WIDTH-1:0]   acc_out [ARRAY_COLS];

    // Instantiate Parameterized Array
    systolic_array #(
        .ARRAY_ROWS(ARRAY_ROWS),
        .ARRAY_COLS(ARRAY_COLS),
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) dut (
        .*
    );

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Test matrices
    logic signed [DATA_WIDTH-1:0] A_mat [N][N];
    logic signed [DATA_WIDTH-1:0] B_mat [N][N];
    logic signed [ACC_WIDTH-1:0]  C_expected [N][N];
    logic signed [ACC_WIDTH-1:0]  C_actual [N][N];

    // Automatic Skewing Task for Matrix Multiplication
    task compute_matrices();
        int t, r, c;
        int max_cycles = 3 * N;
        
        clear = 1;
        drain = 0;
        en = 0;
        #(CLK_PERIOD);
        
        clear = 0;
        en = 1;

        // Feed data with systolic skew:
        // A(r, k) arrives at cycle r + k
        // B(k, c) arrives at cycle c + k
        for (t = 0; t < max_cycles; t++) begin
            for (r = 0; r < N; r++) begin
                if (t >= r && (t - r) < N)
                    a_in[r] = A_mat[r][t - r];
                else
                    a_in[r] = '0;
            end

            for (c = 0; c < N; c++) begin
                if (t >= c && (t - c) < N)
                    b_in[c] = B_mat[t - c][c];
                else
                    b_in[c] = '0;
            end
            
            #(CLK_PERIOD);
        end
        en = 0;
    endtask

    // Array Drain Task
    task drain_array();
        int t, c;
        drain = 1;
        // Shift out N rows. The bottom row of the matrix (N-1) comes out first.
        for (t = N - 1; t >= 0; t--) begin
            #(CLK_PERIOD);
            for (c = 0; c < N; c++) begin
                C_actual[t][c] = acc_out[c];
            end
        end
        drain = 0;
        #(CLK_PERIOD);
    endtask

    // Check Results Task
    task check_results(input string test_name);
        int r, c;
        int errors = 0;
        for (r = 0; r < N; r++) begin
            for (c = 0; c < N; c++) begin
                if (C_actual[r][c] !== C_expected[r][c]) begin
                    $display("  Mismatch at C[%0d][%0d]: Exp=%0d, Got=%0d", r, c, C_expected[r][c], C_actual[r][c]);
                    errors++;
                end
            end
        end
        if (errors == 0) $display("[PASSED] %s", test_name);
        else $display("[FAILED] %s with %0d errors.", test_name, errors);
    endtask

    initial begin
        int r, c;
        rst = 1;
        en = 0;
        clear = 0;
        drain = 0;
        for(int i=0; i<N; i++) begin
            a_in[i] = '0;
            b_in[i] = '0;
        end
        #(CLK_PERIOD*2);
        rst = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("       %0dx%0d SYSTOLIC ARRAY TESTBENCH        ", ARRAY_ROWS, ARRAY_COLS);
        $display("=================================================");

        // Test 1: Identity Matrix Multiplication
        // A = Sequential numbers, B = Identity matrix
        for(r=0; r<N; r++) begin
            for(c=0; c<N; c++) begin
                A_mat[r][c] = r*N + c + 1; // 1 to N^2
                B_mat[r][c] = (r == c) ? 8'sd1 : 8'sd0;
                C_expected[r][c] = A_mat[r][c]; // A * I = A
            end
        end
        compute_matrices();
        drain_array();
        check_results("Sequential * Identity");

        // Test 2: All 1s Matrix
        // A = 1, B = 1 => C = N for all elements
        for(r=0; r<N; r++) begin
            for(c=0; c<N; c++) begin
                A_mat[r][c] = 8'sd1;
                B_mat[r][c] = 8'sd1;
                C_expected[r][c] = N;
            end
        end
        compute_matrices();
        drain_array();
        check_results("All 1s * All 1s");

        $display("=================================================");
        $finish;
    end
endmodule
