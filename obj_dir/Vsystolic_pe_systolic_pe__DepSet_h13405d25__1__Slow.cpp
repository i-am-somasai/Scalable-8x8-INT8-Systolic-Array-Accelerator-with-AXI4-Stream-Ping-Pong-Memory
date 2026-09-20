// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe_systolic_pe.h"

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
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
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                      >> 0x28U))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x29U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x29U)) 
                                              << 1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2aU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x2aU)) 
                                              << 2U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2bU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x2bU)) 
                                              << 3U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2cU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x2cU)) 
                                                 << 4U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2dU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x2dU)) 
                                                 << 5U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2eU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x2eU)) 
                                                 << 6U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2fU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 7U)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x2fU)) 
                                                 << 7U)));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                                                >> 0x28U)))))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
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
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                      >> 0x30U))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x31U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x31U)) 
                                              << 1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x32U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x32U)) 
                                              << 2U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x33U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x33U)) 
                                              << 3U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x34U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x34U)) 
                                                 << 4U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x35U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x35U)) 
                                                 << 5U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x36U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x36U)) 
                                                 << 6U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x37U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 7U)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x37U)) 
                                                 << 7U)));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                                                >> 0x30U)))))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
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
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                      >> 0x38U))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x39U)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x39U)) 
                                              << 1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3aU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x3aU)) 
                                              << 2U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3bU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                       >> 0x3bU)) 
                                              << 3U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3cU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x3cU)) 
                                                 << 4U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3dU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x3dU)) 
                                                 << 5U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3eU)) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x3eU)) 
                                                 << 6U)));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                  >> 0x3fU) ^ ((IData)(vlSelfRef.__Vtogcov__b_in) 
                               >> 7U)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                          >> 0x3fU)) 
                                                 << 7U)));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                                                >> 0x38U)))))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
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
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
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
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 8U)) ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                      >> 8U))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 9U)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 9U)) 
                                              << 1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xaU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 2U)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 0xaU)) 
                                              << 2U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xbU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 3U)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 0xbU)) 
                                              << 3U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xcU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 4U)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0xcU)) 
                                                 << 4U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xdU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 5U)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0xdU)) 
                                                 << 5U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xeU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 6U)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0xeU)) 
                                                 << 6U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xfU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                     >> 7U)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0xfU)) 
                                                 << 7U)));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                                                >> 8U))))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
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
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
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
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
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
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
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
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
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
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
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
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)))));
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

VL_ATTR_COLD void Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__0\n"); );
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
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
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
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
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
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)))));
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
