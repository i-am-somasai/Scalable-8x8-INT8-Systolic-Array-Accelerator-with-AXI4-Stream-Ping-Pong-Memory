// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaccelerator_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaccelerator_tb::Vaccelerator_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaccelerator_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__accelerator_tb__DOT__dut__DOT__buf_a_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__buf_a_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__buf_b_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__buf_b_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__feeder_a{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__feeder_a}
    , __PVT__accelerator_tb__DOT__dut__DOT__feeder_b{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__feeder_b}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst}
    , __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst{vlSymsp->TOP.__PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vaccelerator_tb::Vaccelerator_tb(const char* _vcname__)
    : Vaccelerator_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaccelerator_tb::~Vaccelerator_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaccelerator_tb___024root___eval_debug_assertions(Vaccelerator_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vaccelerator_tb___024root___eval_static(Vaccelerator_tb___024root* vlSelf);
void Vaccelerator_tb___024root___eval_initial(Vaccelerator_tb___024root* vlSelf);
void Vaccelerator_tb___024root___eval_settle(Vaccelerator_tb___024root* vlSelf);
void Vaccelerator_tb___024root___eval(Vaccelerator_tb___024root* vlSelf);

void Vaccelerator_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaccelerator_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaccelerator_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaccelerator_tb___024root___eval_static(&(vlSymsp->TOP));
        Vaccelerator_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vaccelerator_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaccelerator_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vaccelerator_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vaccelerator_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vaccelerator_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vaccelerator_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vaccelerator_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaccelerator_tb___024root___eval_final(Vaccelerator_tb___024root* vlSelf);

VL_ATTR_COLD void Vaccelerator_tb::final() {
    Vaccelerator_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaccelerator_tb::hierName() const { return vlSymsp->name(); }
const char* Vaccelerator_tb::modelName() const { return "Vaccelerator_tb"; }
unsigned Vaccelerator_tb::threads() const { return 1; }
void Vaccelerator_tb::prepareClone() const { contextp()->prepareClone(); }
void Vaccelerator_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaccelerator_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaccelerator_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vaccelerator_tb___024root__trace_init_top(Vaccelerator_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaccelerator_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaccelerator_tb___024root*>(voidSelf);
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vaccelerator_tb___024root__trace_decl_types(tracep);
    Vaccelerator_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaccelerator_tb___024root__trace_register(Vaccelerator_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaccelerator_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaccelerator_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaccelerator_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
