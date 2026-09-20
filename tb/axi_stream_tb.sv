`timescale 1ns / 1ps

/**
 * Testbench: axi_stream_tb
 * Description: Verifies the AXI4-Stream input FSM and AXI4-Stream output skid buffer.
 * Tests TREADY backpressure handling and TLAST semantics.
 */
module axi_stream_tb;

    localparam time CLK_PERIOD = 10ns;
    localparam int AXIS_DATA_WIDTH = 64;
    localparam int M_AXIS_DATA_WIDTH = 256;

    logic clk;
    logic rst;

    // --- Input TB Signals ---
    logic [AXIS_DATA_WIDTH-1:0] s_axis_tdata;
    logic                       s_axis_tvalid;
    logic                       s_axis_tready;
    logic                       s_axis_tlast;
    
    logic                       load_ready;
    logic                       load_done;
    logic                       wr_en_a;
    logic [2:0]                 wr_addr_a;
    logic [AXIS_DATA_WIDTH-1:0] wr_data_a;
    logic                       wr_en_b;
    logic [2:0]                 wr_addr_b;
    logic [AXIS_DATA_WIDTH-1:0] wr_data_b;

    // --- Output TB Signals ---
    logic [M_AXIS_DATA_WIDTH-1:0] internal_data;
    logic                         internal_valid;
    logic                         internal_ready;
    logic                         internal_last;
    
    logic [M_AXIS_DATA_WIDTH-1:0] m_axis_tdata;
    logic                         m_axis_tvalid;
    logic                         m_axis_tready;
    logic                         m_axis_tlast;

    // Instantiate Input Module
    axi_stream_input #(
        .AXIS_DATA_WIDTH(AXIS_DATA_WIDTH),
        .ARRAY_ROWS(8),
        .ARRAY_COLS(8),
        .ADDR_WIDTH(3)
    ) in_dut (
        .*
    );

    // Instantiate Output Module
    axi_stream_output #(
        .M_AXIS_DATA_WIDTH(M_AXIS_DATA_WIDTH)
    ) out_dut (
        .*
    );

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    initial begin
        rst = 1;
        s_axis_tdata = '0;
        s_axis_tvalid = 0;
        s_axis_tlast = 0;
        load_ready = 0;
        
        internal_data = '0;
        internal_valid = 0;
        internal_last = 0;
        m_axis_tready = 1;

        #(CLK_PERIOD * 2);
        rst = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("          AXI4-STREAM INTERFACE TESTBENCH        ");
        $display("=================================================");

        // ---------------------------------------------------------
        // 1. TEST AXI INPUT (Load A then Load B)
        // ---------------------------------------------------------
        $display("[INFO] Starting AXI Input Test...");
        load_ready = 1; // Buffer is ready
        
        // Feed 8 beats of A
        for (int i = 0; i < 8; i++) begin
            s_axis_tvalid = 1;
            s_axis_tdata = 64'hAAAA_0000 + i;
            s_axis_tlast = 0;
            do begin
                #(CLK_PERIOD);
            end while (!s_axis_tready);
            
            // Check write signals
            if (!wr_en_a) $display("[FAILED] wr_en_a not asserted at beat %0d", i);
        end
        
        // Feed 8 beats of B
        for (int i = 0; i < 8; i++) begin
            s_axis_tvalid = 1;
            s_axis_tdata = 64'hBBBB_0000 + i;
            // TLAST on final beat
            if (i == 7) s_axis_tlast = 1;
            
            do begin
                #(CLK_PERIOD);
            end while (!s_axis_tready);
            
            if (!wr_en_b) $display("[FAILED] wr_en_b not asserted at beat %0d", i);
        end
        
        s_axis_tvalid = 0;
        
        // Check if load_done pulsed
        if (load_done) $display("[PASSED] load_done successfully asserted after 16 beats.");
        else $display("[FAILED] load_done missed.");
        #(CLK_PERIOD);

        // ---------------------------------------------------------
        // 2. TEST AXI OUTPUT (Skid Buffer Backpressure)
        // ---------------------------------------------------------
        $display("[INFO] Starting AXI Output Skid Buffer Test...");
        
        // Internal array is trying to output data, but receiver stalls
        m_axis_tready = 0; 
        
        // Push word 1
        internal_valid = 1;
        internal_data  = 256'h1111;
        internal_last  = 0;
        #(CLK_PERIOD); // Data goes to primary register
        
        // Push word 2
        internal_valid = 1;
        internal_data  = 256'h2222;
        internal_last  = 1;
        #(CLK_PERIOD); // Output is stalled, so word 2 goes to skid buffer
        
        // Push word 3 (should not be accepted!)
        internal_valid = 1;
        internal_data  = 256'h3333;
        #(CLK_PERIOD);
        if (internal_ready) $display("[FAILED] internal_ready should be 0 (skid buffer full!)");
        else $display("[PASSED] Skid buffer properly backpressured internal array.");
        
        // Release stall
        internal_valid = 0;
        m_axis_tready = 1;
        
        // Word 1 pops
        #(CLK_PERIOD);
        if (m_axis_tdata == 256'h2222) $display("[PASSED] Skid buffer correctly flushed word 2.");
        else $display("[FAILED] Skid buffer flush failed.");
        
        #(CLK_PERIOD);
        
        $display("=================================================");
        $display("          AXI4-STREAM TESTBENCH END              ");
        $display("=================================================");
        $finish;
    end

endmodule
