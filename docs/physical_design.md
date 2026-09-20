# OpenROAD Physical Design

Physical Design (often called Place and Route, or P&R) is the process of converting the logical netlist (from Synthesis) into a physical geometric blueprint (GDSII) that a foundry can actually fabricate.

## The Physical Design Flow

The implementation for this project is contained within `scripts/flow.tcl`, utilizing the OpenROAD application.

### 1. Synthesis Output
The flow begins by reading the `.v` netlist produced by Yosys and the `.sdc` timing constraints. It also loads the physical cell libraries (`.lef`) which describe the physical dimensions of the standard cells.

### 2. Floorplanning
The script initializes the silicon die area and the core area.
```tcl
initialize_floorplan -die_area "0 0 1000 1000" -core_area "50 50 950 950" -site unithd
```
It defines a 1000x1000 micron chip, and places the I/O pins randomly along the periphery.

### 3. Power Delivery Network (PDN)
A chip needs power. The script connects the logical `VDD` and `VSS` nets to the physical power grids. (Note: A full PDN macro script is highly complex; our script currently just makes the logical connections required to pass DRC).

### 4. Placement
The tool figures out exactly where to physically place every single logic gate on the floorplan.
- **Global Placement:** Places cells roughly to minimize total wire length.
- **Detailed Placement:** Snaps cells to the legal placement grid, ensuring no two cells overlap.

### 5. Clock Tree Synthesis (CTS)
A 100MHz clock signal must reach thousands of flip-flops simultaneously. If it arrives at some flip-flops earlier than others, you get **Clock Skew**, which causes hold-time violations. CTS inserts a massive tree of clock buffers to balance the delay across the entire chip perfectly.

### 6. Routing
Once all cells are placed, the tool connects them using the microscopic metal layers.
- **Global Routing:** Decides the general path a wire will take (e.g., "go through this region").
- **Detailed Routing:** Assigns exact metal tracks and vias.

### 7. Reports and Extraction
The tool runs a final timing analysis on the fully routed chip, reporting the actual parasitics (wire resistance and capacitance). It then generates the final `.def` and `.v` files.

## Execution Constraints
The `scripts/flow.tcl` script is structurally correct for OpenROAD. However, executing this flow successfully requires the user to install OpenROAD and configure the exact paths to their local SKY130 `.lef` and `.lib` files. Without the physical PDK, the tool has no physical dimensions to place.
