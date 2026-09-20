`timescale 1ns / 1ps

module accelerator_tb;
    localparam int CLK_PERIOD = 10ns;
    localparam int ARRAY_ROWS = 8;
    localparam int ARRAY_COLS = 8;
    localparam int DATA_WIDTH = 8;
    localparam int ACC_WIDTH  = 32;
    localparam int AXIS_DATA_WIDTH = 64;
    localparam int M_AXIS_WIDTH = 256;
    localparam int NUM_TRANSACTIONS = 8;
    localparam int MAX_TILES = 64;

    logic clk, rst;
    
    logic [AXIS_DATA_WIDTH-1:0] s_axis_tdata;
    logic                       s_axis_tvalid;
    logic                       s_axis_tready;
    logic                       s_axis_tlast;
    
    logic [M_AXIS_WIDTH-1:0]    m_axis_tdata;
    logic                       m_axis_tvalid;
    logic                       m_axis_tready;
    logic                       m_axis_tlast;

    systolic_accelerator_top #(
        .ARRAY_ROWS(ARRAY_ROWS),
        .ARRAY_COLS(ARRAY_COLS),
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH(ACC_WIDTH),
        .AXIS_DATA_WIDTH(AXIS_DATA_WIDTH),
        .M_AXIS_WIDTH(M_AXIS_WIDTH)
    ) dut (.*);

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    logic [AXIS_DATA_WIDTH-1:0] mem_A [0:(MAX_TILES*8)-1];
    logic [AXIS_DATA_WIDTH-1:0] mem_B [0:(MAX_TILES*8)-1];
    logic [31:0]                mem_K_tiles [0:NUM_TRANSACTIONS-1];
    
    int fd_out;

    // Covergroup for protocol analysis and functional coverage (Unsupported in Verilator)
`ifndef __ICARUS__
    covergroup cg_axi_fsm @(posedge clk);
        option.per_instance = 1;
        cp_valid: coverpoint s_axis_tvalid;
        cp_ready: coverpoint s_axis_tready;
        cp_last:  coverpoint s_axis_tlast;
        cross cp_valid, cp_ready;
        cross cp_valid, cp_last;
    endgroup
    cg_axi_fsm cg_inst = new();
`endif

    initial begin
        $readmemh("verification/test_vectors/A.hex", mem_A);
        $readmemh("verification/test_vectors/B.hex", mem_B);
        
        // Use $fopen and $fscanf for reading decimal K_tiles or use readmemh if hex
        $readmemh("verification/test_vectors/K_tiles.hex", mem_K_tiles);
        
        fd_out = $fopen("verification/test_vectors/C_rtl.hex", "w");
        
        rst = 1;
        s_axis_tvalid = 0;
        s_axis_tdata  = '0;
        s_axis_tlast  = 0;
        m_axis_tready = 1; 
        
        #(CLK_PERIOD*2) rst = 0;
        
        $display("mem_A[0] = %x", mem_A[0]);
        $display("mem_B[0] = %x", mem_B[0]);
        
        $display("=================================================");
        $display("       FULL SYSTEM ACCELERATOR TESTBENCH         ");
        $display("=================================================");
        
        // Mid-transaction reset test
        $display("[INFO] Running Mid-Transaction Reset Test...");
        @(negedge clk);
        s_axis_tvalid = 1;
        s_axis_tdata = 64'hFFFF_FFFF_FFFF_FFFF;
        do @(posedge clk); while (!s_axis_tready);
        do @(posedge clk); while (!s_axis_tready);
        s_axis_tvalid = 0;
        #(CLK_PERIOD*2);
        rst = 1;
        #(CLK_PERIOD*2);
        rst = 0;
        #(CLK_PERIOD*2);
        $display("[INFO] Reset applied. Moving to main transactions...");
        
        fork
            begin : push_thread
                int tile_ptr = 0;
                int k_tiles;
                for (int t=0; t<NUM_TRANSACTIONS; t++) begin
                    k_tiles = mem_K_tiles[t];
                    $display("[INFO] Pumping Transaction %0d (K-tiles: %0d)...", t, k_tiles);
                    
                    for (int k=0; k<k_tiles; k++) begin
                        // Push A
                        for (int i=0; i<8; i++) begin
                            s_axis_tvalid = 1;
                            s_axis_tdata  = mem_A[tile_ptr*8 + i];
                            s_axis_tlast  = 0;
                            do @(posedge clk); while (!s_axis_tready);
                            @(negedge clk); // wait to negate/change data
                            
                            if ($urandom_range(0, 100) < 20) begin
                                s_axis_tvalid = 0;
                                repeat ($urandom_range(1, 3)) @(negedge clk);
                            end
                        end
                        
                        // Push B
                        for (int i=0; i<8; i++) begin
                            s_axis_tvalid = 1;
                            s_axis_tdata  = mem_B[tile_ptr*8 + i];
                            if (i == 7 && k == k_tiles - 1) s_axis_tlast = 1;
                            else                            s_axis_tlast = 0;
                            do @(posedge clk); while (!s_axis_tready);
                            @(negedge clk); // wait to negate/change data
                        end
                        s_axis_tvalid = 0;
                        s_axis_tlast = 0;
                        
                        tile_ptr++;
                        
                        // Backpressure/delay between tiles
                        if ($urandom_range(0, 100) < 50) begin
                            repeat ($urandom_range(1, 10)) @(negedge clk);
                        end
                    end
                end
            end
            
            begin : pull_thread
                for (int t=0; t<NUM_TRANSACTIONS; t++) begin
                    for (int i=0; i<8; i++) begin
                        if ($urandom_range(0, 100) < 30) begin
                            m_axis_tready = 0;
                            repeat ($urandom_range(1, 4)) @(negedge clk);
                            m_axis_tready = 1;
                        end
                        
                        do begin
                            @(posedge clk);
                            #1;
                        end while (!(m_axis_tvalid && m_axis_tready));
                        
                        $fdisplay(fd_out, "%064x", m_axis_tdata);
                        
                        if (i == 7 && m_axis_tlast !== 1'b1)
                            $display("  [FAILED] TLAST was not asserted on the final row of trans %0d!", t);
                    end
                    $display("[INFO] Transaction %0d output drained.", t);
                end
            end
        join
        
        $fclose(fd_out);
        $display("[PASSED] Full system executed correctly.");
        $display("=================================================");
        
        #(CLK_PERIOD*10);
        $finish;
    end
    
    initial begin
        $dumpfile("accelerator.vcd");
        $dumpvars(0, accelerator_tb);
    end
endmodule
