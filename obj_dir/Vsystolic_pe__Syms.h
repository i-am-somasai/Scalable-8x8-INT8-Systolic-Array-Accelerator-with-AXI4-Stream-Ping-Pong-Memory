// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSYSTOLIC_PE__SYMS_H_
#define VERILATED_VSYSTOLIC_PE__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vsystolic_pe.h"

// INCLUDE MODULE CLASSES
#include "Vsystolic_pe___024root.h"
#include "Vsystolic_pe_array_feeder.h"
#include "Vsystolic_pe_ping_pong_buffer__A3.h"
#include "Vsystolic_pe_systolic_pe.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsystolic_pe__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsystolic_pe* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsystolic_pe___024root         TOP;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vsystolic_pe_systolic_pe       TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vsystolic_pe_ping_pong_buffer__A3 TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst;
    Vsystolic_pe_ping_pong_buffer__A3 TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst;
    Vsystolic_pe_array_feeder      TOP__accelerator_tb__DOT__dut__DOT__feeder_a;
    Vsystolic_pe_array_feeder      TOP__accelerator_tb__DOT__dut__DOT__feeder_b;
    Vsystolic_pe_systolic_pe       TOP__systolic_array_2x2__DOT__pe_0_0;
    Vsystolic_pe_systolic_pe       TOP__systolic_array_2x2__DOT__pe_0_1;
    Vsystolic_pe_systolic_pe       TOP__systolic_array_2x2__DOT__pe_1_0;
    Vsystolic_pe_systolic_pe       TOP__systolic_array_2x2__DOT__pe_1_1;

    // COVERAGE
    uint32_t __Vcoverage[2154];

    // SCOPE NAMES
    VerilatedScope __Vscope_accelerator_tb__dut;
    VerilatedScope __Vscope_accelerator_tb__dut__acc_ctrl_inst;
    VerilatedScope __Vscope_accelerator_tb__dut__axi_in_inst;
    VerilatedScope __Vscope_accelerator_tb__dut__axi_out_inst;

    // CONSTRUCTORS
    Vsystolic_pe__Syms(VerilatedContext* contextp, const char* namep, Vsystolic_pe* modelp);
    ~Vsystolic_pe__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
