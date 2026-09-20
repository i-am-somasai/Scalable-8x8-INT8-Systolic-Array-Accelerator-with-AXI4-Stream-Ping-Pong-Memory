// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe_systolic_pe.h"

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___configure_coverage(Vsystolic_pe_systolic_pe* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2021]), first, "rtl/pe/systolic_pe.sv", 21, 43, "", "v_toggle/systolic_pe", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2022]), first, "rtl/pe/systolic_pe.sv", 22, 43, "", "v_toggle/systolic_pe", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2023]), first, "rtl/pe/systolic_pe.sv", 25, 43, "", "v_toggle/systolic_pe", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2024]), first, "rtl/pe/systolic_pe.sv", 26, 43, "", "v_toggle/systolic_pe", "clear", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2025]), first, "rtl/pe/systolic_pe.sv", 27, 43, "", "v_toggle/systolic_pe", "drain", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2026]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2027]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2028]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2029]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2030]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2031]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2032]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2033]), first, "rtl/pe/systolic_pe.sv", 30, 43, "", "v_toggle/systolic_pe", "a_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2034]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2035]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2036]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2037]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2038]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2039]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2040]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2041]), first, "rtl/pe/systolic_pe.sv", 31, 43, "", "v_toggle/systolic_pe", "b_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2042]), first, "rtl/pe/systolic_pe.sv", 32, 43, "", "v_toggle/systolic_pe", "acc_in[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2043]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2044]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2045]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2046]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2047]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2048]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2049]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2050]), first, "rtl/pe/systolic_pe.sv", 35, 43, "", "v_toggle/systolic_pe", "a_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2051]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2052]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2053]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2054]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2055]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2056]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2057]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2058]), first, "rtl/pe/systolic_pe.sv", 36, 43, "", "v_toggle/systolic_pe", "b_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2059]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2060]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2061]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2062]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2063]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2064]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2065]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2066]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2067]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2068]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2069]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2070]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2071]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2072]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2073]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2074]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2075]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2076]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2077]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2078]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2079]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2080]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2081]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2082]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2083]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2084]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2085]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2086]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2087]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2088]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2089]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2090]), first, "rtl/pe/systolic_pe.sv", 37, 43, "", "v_toggle/systolic_pe", "acc_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2091]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2092]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2093]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2094]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2095]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2096]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2097]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2098]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2099]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2100]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2101]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2102]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2103]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2104]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2105]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2106]), first, "rtl/pe/systolic_pe.sv", 43, 35, "", "v_toggle/systolic_pe", "product[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2107]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2108]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2109]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2110]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2111]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2112]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2113]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2114]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2115]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2116]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2117]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2118]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2119]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2120]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2121]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2122]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2123]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2124]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2125]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2126]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2127]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2128]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2129]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2130]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2131]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2132]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2133]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2134]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2135]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2136]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2137]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2138]), first, "rtl/pe/systolic_pe.sv", 48, 34, "", "v_toggle/systolic_pe", "product_ext[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2139]), first, "rtl/pe/systolic_pe.sv", 60, 13, "", "v_branch/systolic_pe", "if", "60-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2140]), first, "rtl/pe/systolic_pe.sv", 60, 14, "", "v_branch/systolic_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2141]), first, "rtl/pe/systolic_pe.sv", 71, 22, "", "v_branch/systolic_pe", "if", "71,75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2142]), first, "rtl/pe/systolic_pe.sv", 71, 23, "", "v_branch/systolic_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2143]), first, "rtl/pe/systolic_pe.sv", 68, 22, "", "v_line/systolic_pe", "elsif", "68,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2144]), first, "rtl/pe/systolic_pe.sv", 66, 13, "", "v_line/systolic_pe", "elsif", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2145]), first, "rtl/pe/systolic_pe.sv", 52, 9, "", "v_branch/systolic_pe", "if", "52-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2146]), first, "rtl/pe/systolic_pe.sv", 52, 10, "", "v_branch/systolic_pe", "else", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2147]), first, "rtl/pe/systolic_pe.sv", 81, 13, "", "v_branch/systolic_pe", "if", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2148]), first, "rtl/pe/systolic_pe.sv", 81, 14, "", "v_branch/systolic_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2149]), first, "rtl/pe/systolic_pe.sv", 80, 9, "", "v_branch/systolic_pe", "if", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2150]), first, "rtl/pe/systolic_pe.sv", 80, 10, "", "v_branch/systolic_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2151]), first, "rtl/pe/systolic_pe.sv", 86, 9, "", "v_branch/systolic_pe", "if", "86-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2152]), first, "rtl/pe/systolic_pe.sv", 86, 10, "", "v_branch/systolic_pe", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2153]), first, "rtl/pe/systolic_pe.sv", 51, 5, "", "v_line/systolic_pe", "block", "51");
}
