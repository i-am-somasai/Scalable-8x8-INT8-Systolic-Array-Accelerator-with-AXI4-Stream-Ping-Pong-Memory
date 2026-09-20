# RTL Design Philosophy

The accelerator is written in SystemVerilog (IEEE 1800-2012). The coding style prioritizes synthesizability, explicit typing, physical design compatibility, and mathematical correctness over simulation tricks.

## 1. Parameterization and Scalability

Instead of hardcoding a 64-node grid, the entire architecture uses `parameter` definitions and SystemVerilog `generate` loops.

- `ARRAY_ROWS` and `ARRAY_COLS` define the dimensions.
- `DATA_WIDTH` (8) and `ACC_WIDTH` (32) define the precision.

If an engineer needs to re-target this design to a 16x16 array, they only need to change the parameters at instantiation. The `generate` loops in `systolic_array.sv` and `array_feeder.sv` will automatically dynamically construct the 256 PEs, wire them together, and instantiate the required 15-cycle delay chains.

## 2. Signed Arithmetic

Handling signs in hardware multipliers is notoriously tricky. Verilog rules for implicit signed extension can cause catastrophic logic bugs if mixed with unsigned types.
To prevent this, every data port (`a_in`, `b_in`, `acc_in`, etc.) is explicitly defined using the `signed` keyword:
```systemverilog
input logic signed [DATA_WIDTH-1:0] a_in
```
Inside the PE, the product is explicitly cast into a wider signed type before accumulation to prevent bit-truncation errors:
```systemverilog
logic signed [(DATA_WIDTH*2)-1:0] product_ext;
assign product_ext = a_in * b_in;
```

## 3. Finite State Machines (FSMs)

All FSMs (in `accelerator_controller.sv` and `buffer_controller.sv`) are implemented using the standard 3-always-block methodology:
1. **State Register (Sequential):** Updates `current_state <= next_state` on `posedge clk`.
2. **Next State Logic (Combinational):** Determines `next_state` based on inputs and `current_state`.
3. **Output Logic (Combinational/Sequential):** Drives the control signals. 

This explicit separation guarantees that synthesis tools easily recognize the FSM and can apply specialized FSM optimizations (like one-hot encoding) during technology mapping.

## 4. Reset Strategy

The design uses **Synchronous, Active-High Resets**.
```systemverilog
always_ff @(posedge clk) begin
    if (rst) begin
        // Reset logic
    end else begin
        // Functional logic
    end
end
```
Synchronous resets are preferred in modern ASIC flows (like OpenROAD and SKY130) because they do not require dedicated asynchronous reset trees, easing routing congestion and static timing analysis.

## 5. Avoiding Combinational Loops

To guarantee the design easily routes and meets timing, we strictly avoided combinational feedback loops.
For instance, in the AXI stream interfaces, a naive implementation might tie `TREADY` directly to an internal combinational condition based on `TVALID`. This creates a combinational path entirely through the module. 
By utilizing Skid Buffers, we place a hard register boundary between the AXI bus and the internal logic, isolating the timing paths.
