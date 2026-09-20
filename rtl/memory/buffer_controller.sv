`timescale 1ns / 1ps

/**
 * Module: buffer_controller
 * Description: Manages ping-pong buffer ownership handshakes.
 * Tracks load and compute progress and swaps banks securely.
 * Completely decouples the load pointer and compute pointer to prevent 
 * catastrophic buffer ripping if one side finishes significantly earlier.
 */
module buffer_controller (
    input  logic clk,
    input  logic rst,
    
    // Load FSM Interface (from AXI input controller)
    input  logic load_done,       // Pulse: AXI finished writing a tile to the load bank
    input  logic load_is_last,    // High: The tile being written is the final K-tile
    output logic load_ready,      // High: The load bank is empty and safe to write
    
    // Compute FSM Interface (from Systolic Array controller)
    input  logic compute_done,    // Pulse: Array finished reading the tile from the compute bank
    output logic compute_ready,   // High: The compute bank has valid data and is ready for reading
    output logic compute_is_last, // High: The valid compute bank holds the final K-tile
    
    // To Ping-Pong Buffers
    output logic compute_bank_sel, // 0: Bank0 compute, 1: Bank1 compute
    output logic load_bank_sel     // 0: Bank0 load,    1: Bank1 load
);

    // Internal Valid bits for each bank
    logic bank0_valid;
    logic bank1_valid;
    
    // Internal Last-tile flags for each bank
    logic bank0_is_last;
    logic bank1_is_last;
    
    // Internal pointers
    logic load_ptr;
    logic compute_ptr;

    // Route pointers out
    assign load_bank_sel = load_ptr;
    assign compute_bank_sel = compute_ptr;

    // A bank is ready to load if it is NOT valid (empty/already consumed)
    assign load_ready = (load_ptr == 1'b0) ? ~bank0_valid : ~bank1_valid;
    
    // A bank is ready to compute if it IS valid (has fresh data)
    assign compute_ready = (compute_ptr == 1'b0) ? bank0_valid : bank1_valid;
    assign compute_is_last = (compute_ptr == 1'b0) ? bank0_is_last : bank1_is_last;

    always_ff @(posedge clk) begin
        if (rst) begin
            bank0_valid <= 1'b0;
            bank1_valid <= 1'b0;
            bank0_is_last <= 1'b0;
            bank1_is_last <= 1'b0;
            load_ptr <= 1'b0;
            compute_ptr <= 1'b0;
        end else begin
            // ----------------------------------------------------
            // Handle Load Completion
            // ----------------------------------------------------
            if (load_done && load_ready) begin
                // Mark the bank we just loaded as valid and record if it is the last tile
                if (load_ptr == 1'b0) begin
                    bank0_valid <= 1'b1;
                    bank0_is_last <= load_is_last;
                end else begin
                    bank1_valid <= 1'b1;
                    bank1_is_last <= load_is_last;
                end
                
                // Point the load side to the other bank safely
                load_ptr <= ~load_ptr;
            end
            
            // ----------------------------------------------------
            // Handle Compute Completion
            // ----------------------------------------------------
            if (compute_done && compute_ready) begin
                // Mark the bank we just consumed as invalid (empty)
                if (compute_ptr == 1'b0) bank0_valid <= 1'b0;
                else                     bank1_valid <= 1'b0;
                
                // Point the compute side to the other bank safely
                compute_ptr <= ~compute_ptr;
            end
        end
    end

endmodule
