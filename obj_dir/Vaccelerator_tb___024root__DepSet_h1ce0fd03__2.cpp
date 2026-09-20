// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb__Syms.h"
#include "Vaccelerator_tb___024root.h"

VL_INLINE_OPT void Vaccelerator_tb___024root___nba_sequent__TOP__2(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___nba_sequent__TOP__2\n"); );
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
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[0U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[1U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[2U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[3U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[4U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[5U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[6U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out[7U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U]));
    }
}

VL_INLINE_OPT void Vaccelerator_tb___024root___nba_sequent__TOP__3(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___nba_sequent__TOP__3\n"); );
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
                ++(vlSymsp->__Vcoverage[1105]);
            } else {
                vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid = 1U;
                if ((7U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                    ++(vlSymsp->__Vcoverage[1102]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 0U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[1103]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
                }
                ++(vlSymsp->__Vcoverage[1104]);
            }
            ++(vlSymsp->__Vcoverage[1106]);
        } else {
            if ((8U > (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                ++(vlSymsp->__Vcoverage[1093]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1094]);
            }
            if ((0U < (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                ++(vlSymsp->__Vcoverage[1095]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1096]);
            }
            if ((0x19U == (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))) {
                if (vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last) {
                    ++(vlSymsp->__Vcoverage[1097]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 3U;
                } else {
                    ++(vlSymsp->__Vcoverage[1098]);
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done = 1U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 0U;
                    vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile = 0U;
                }
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
                ++(vlSymsp->__Vcoverage[1099]);
            } else {
                ++(vlSymsp->__Vcoverage[1100]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
            }
            ++(vlSymsp->__Vcoverage[1101]);
        }
    } else if ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear = 1U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 2U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
    } else {
        if (vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile) {
                ++(vlSymsp->__Vcoverage[1087]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1088]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = 2U;
            }
            vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = 0U;
            ++(vlSymsp->__Vcoverage[1089]);
        } else {
            ++(vlSymsp->__Vcoverage[1090]);
        }
        ++(vlSymsp->__Vcoverage[1091]);
    }
    ++(vlSymsp->__Vcoverage[1107]);
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state 
            = ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state 
            = ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_en;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3eU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3dU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x3bU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (4U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x37U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (8U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x2fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (0x10U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if ((0x20U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt 
            = ((0x1fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt)) 
               | (0x20U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_drain;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_en))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__array_en 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_en;
    }
}

VL_INLINE_OPT void Vaccelerator_tb___024root___nba_sequent__TOP__4(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat)))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_a.skewed_data_out_flat 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat)))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1014]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1015]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__feeder_b.skewed_data_out_flat 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}
