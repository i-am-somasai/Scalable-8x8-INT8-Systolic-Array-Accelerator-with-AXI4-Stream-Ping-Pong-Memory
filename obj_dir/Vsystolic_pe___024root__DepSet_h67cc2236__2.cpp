// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe___024root.h"

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__2(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
        = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst.acc_out;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
        = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst.acc_out;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst.acc_out)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst.acc_out))) 
                   >> 0x20U));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
        = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst.acc_out;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
        = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst.acc_out;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst.acc_out)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst.acc_out))) 
                   >> 0x20U));
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__3(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last = 0U;
    if ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state))) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg) {
                ++(vlSymsp->__Vcoverage[1299]);
            } else {
                vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid = 1U;
                if ((7U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                    ++(vlSymsp->__Vcoverage[1296]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 0U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1297]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
                }
                ++(vlSymsp->__Vcoverage[1298]);
            }
            ++(vlSymsp->__Vcoverage[1300]);
        } else {
            if ((8U > (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                ++(vlSymsp->__Vcoverage[1287]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1288]);
            }
            if ((0U < (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                ++(vlSymsp->__Vcoverage[1289]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1290]);
            }
            if ((0x19U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                if (vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last) {
                    ++(vlSymsp->__Vcoverage[1291]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 3U;
                } else {
                    ++(vlSymsp->__Vcoverage[1292]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 0U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile = 0U;
                }
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
                ++(vlSymsp->__Vcoverage[1293]);
            } else {
                ++(vlSymsp->__Vcoverage[1294]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
            }
            ++(vlSymsp->__Vcoverage[1295]);
        }
    } else if ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear = 1U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 2U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
    } else {
        if (vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile) {
                ++(vlSymsp->__Vcoverage[1281]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1282]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 2U;
            }
            vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
            ++(vlSymsp->__Vcoverage[1283]);
        } else {
            ++(vlSymsp->__Vcoverage[1284]);
        }
        ++(vlSymsp->__Vcoverage[1285]);
    }
    ++(vlSymsp->__Vcoverage[1301]);
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state 
            = ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state 
            = ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3eU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3dU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3bU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (4U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x37U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (8U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x2fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (0x10U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((0x20U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x1fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (0x20U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_en))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_en 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en;
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__4(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat)))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat)))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__5(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.acc_out[1U] = vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_1.acc_out;
    if ((1U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xfeU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (1U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xfdU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (2U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xfbU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (4U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xf7U & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (8U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xefU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (0x10U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xdfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (0x20U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0xbfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (0x40U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 
            = ((0x7fU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1)) 
               | (0x80U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.b_out)));
    }
    if ((1U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffffeU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (1U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((2U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffffdU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (2U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((4U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffffbU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (4U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((8U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffff7U & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (8U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffffefU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x10U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffffdfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x20U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffffbfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x40U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffff7fU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x80U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffeffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x100U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffdffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x200U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffffbffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x400U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffff7ffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x800U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffefffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x1000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffdfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x2000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffffbfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x4000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffff7fffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x8000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffeffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x10000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffdffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x20000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfffbffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x40000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfff7ffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x80000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffefffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x100000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffdfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x200000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xffbfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x400000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xff7fffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x800000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfeffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x1000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfdffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x2000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xfbffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x4000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xf7ffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x8000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xefffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x10000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xdfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x20000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0xbfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x40000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if (((vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out 
          ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 
            = ((0x7fffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1) 
               | (0x80000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_1.acc_out));
    }
    if ((1U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xfeU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (1U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xfdU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (2U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xfbU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (4U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xf7U & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (8U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xefU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (0x10U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xdfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (0x20U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0xbfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (0x40U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 
            = ((0x7fU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1)) 
               | (0x80U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.a_out)));
    }
    vlSelfRef.acc_out[0U] = vlSymsp->TOP__systolic_array_2x2__DOT__pe_1_0.acc_out;
    if ((1U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [0U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffffeU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (1U & vlSelfRef.acc_out[0U]));
    }
    if ((2U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [0U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffffdU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (2U & vlSelfRef.acc_out[0U]));
    }
    if ((4U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [0U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffffbU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (4U & vlSelfRef.acc_out[0U]));
    }
    if ((8U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [0U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffff7U & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (8U & vlSelfRef.acc_out[0U]));
    }
    if ((0x10U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffffefU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x10U & vlSelfRef.acc_out[0U]));
    }
    if ((0x20U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffffdfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x20U & vlSelfRef.acc_out[0U]));
    }
    if ((0x40U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffffbfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x40U & vlSelfRef.acc_out[0U]));
    }
    if ((0x80U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffff7fU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x80U & vlSelfRef.acc_out[0U]));
    }
    if ((0x100U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffeffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x100U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x200U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffdffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x200U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x400U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffffbffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x400U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x800U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffff7ffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x800U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x1000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffefffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x1000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x2000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffdfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x2000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x4000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffffbfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x4000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x8000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffff7fffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x8000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x10000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffeffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x10000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x20000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffdffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x20000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x40000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfffbffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x40000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x80000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfff7ffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x80000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x100000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffefffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x100000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x200000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffdfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x200000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x400000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xffbfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x400000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x800000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xff7fffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x800000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x1000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfeffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x1000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x2000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfdffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x2000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x4000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xfbffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x4000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x8000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xf7ffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x8000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x10000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xefffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x10000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x20000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xdfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x20000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((0x40000000U & (vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0xbfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x40000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if (((vlSelfRef.acc_out[0U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[0U] 
            = ((0x7fffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [0U]) | (0x80000000U & vlSelfRef.acc_out
                         [0U]));
    }
    if ((1U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [1U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffffeU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (1U & vlSelfRef.acc_out[1U]));
    }
    if ((2U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [1U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffffdU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (2U & vlSelfRef.acc_out[1U]));
    }
    if ((4U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [1U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffffbU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (4U & vlSelfRef.acc_out[1U]));
    }
    if ((8U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
               [1U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffff7U & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (8U & vlSelfRef.acc_out[1U]));
    }
    if ((0x10U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffffefU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x10U & vlSelfRef.acc_out[1U]));
    }
    if ((0x20U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffffdfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x20U & vlSelfRef.acc_out[1U]));
    }
    if ((0x40U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffffbfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x40U & vlSelfRef.acc_out[1U]));
    }
    if ((0x80U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffff7fU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x80U & vlSelfRef.acc_out[1U]));
    }
    if ((0x100U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffeffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x100U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x200U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffdffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x200U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x400U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffffbffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x400U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x800U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffff7ffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x800U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x1000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffefffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x1000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x2000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffdfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x2000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x4000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffffbfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x4000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x8000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffff7fffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x8000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x10000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffeffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x10000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x20000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffdffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x20000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x40000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfffbffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x40000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x80000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfff7ffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x80000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x100000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffefffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x100000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x200000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffdfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x200000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x400000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xffbfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x400000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x800000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xff7fffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x800000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x1000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfeffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x1000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x2000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfdffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x2000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x4000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xfbffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x4000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x8000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xf7ffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x8000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x10000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xefffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x10000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x20000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xdfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x20000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if ((0x40000000U & (vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0xbfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x40000000U & vlSelfRef.acc_out
                         [1U]));
    }
    if (((vlSelfRef.acc_out[1U] ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out[1U] 
            = ((0x7fffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_out
                [1U]) | (0x80000000U & vlSelfRef.acc_out
                         [1U]));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__6(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xfeU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (1U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xfdU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (2U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xfbU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (4U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xf7U & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (8U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xefU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (0x10U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xdfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (0x20U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0xbfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (0x40U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 
            = ((0x7fU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1)) 
               | (0x80U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.a_out)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xfeU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (1U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xfdU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (2U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xfbU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (4U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
               ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xf7U & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (8U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xefU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (0x10U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xdfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (0x20U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0xbfU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (0x40U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out) 
                  ^ (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 
            = ((0x7fU & (IData)(vlSelfRef.systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1)) 
               | (0x80U & (IData)(vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.b_out)));
    }
    if ((1U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffffeU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (1U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((2U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffffdU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (2U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((4U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffffbU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (4U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((8U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
               ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffff7U & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (8U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x10U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffffefU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x10U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x20U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffffdfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x20U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x40U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffffbfU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x40U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x80U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                  ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffff7fU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x80U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x100U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffeffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x100U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x200U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffdffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x200U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x400U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffffbffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x400U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x800U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                   ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffff7ffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x800U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x1000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffefffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x1000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x2000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffdfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x2000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x4000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffffbfffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x4000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x8000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                    ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffff7fffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x8000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x10000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffeffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x10000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x20000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffdffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x20000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x40000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfffbffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x40000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x80000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                     ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfff7ffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x80000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x100000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffefffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x100000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x200000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffdfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x200000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x400000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xffbfffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x400000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x800000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                      ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xff7fffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x800000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x1000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfeffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x1000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x2000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfdffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x2000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x4000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xfbffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x4000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x8000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                       ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xf7ffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x8000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x10000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xefffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x10000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x20000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xdfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x20000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if ((0x40000000U & (vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
                        ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0xbfffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x40000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
    if (((vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out 
          ^ vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 
            = ((0x7fffffffU & vlSelfRef.systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1) 
               | (0x80000000U & vlSymsp->TOP__systolic_array_2x2__DOT__pe_0_0.acc_out));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__7(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__clk 
            = vlSelfRef.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__rst 
            = vlSelfRef.accelerator_tb__DOT__rst;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tvalid))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.accelerator_tb__DOT__s_axis_tvalid;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tlast))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.accelerator_tb__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__m_axis_tready) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tready))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tready 
            = vlSelfRef.accelerator_tb__DOT__m_axis_tready;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tdata) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__s_axis_tdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_comb__TOP__0(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt;
    vlSelfRef.accelerator_tb__DOT__s_axis_tready = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__load_done = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_a = 0U;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_b = 0U;
    if ((0U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state))) {
        if (vlSelfRef.accelerator_tb__DOT__dut__DOT__load_ready) {
            vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state = 1U;
            vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt = 0U;
            ++(vlSymsp->__Vcoverage[1232]);
        } else {
            ++(vlSymsp->__Vcoverage[1233]);
        }
        ++(vlSymsp->__Vcoverage[1234]);
    } else if ((1U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state))) {
        vlSelfRef.accelerator_tb__DOT__s_axis_tready = 1U;
        if (vlSelfRef.accelerator_tb__DOT__s_axis_tvalid) {
            vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_a = 1U;
            if ((7U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt))) {
                ++(vlSymsp->__Vcoverage[1235]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state = 2U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1236]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
            }
            ++(vlSymsp->__Vcoverage[1237]);
        } else {
            ++(vlSymsp->__Vcoverage[1238]);
        }
        ++(vlSymsp->__Vcoverage[1239]);
    } else if ((2U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state))) {
        vlSelfRef.accelerator_tb__DOT__s_axis_tready = 1U;
        if (vlSelfRef.accelerator_tb__DOT__s_axis_tvalid) {
            vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_b = 1U;
            if ((7U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt))) {
                ++(vlSymsp->__Vcoverage[1240]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__load_done = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last 
                    = vlSelfRef.accelerator_tb__DOT__s_axis_tlast;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state = 0U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1241]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
            }
            ++(vlSymsp->__Vcoverage[1242]);
        } else {
            ++(vlSymsp->__Vcoverage[1243]);
        }
        ++(vlSymsp->__Vcoverage[1244]);
    }
    ++(vlSymsp->__Vcoverage[1245]);
    if (((IData)(vlSelfRef.accelerator_tb__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tready))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.accelerator_tb__DOT__s_axis_tready;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__load_done) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_done))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_done 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__load_done;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_is_last))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_a) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_a))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_a 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_a;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_b) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_b))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_b 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__wr_en_b;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state 
            = ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state 
            = ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state)));
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt 
            = ((0xeU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt 
            = ((0xdU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt 
            = ((0xbU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)) 
               | (4U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt 
            = ((7U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt)) 
               | (8U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt)));
    }
}
