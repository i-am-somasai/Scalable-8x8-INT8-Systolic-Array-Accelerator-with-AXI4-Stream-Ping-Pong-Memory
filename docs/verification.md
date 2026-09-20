# Verification Architecture

The verification environment for this project is robust and automated, relying heavily on a Python Golden Model to dynamically generate stimulus and expected results. 

## Python Golden Model
To prove the RTL is mathematically correct, we must compare it against an infallible baseline. We built `python/generate_vectors.py` and `python/compare_results.py` using NumPy.

### The Verification Flow
```text
  [generate_vectors.py]
           │
           ├─> Writes Matrix A (Hex) ───┐
           ├─> Writes Matrix B (Hex) ───┼─> [RTL Simulation (iverilog)]
           │                            │            │
           └─> Computes C (NumPy)       │            ▼
                        │               │     Writes Matrix C_rtl (Hex)
                        ▼               │            │
             Writes Matrix C_exp (Hex)  │            │
                        │               │            │
                        ▼               ▼            ▼
                     [compare_results.py] <──────────┘
                                │
                                ▼
                           PASS / FAIL
```

### What does the Golden Model generate?
1. **Randomized Tests:** `np.random.randint(-128, 127)` generates random INT8 matrices.
2. **Corner Cases:** 
   - Boundary tests containing explicitly `127` (Max) and `-128` (Min).
   - Zero matrices to ensure accumulators are cleanly zeroed.
3. **Multi-K Sequences:** It splits large mathematical matrices into sequential K-tiles (e.g., passing $K=1, 2, 3$ sequences to prove partial sum retention works).
4. **Data Packing:** It automatically transposes Matrix A and packs both matrices into 64-bit Hex strings tailored exactly for the AXI bus width.

---

## RTL Testbench (`accelerator_tb.sv`)

The top-level testbench loads the Python-generated `.hex` files and physically drives the `systolic_accelerator_top` module.

### Implemented & Executed Tests
1. **Multiple Transactions:** The testbench pushes 8 completely unique Multi-K transactions consecutively without stopping.
2. **AXI Backpressure Injection:** The testbench contains a `random_backpressure` task. It actively toggles `m_axis_tready` low at random intervals. This proves the Skid Buffers and FSM stalling work flawlessly.
3. **Mid-Transaction Reset Tests:** The testbench asserts the `rst` signal high *while* data is actively flowing through the array, proving the system recovers gracefully and doesn't lock up.
4. **TLAST Behavior:** It drives the `TLAST` signal perfectly aligned with the Python K-tile counts.

---

## SystemVerilog Assertions & Coverage
*(Status: Implemented but bypassable for Icarus compatibility)*

Icarus Verilog (`iverilog`) does not natively support advanced SystemVerilog Verification constructs like `covergroup` and formal `assert property`.
Because this project targets open-source toolchains, we wrapped the verification constructs in `` `ifndef __ICARUS__ `` macros.

### Assertions (`assert property`)
We embedded formal assertions inside the AXI modules to prove protocol compliance:
```systemverilog
`ifndef __ICARUS__
  property p_tdata_stable;
    @(posedge clk) (s_axis_tvalid && !s_axis_tready) |=> $stable(s_axis_tdata);
  endproperty
  assert property (p_tdata_stable) else $error("AXI Violation: TDATA changed while TREADY was low");
`endif
```

### Functional Coverage (`covergroup`)
We implemented functional coverage inside `accelerator_tb.sv` to track:
- `cp_valid`: How often TVALID triggers.
- `cp_ready`: How often TREADY stalls.
- Cross-coverage between VALID and READY to mathematically prove the backpressure paths were exercised.

To execute these features, the repository must be run using a commercial simulator (e.g., Questa, VCS) or Verilator (with coverage flags enabled).
