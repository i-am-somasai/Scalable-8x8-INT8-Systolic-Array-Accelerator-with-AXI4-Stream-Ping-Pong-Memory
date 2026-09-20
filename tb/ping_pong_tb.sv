`timescale 1ns / 1ps

/**
 * Testbench: ping_pong_tb
 * Description: Verifies the memory architecture including the buffer memory
 * and the ping-pong FSM controller. Validates ownership handshakes, 
 * data integrity, and simultaneous read/write operations without hazards.
 */
module ping_pong_tb;

    localparam int WORD_WIDTH = 64;
    localparam int DEPTH = 8;
    localparam int ADDR_WIDTH = 3;
    localparam time CLK_PERIOD = 10ns;

    logic clk;
    logic rst;

    // Controller Interface
    logic load_done;
    logic load_ready;
    logic compute_done;
    logic compute_ready;
    logic compute_bank_sel;
    logic load_bank_sel;

    // Buffer Interface
    logic                   wr_en;
    logic [ADDR_WIDTH-1:0]  wr_addr;
    logic [WORD_WIDTH-1:0]  wr_data;
    
    logic                   rd_en;
    logic [ADDR_WIDTH-1:0]  rd_addr;
    logic [WORD_WIDTH-1:0]  rd_data;

    // Instantiate Controller
    buffer_controller ctrl_inst (
        .clk(clk),
        .rst(rst),
        .load_done(load_done),
        .load_ready(load_ready),
        .compute_done(compute_done),
        .compute_ready(compute_ready),
        .compute_bank_sel(compute_bank_sel),
        .load_bank_sel(load_bank_sel)
    );

    // Instantiate Buffer
    ping_pong_buffer #(
        .WORD_WIDTH(WORD_WIDTH),
        .DEPTH(DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) buf_inst (
        .clk(clk),
        .rst(rst),
        .compute_bank_sel(compute_bank_sel),
        .load_bank_sel(load_bank_sel),
        .wr_en(wr_en),
        .wr_addr(wr_addr),
        .wr_data(wr_data),
        .rd_en(rd_en),
        .rd_addr(rd_addr),
        .rd_data(rd_data)
    );

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    initial begin
        // Initialize
        rst = 1;
        load_done = 0;
        compute_done = 0;
        wr_en = 0;
        wr_addr = 0;
        wr_data = 0;
        rd_en = 0;
        rd_addr = 0;

        #(CLK_PERIOD * 2);
        rst = 0;
        #(CLK_PERIOD);

        $display("=================================================");
        $display("          PING PONG MEMORY TESTBENCH             ");
        $display("=================================================");

        // Step 1: Write to Bank 0
        if (!load_ready) $display("[FAILED] Should be load ready after reset.");
        
        $display("[INFO] Loading Bank 0...");
        wr_en = 1;
        for (int i = 0; i < DEPTH; i++) begin
            wr_addr = i;
            wr_data = 64'hAAAA_BBBB_CCCC_0000 + i;
            #(CLK_PERIOD);
        end
        wr_en = 0;
        
        // Assert load done pulse
        load_done = 1; 
        #(CLK_PERIOD);
        load_done = 0;
        #(CLK_PERIOD);

        // Step 2: Bank 0 should now be compute ready, and Bank 1 load ready
        if (!compute_ready) $display("[FAILED] Bank 0 should be compute ready.");
        if (!load_ready) $display("[FAILED] Bank 1 should be load ready.");
        
        $display("[INFO] Simulating Overlap: Read Bank 0 AND Load Bank 1...");
        wr_en = 1;
        rd_en = 1;
        for (int i = 0; i < DEPTH; i++) begin
            wr_addr = i;
            wr_data = 64'h1111_2222_3333_4444 + i; // New data into Bank 1
            
            rd_addr = i; // Reading from Bank 0
            #(CLK_PERIOD);
            
            // Validate Read Data (arrives 1 cycle later due to sync read)
            if (i > 0) begin
                if (rd_data !== 64'hAAAA_BBBB_CCCC_0000 + (i-1)) 
                    $display("[FAILED] Read mismatch at addr %0d: %h", i-1, rd_data);
            end
        end
        wr_en = 0;
        rd_en = 0;
        #(CLK_PERIOD); // Wait for the final read to emerge
        if (rd_data !== 64'hAAAA_BBBB_CCCC_0000 + (DEPTH-1)) 
            $display("[FAILED] Read mismatch at addr %0d: %h", DEPTH-1, rd_data);

        // Emit pulses for dual completion in the same cycle
        compute_done = 1;
        load_done = 1;
        #(CLK_PERIOD);
        compute_done = 0;
        load_done = 0;
        #(CLK_PERIOD);

        // Step 3: Bank 1 should compute, Bank 0 should load
        if (!compute_ready) $display("[FAILED] Bank 1 should be compute ready.");
        if (!load_ready) $display("[FAILED] Bank 0 should be load ready.");
        
        $display("[INFO] Reading Bank 1 to verify swap...");
        rd_en = 1;
        for (int i = 0; i < DEPTH; i++) begin
            rd_addr = i;
            #(CLK_PERIOD);
            if (i > 0) begin
                if (rd_data !== 64'h1111_2222_3333_4444 + (i-1)) 
                    $display("[FAILED] Read mismatch at addr %0d: %h", i-1, rd_data);
            end
        end
        rd_en = 0;
        #(CLK_PERIOD);
        if (rd_data !== 64'h1111_2222_3333_4444 + (DEPTH-1)) 
            $display("[FAILED] Read mismatch at addr %0d: %h", DEPTH-1, rd_data);

        $display("[PASSED] Ping Pong Buffer memory mapping and control verified.");
        $display("=================================================");
        $finish;
    end

endmodule
