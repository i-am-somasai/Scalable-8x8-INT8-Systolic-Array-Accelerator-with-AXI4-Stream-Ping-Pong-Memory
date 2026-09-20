# Systolic Dataflow & Mathematical Operations

## Why a Systolic Array?
A **Systolic Array** is a specialized network of deeply pipelined, identical compute nodes called Processing Elements (PEs). In medicine, "systole" refers to the heart pumping blood through the body. Similarly, a systolic array "pumps" data rhythmically through the compute nodes at every clock cycle.

### The Processing Element (PE)
The core of the array is the PE. In this design, the PE implements an **Output-Stationary** dataflow:
- The partial sum (accumulation) stays **stationary** inside the PE's internal register.
- Matrix `A` flows horizontally from left to right.
- Matrix `B` flows vertically from top to bottom.

### Local Data Movement
When PE `(0,0)` receives an element of `A`, it uses it for its computation, and on the next clock cycle, it passes that exact same element of `A` to PE `(0,1)`. The data is reused without ever needing to fetch it from main memory again. 

### Why 8x8?
An 8x8 array consists of 64 PEs. 
- **1 MAC per cycle**: Each PE performs 1 Multiply-Accumulate operation per clock cycle.
- **Peak Throughput**: 64 PEs operate in parallel, yielding a peak theoretical throughput of 64 MACs/cycle. At 100 MHz, this equates to 6.4 GigaMACs/second (GMACs).
- **Actual Throughput**: Because of the pipeline latency to fill and drain the array, actual throughput approaches the theoretical peak as the size of the matrices (the `K` dimension) grows.

### Visual Architecture
```text
          B_in[0]  B_in[1]       B_in[7]
            |        |             |
A_in[0] -- PE(0,0)- PE(0,1)- ... - PE(0,7)
            |        |             |
A_in[1] -- PE(1,0)- PE(1,1)- ... - PE(1,7)
            |        |             |
           ...      ...           ...
            |        |             |
A_in[7] -- PE(7,0)- PE(7,1)- ... - PE(7,7)
            |        |             |
          Out[0]   Out[1]        Out[7]
```

---

## Mathematical Operation

The array computes the standard matrix multiplication:
**$C = A \times B$**

For a given element $C_{i,j}$, the operation is a dot product:
**$C_{i,j} = \sum_{k=0}^{K-1} (A_{i,k} \times B_{k,j})$**

### Data Types and Precision
* **Operands:** INT8 (8-bit signed integer). Range: -128 to 127.
* **Multiplication:** When multiplying two 8-bit signed numbers, the intermediate product requires 16 bits to prevent overflow ($-128 \times -128 = 16,384$).
* **Accumulator:** The 16-bit products are repeatedly added together. To guarantee no overflow over large `K` dimensions, the PE accumulates into a 32-bit signed integer (INT32).

### Numerical Example
If PE(0,0) receives a stream of elements for $K=3$:
- Cycle 1: $A = 5, B = 10 \rightarrow Product = 50 \rightarrow Acc = 50$
- Cycle 2: $A = -2, B = 4 \rightarrow Product = -8 \rightarrow Acc = 42$
- Cycle 3: $A = 3, B = -1 \rightarrow Product = -3 \rightarrow Acc = 39$
Final Output for $C_{0,0}$ = 39.

---

## Cycle-by-Cycle Dataflow

To ensure that the correct elements of `A` and `B` meet at the correct PE at the exact same clock cycle, the input data cannot be fed into the array all at once. It must be **skewed** into a triangular wavefront.

### 1. Input Skewing
The `array_feeder` module delays row $i$ of Matrix A by $i$ clock cycles, and column $j$ of Matrix B by $j$ clock cycles.
- Cycle 0: $A_{0,0}$ and $B_{0,0}$ enter PE(0,0).
- Cycle 1: $A_{0,1}$ enters PE(0,0) while $A_{1,0}$ enters PE(1,0).

### 2. Computation Phase
Data cascades diagonally across the array.
- PE(0,0) computes its first MAC at cycle 0.
- PE(7,7) computes its first MAC at cycle 14 ($7 + 7$).
Because the array is purely pipelined, once it is full, all 64 PEs are performing useful work every single cycle.

### 3. Drain Phase
Because this is an output-stationary design, the final values of matrix $C$ are trapped inside the PE accumulators. When the computation completes, the FSM enters the `DRAIN` phase.
The array reconfigures itself as a vertical shift register. Row 7 shifts its accumulators down to the output bus, Row 6 shifts into Row 7, Row 5 into Row 6, etc. It takes 8 cycles to flush an 8x8 array.

---

## Multi-K-Tile Operation

What happens if the matrices being multiplied are 8x16 and 16x8? The `K` dimension (16) is larger than the array dimension (8).

The accelerator natively supports arbitrary `K` dimensions by slicing the matrices into 8x8 "tiles".

### The Tiling Flow
1. **K-Tile 0:** The AXI bus loads $A_{tile0}$ and $B_{tile0}$. The array computes the dot product. The results are stored in the accumulators as **Partial Sums**.
2. **FSM State Preservation:** Crucially, the controller does *not* clear the accumulators after Tile 0. It preserves the state.
3. **K-Tile 1:** The AXI bus loads $A_{tile1}$ and $B_{tile1}$. The array computes the next dot product and *adds* it directly to the existing partial sums.
4. **TLAST Detection:** The AXI input module detects the `TLAST` signal on the final tile. This flag propagates through the Ping-Pong buffer alongside the data.
5. **Drain on Last Tile:** When the array finishes computing a tile flagged as the "last tile", the FSM transitions to the `DRAIN` phase and outputs the final matrix $C$.

This hardware-level support for continuous accumulation allows the accelerator to process matrices of any size (e.g., 8x1024 * 1024x8) entirely on-chip without ever exposing intermediate partial sums to the external AXI bus.
