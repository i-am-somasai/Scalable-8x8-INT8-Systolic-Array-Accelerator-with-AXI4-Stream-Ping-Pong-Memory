// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VACCELERATOR_TB_H_
#define VERILATED_VACCELERATOR_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vaccelerator_tb__Syms;
class Vaccelerator_tb___024root;
class VerilatedVcdC;
class Vaccelerator_tb_array_feeder;
class Vaccelerator_tb_ping_pong_buffer__A3;
class Vaccelerator_tb_systolic_pe;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vaccelerator_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaccelerator_tb__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaccelerator_tb_ping_pong_buffer__A3* const __PVT__accelerator_tb__DOT__dut__DOT__buf_a_inst;
    Vaccelerator_tb_ping_pong_buffer__A3* const __PVT__accelerator_tb__DOT__dut__DOT__buf_b_inst;
    Vaccelerator_tb_array_feeder* const __PVT__accelerator_tb__DOT__dut__DOT__feeder_a;
    Vaccelerator_tb_array_feeder* const __PVT__accelerator_tb__DOT__dut__DOT__feeder_b;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* const __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaccelerator_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaccelerator_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaccelerator_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaccelerator_tb();
  private:
    VL_UNCOPYABLE(Vaccelerator_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
