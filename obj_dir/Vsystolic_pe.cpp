// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystolic_pe__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsystolic_pe::Vsystolic_pe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsystolic_pe__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , clear{vlSymsp->TOP.clear}
    , drain{vlSymsp->TOP.drain}
    , a_in{vlSymsp->TOP.a_in}
    , b_in{vlSymsp->TOP.b_in}
    , acc_out{vlSymsp->TOP.acc_out}
    , __PVT__systolic_array_2x2__DOT__pe_0_0{vlSymsp->TOP.__PVT__systolic_array_2x2__DOT__pe_0_0}
    , __PVT__systolic_array_2x2__DOT__pe_0_1{vlSymsp->TOP.__PVT__systolic_array_2x2__DOT__pe_0_1}
    , __PVT__systolic_array_2x2__DOT__pe_1_0{vlSymsp->TOP.__PVT__systolic_array_2x2__DOT__pe_1_0}
    , __PVT__systolic_array_2x2__DOT__pe_1_1{vlSymsp->TOP.__PVT__systolic_array_2x2__DOT__pe_1_1}
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

Vsystolic_pe::Vsystolic_pe(const char* _vcname__)
    : Vsystolic_pe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsystolic_pe::~Vsystolic_pe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsystolic_pe___024root___eval_debug_assertions(Vsystolic_pe___024root* vlSelf);
#endif  // VL_DEBUG
void Vsystolic_pe___024root___eval_static(Vsystolic_pe___024root* vlSelf);
void Vsystolic_pe___024root___eval_initial(Vsystolic_pe___024root* vlSelf);
void Vsystolic_pe___024root___eval_settle(Vsystolic_pe___024root* vlSelf);
void Vsystolic_pe___024root___eval(Vsystolic_pe___024root* vlSelf);

void Vsystolic_pe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_pe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsystolic_pe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsystolic_pe___024root___eval_static(&(vlSymsp->TOP));
        Vsystolic_pe___024root___eval_initial(&(vlSymsp->TOP));
        Vsystolic_pe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsystolic_pe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsystolic_pe::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsystolic_pe::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsystolic_pe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsystolic_pe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsystolic_pe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsystolic_pe___024root___eval_final(Vsystolic_pe___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_pe::final() {
    Vsystolic_pe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsystolic_pe::hierName() const { return vlSymsp->name(); }
const char* Vsystolic_pe::modelName() const { return "Vsystolic_pe"; }
unsigned Vsystolic_pe::threads() const { return 1; }
void Vsystolic_pe::prepareClone() const { contextp()->prepareClone(); }
void Vsystolic_pe::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsystolic_pe::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsystolic_pe___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsystolic_pe___024root__trace_init_top(Vsystolic_pe___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystolic_pe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_pe___024root*>(voidSelf);
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsystolic_pe___024root__trace_decl_types(tracep);
    Vsystolic_pe___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystolic_pe___024root__trace_register(Vsystolic_pe___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsystolic_pe::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsystolic_pe::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsystolic_pe___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
