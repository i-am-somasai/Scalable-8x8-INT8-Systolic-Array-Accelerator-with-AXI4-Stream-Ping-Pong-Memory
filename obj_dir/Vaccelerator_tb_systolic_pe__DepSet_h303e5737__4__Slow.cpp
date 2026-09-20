// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb__Syms.h"
#include "Vaccelerator_tb_systolic_pe.h"

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst.a_out))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst.b_out)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__0(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___stl_sequent__TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlSelfRef.__Vtogcov__b_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlSelfRef.__Vtogcov__b_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (2U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlSelfRef.__Vtogcov__b_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (4U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
               ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlSelfRef.__Vtogcov__b_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (8U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlSelfRef.__Vtogcov__b_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x10U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlSelfRef.__Vtogcov__b_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x20U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlSelfRef.__Vtogcov__b_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x40U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out) 
                  ^ (IData)(vlSelfRef.__Vtogcov__b_in)))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlSelfRef.__Vtogcov__b_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_in)) 
                                     | (0x80U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)));
    }
    if ((1U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlSelfRef.__Vtogcov__a_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (1U & (IData)(vlSelfRef.a_out)));
    }
    if ((2U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlSelfRef.__Vtogcov__a_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (2U & (IData)(vlSelfRef.a_out)));
    }
    if ((4U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlSelfRef.__Vtogcov__a_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (4U & (IData)(vlSelfRef.a_out)));
    }
    if ((8U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlSelfRef.__Vtogcov__a_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (8U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlSelfRef.__Vtogcov__a_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x10U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlSelfRef.__Vtogcov__a_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x20U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlSelfRef.__Vtogcov__a_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x40U & (IData)(vlSelfRef.a_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.a_out) ^ (IData)(vlSelfRef.__Vtogcov__a_out)))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlSelfRef.__Vtogcov__a_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_out)) 
                                      | (0x80U & (IData)(vlSelfRef.a_out)));
    }
    if ((1U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlSelfRef.__Vtogcov__b_out = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (1U & (IData)(vlSelfRef.b_out)));
    }
    if ((2U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlSelfRef.__Vtogcov__b_out = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (2U & (IData)(vlSelfRef.b_out)));
    }
    if ((4U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlSelfRef.__Vtogcov__b_out = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (4U & (IData)(vlSelfRef.b_out)));
    }
    if ((8U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlSelfRef.__Vtogcov__b_out = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (8U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x10U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlSelfRef.__Vtogcov__b_out = ((0xefU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x10U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x20U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlSelfRef.__Vtogcov__b_out = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x20U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x40U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlSelfRef.__Vtogcov__b_out = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x40U & (IData)(vlSelfRef.b_out)));
    }
    if ((0x80U & ((IData)(vlSelfRef.b_out) ^ (IData)(vlSelfRef.__Vtogcov__b_out)))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlSelfRef.__Vtogcov__b_out = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__b_out)) 
                                      | (0x80U & (IData)(vlSelfRef.b_out)));
    }
    if ((1U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffeU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (1U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((2U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffdU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (2U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((4U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffffbU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (4U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((8U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
               ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffff7U 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (8U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffefU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffdfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffffbfU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                  ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffff7fU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffeffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffdffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffffbffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                   ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffff7ffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffefffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffdfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffffbfffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                    ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffff7fffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000U & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffeffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffdffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfffbffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                     ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfff7ffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffefffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x100000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffdfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x200000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xffbfffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x400000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                      ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xff7fffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x800000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfeffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x1000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfdffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x2000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xfbffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x4000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                       ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xf7ffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x8000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xefffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x10000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xdfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x20000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
                        ^ vlSelfRef.__Vtogcov__acc_in))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0xbfffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x40000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if (((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out 
          ^ vlSelfRef.__Vtogcov__acc_in) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlSelfRef.__Vtogcov__acc_in = ((0x7fffffffU 
                                        & vlSelfRef.__Vtogcov__acc_in) 
                                       | (0x80000000U 
                                          & vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out));
    }
    if ((1U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffeU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (1U & vlSelfRef.acc_out));
    }
    if ((2U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffdU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (2U & vlSelfRef.acc_out));
    }
    if ((4U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffffbU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (4U & vlSelfRef.acc_out));
    }
    if ((8U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffff7U 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (8U & vlSelfRef.acc_out));
    }
    if ((0x10U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffefU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10U & vlSelfRef.acc_out));
    }
    if ((0x20U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffdfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20U & vlSelfRef.acc_out));
    }
    if ((0x40U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffffbfU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40U & vlSelfRef.acc_out));
    }
    if ((0x80U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffff7fU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80U & vlSelfRef.acc_out));
    }
    if ((0x100U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffeffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100U & vlSelfRef.acc_out));
    }
    if ((0x200U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffdffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200U & vlSelfRef.acc_out));
    }
    if ((0x400U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffffbffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400U & vlSelfRef.acc_out));
    }
    if ((0x800U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffff7ffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800U & vlSelfRef.acc_out));
    }
    if ((0x1000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffefffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffdfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffffbfffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffff7fffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffeffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffdffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfffbffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x80000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfff7ffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x100000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffefffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x100000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x200000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffdfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x200000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x400000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlSelfRef.__Vtogcov__acc_out = ((0xffbfffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x400000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x800000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlSelfRef.__Vtogcov__acc_out = ((0xff7fffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x800000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x1000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfeffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x1000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x2000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfdffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x2000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x4000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlSelfRef.__Vtogcov__acc_out = ((0xfbffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x4000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x8000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlSelfRef.__Vtogcov__acc_out = ((0xf7ffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x8000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x10000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlSelfRef.__Vtogcov__acc_out = ((0xefffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x10000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x20000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlSelfRef.__Vtogcov__acc_out = ((0xdfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x20000000U 
                                           & vlSelfRef.acc_out));
    }
    if ((0x40000000U & (vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlSelfRef.__Vtogcov__acc_out = ((0xbfffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x40000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((vlSelfRef.acc_out ^ vlSelfRef.__Vtogcov__acc_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlSelfRef.__Vtogcov__acc_out = ((0x7fffffffU 
                                         & vlSelfRef.__Vtogcov__acc_out) 
                                        | (0x80000000U 
                                           & vlSelfRef.acc_out));
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.__Vtogcov__clear))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlSelfRef.__Vtogcov__clear = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.__Vtogcov__drain))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlSelfRef.__Vtogcov__drain = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)(vlSelfRef.__Vtogcov__a_in)))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlSelfRef.__Vtogcov__a_in = ((0xfeU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                      >> 0x28U))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x29U)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlSelfRef.__Vtogcov__a_in = ((0xfdU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (2U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 0x29U)) 
                                              << 1U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2aU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlSelfRef.__Vtogcov__a_in = ((0xfbU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (4U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 0x2aU)) 
                                              << 2U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2bU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlSelfRef.__Vtogcov__a_in = ((0xf7U & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (8U & ((IData)(
                                                      (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                       >> 0x2bU)) 
                                              << 3U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2cU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlSelfRef.__Vtogcov__a_in = ((0xefU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x10U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0x2cU)) 
                                                 << 4U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2dU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlSelfRef.__Vtogcov__a_in = ((0xdfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x20U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0x2dU)) 
                                                 << 5U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2eU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlSelfRef.__Vtogcov__a_in = ((0xbfU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x40U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0x2eU)) 
                                                 << 6U)));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2fU)) ^ ((IData)(vlSelfRef.__Vtogcov__a_in) 
                                      >> 7U)))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlSelfRef.__Vtogcov__a_in = ((0x7fU & (IData)(vlSelfRef.__Vtogcov__a_in)) 
                                     | (0x80U & ((IData)(
                                                         (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                          >> 0x2fU)) 
                                                 << 7U)));
    }
    vlSelfRef.__PVT__product = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                                                >> 0x28U))))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst.b_out)))));
    if ((1U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlSelfRef.__Vtogcov__product = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (1U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((2U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlSelfRef.__Vtogcov__product = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (2U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((4U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlSelfRef.__Vtogcov__product = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (4U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((8U & ((IData)(vlSelfRef.__PVT__product) ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlSelfRef.__Vtogcov__product = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (8U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x10U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlSelfRef.__Vtogcov__product = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x10U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x20U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlSelfRef.__Vtogcov__product = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x20U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x40U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlSelfRef.__Vtogcov__product = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x40U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x80U & ((IData)(vlSelfRef.__PVT__product) 
                  ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlSelfRef.__Vtogcov__product = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x80U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x100U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlSelfRef.__Vtogcov__product = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x100U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x200U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlSelfRef.__Vtogcov__product = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x200U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x400U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlSelfRef.__Vtogcov__product = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x400U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x800U & ((IData)(vlSelfRef.__PVT__product) 
                   ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlSelfRef.__Vtogcov__product = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x800U & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlSelfRef.__Vtogcov__product = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlSelfRef.__Vtogcov__product = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlSelfRef.__Vtogcov__product = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.__PVT__product) 
                    ^ (IData)(vlSelfRef.__Vtogcov__product)))) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlSelfRef.__Vtogcov__product = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__product)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.__PVT__product)));
    }
    if ((1U & (VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffeU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (1U & 
                                               VL_EXTENDS_II(1,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((2U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffdU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (2U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((4U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffffbU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (4U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((8U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
               ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffff7U 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (8U & 
                                               VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffefU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffdfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffffbfU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                  ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffff7fU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffeffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffdffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffffbffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                   ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffff7ffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffefffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffdfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffffbfffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                    ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffff7fffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffeffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffdffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfffbffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x80000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                     ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfff7ffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x100000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffefffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x100000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x200000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffdfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x200000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x400000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.__Vtogcov__product_ext = ((0xffbfffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x400000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x800000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                      ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.__Vtogcov__product_ext = ((0xff7fffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x800000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x1000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfeffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x1000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x2000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfdffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x2000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x4000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlSelfRef.__Vtogcov__product_ext = ((0xfbffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x4000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x8000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                       ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlSelfRef.__Vtogcov__product_ext = ((0xf7ffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x8000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x10000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlSelfRef.__Vtogcov__product_ext = ((0xefffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x10000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x20000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__product_ext = ((0xdfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x20000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if ((0x40000000U & (VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
                        ^ vlSelfRef.__Vtogcov__product_ext))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__product_ext = ((0xbfffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x40000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
    if (((VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product)) 
          ^ vlSelfRef.__Vtogcov__product_ext) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__product_ext = ((0x7fffffffU 
                                             & vlSelfRef.__Vtogcov__product_ext) 
                                            | (0x80000000U 
                                               & VL_EXTENDS_II(32,16, (IData)(vlSelfRef.__PVT__product))));
    }
}
