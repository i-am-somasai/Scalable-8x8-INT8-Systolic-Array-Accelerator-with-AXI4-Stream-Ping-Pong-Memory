// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb__Syms.h"
#include "Vaccelerator_tb_ping_pong_buffer__A3.h"

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___act_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___act_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffdULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffbULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffff7ULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffefULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffdfULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffbfULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffff7fULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffeffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffdffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffbffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffff7ffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffefffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffdfffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffbfffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffff7fffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffeffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffdffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffbffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffff7ffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffefffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffdfffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffbfffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffff7fffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffeffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffdffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffbffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffff7ffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffefffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffdfffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffbfffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffff7fffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffeffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffdffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffbffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffff7ffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffefffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffdfffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffbfffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffff7fffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffeffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffdffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffbffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffff7ffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffefffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffdfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffbfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffff7fffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x30U))))) 
                                           << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x31U))))) 
                                           << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x32U))))) 
                                           << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7ffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x33U))))) 
                                           << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x34U))))) 
                                           << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x35U))))) 
                                           << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x36U))))) 
                                           << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x37U))))) 
                                           << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x38U))))) 
                                           << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x39U))))) 
                                           << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3aU))))) 
                                           << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3bU))))) 
                                           << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3cU))))) 
                                           << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3dU))))) 
                                           << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3eU))))) 
                                           << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                  ^ vlSelfRef.__Vtogcov__wr_data) >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__bank1__v0;
    __VdlyVal__bank1__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bank1__v0;
    __VdlyDim0__bank1__v0 = 0;
    CData/*0:0*/ __VdlySet__bank1__v0;
    __VdlySet__bank1__v0 = 0;
    QData/*63:0*/ __VdlyVal__bank0__v0;
    __VdlyVal__bank0__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bank0__v0;
    __VdlyDim0__bank0__v0 = 0;
    CData/*0:0*/ __VdlySet__bank0__v0;
    __VdlySet__bank0__v0 = 0;
    // Body
    __VdlySet__bank1__v0 = 0U;
    __VdlySet__bank0__v0 = 0U;
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) {
            ++(vlSymsp->__Vcoverage[1823]);
            __VdlyVal__bank1__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank1__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank1__v0 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1822]);
            __VdlyVal__bank0__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank0__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank0__v0 = 1U;
        }
        ++(vlSymsp->__Vcoverage[1824]);
    } else {
        ++(vlSymsp->__Vcoverage[1825]);
    }
    ++(vlSymsp->__Vcoverage[1826]);
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
            ++(vlSymsp->__Vcoverage[1818]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank1
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        } else {
            ++(vlSymsp->__Vcoverage[1817]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank0
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        }
        ++(vlSymsp->__Vcoverage[1819]);
    } else {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelfRef.rd_data = 0ULL;
    }
    ++(vlSymsp->__Vcoverage[1821]);
    if (__VdlySet__bank1__v0) {
        vlSelfRef.__PVT__bank1[__VdlyDim0__bank1__v0] 
            = __VdlyVal__bank1__v0;
    }
    if (__VdlySet__bank0__v0) {
        vlSelfRef.__PVT__bank0[__VdlyDim0__bank0__v0] 
            = __VdlyVal__bank0__v0;
    }
    if ((1U & ((IData)(vlSelfRef.rd_data) ^ (IData)(vlSelfRef.__Vtogcov__rd_data)))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.rd_data)))));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 1U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffdULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 2U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffbULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 3U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffff7ULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 4U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffefULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 5U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffdfULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 6U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffbfULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 7U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffff7fULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 8U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffeffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 9U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffdffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xaU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffbffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xbU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffff7ffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xcU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffefffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xdU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffdfffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xeU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffbfffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xfU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffff7fffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x10U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffeffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x11U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffdffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x12U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffbffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x13U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffff7ffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x14U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffefffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x15U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffdfffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x16U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffbfffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x17U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffff7fffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x18U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffeffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x19U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffdffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffbffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffff7ffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffefffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffdfffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffbfffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1fU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffff7fffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x20U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffeffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x21U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffdffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x22U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffbffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x23U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffff7ffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x24U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffefffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x25U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffdfffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x26U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffbfffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x27U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffff7fffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x28U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffeffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x29U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffdffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffbffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffff7ffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffefffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffdfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffbfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2fU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffff7fffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x30U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffeffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x30U))))) 
                                           << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x31U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffdffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x31U))))) 
                                           << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x32U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffbffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x32U))))) 
                                           << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x33U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfff7ffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x33U))))) 
                                           << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x34U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffefffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x34U))))) 
                                           << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x35U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffdfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x35U))))) 
                                           << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x36U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffbfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x36U))))) 
                                           << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x37U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelfRef.__Vtogcov__rd_data = ((0xff7fffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x37U))))) 
                                           << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x38U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfeffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x38U))))) 
                                           << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x39U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfdffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x39U))))) 
                                           << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfbffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3aU))))) 
                                           << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelfRef.__Vtogcov__rd_data = ((0xf7ffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3bU))))) 
                                           << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelfRef.__Vtogcov__rd_data = ((0xefffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3cU))))) 
                                           << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelfRef.__Vtogcov__rd_data = ((0xdfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3dU))))) 
                                           << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelfRef.__Vtogcov__rd_data = ((0xbfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3eU))))) 
                                           << 0x3eU));
    }
    if ((IData)(((vlSelfRef.rd_data ^ vlSelfRef.__Vtogcov__rd_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelfRef.__Vtogcov__rd_data = ((0x7fffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU));
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__1(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) 
         ^ (IData)(vlSelfRef.__Vtogcov__load_bank_sel))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.__Vtogcov__load_bank_sel = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) 
         ^ (IData)(vlSelfRef.__Vtogcov__compute_bank_sel))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.__Vtogcov__compute_bank_sel = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.__Vtogcov__wr_addr = ((6U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (1U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.__Vtogcov__wr_addr = ((5U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (2U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.__Vtogcov__wr_addr = ((3U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (4U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlSelfRef.__Vtogcov__rd_addr = ((6U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (1U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlSelfRef.__Vtogcov__rd_addr = ((5U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (2U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlSelfRef.__Vtogcov__rd_addr = ((3U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (4U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__2(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__rd_en))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlSelfRef.__Vtogcov__rd_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___act_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___act_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffdULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffbULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffff7ULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffefULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffdfULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffffbfULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffff7fULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffeffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffdffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffbffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffff7ffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffefffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffdfffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffffbfffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffff7fffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffeffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffdffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffbffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffff7ffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffefffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffdfffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffffbfffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffff7fffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffeffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffdffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffbffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffff7ffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffefffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffdfffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffffbfffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffff7fffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffeffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffdffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffbffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffff7ffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffefffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffdfffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffffbfffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffff7fffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffeffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffdffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffbffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffff7ffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffefffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffdfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffffbfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffff7fffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x30U))))) 
                                           << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x31U))))) 
                                           << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x32U))))) 
                                           << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7ffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x33U))))) 
                                           << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x34U))))) 
                                           << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x35U))))) 
                                           << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x36U))))) 
                                           << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x37U))))) 
                                           << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x38U))))) 
                                           << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x39U))))) 
                                           << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3aU))))) 
                                           << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3bU))))) 
                                           << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3cU))))) 
                                           << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3dU))))) 
                                           << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3eU))))) 
                                           << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                  ^ vlSelfRef.__Vtogcov__wr_data) >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU));
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__bank1__v0;
    __VdlyVal__bank1__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bank1__v0;
    __VdlyDim0__bank1__v0 = 0;
    CData/*0:0*/ __VdlySet__bank1__v0;
    __VdlySet__bank1__v0 = 0;
    QData/*63:0*/ __VdlyVal__bank0__v0;
    __VdlyVal__bank0__v0 = 0;
    CData/*2:0*/ __VdlyDim0__bank0__v0;
    __VdlyDim0__bank0__v0 = 0;
    CData/*0:0*/ __VdlySet__bank0__v0;
    __VdlySet__bank0__v0 = 0;
    // Body
    __VdlySet__bank1__v0 = 0U;
    __VdlySet__bank0__v0 = 0U;
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) {
            ++(vlSymsp->__Vcoverage[1823]);
            __VdlyVal__bank1__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank1__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank1__v0 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1822]);
            __VdlyVal__bank0__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank0__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank0__v0 = 1U;
        }
        ++(vlSymsp->__Vcoverage[1824]);
    } else {
        ++(vlSymsp->__Vcoverage[1825]);
    }
    ++(vlSymsp->__Vcoverage[1826]);
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
            ++(vlSymsp->__Vcoverage[1818]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank1
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        } else {
            ++(vlSymsp->__Vcoverage[1817]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank0
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        }
        ++(vlSymsp->__Vcoverage[1819]);
    } else {
        ++(vlSymsp->__Vcoverage[1820]);
        vlSelfRef.rd_data = 0ULL;
    }
    ++(vlSymsp->__Vcoverage[1821]);
    if (__VdlySet__bank1__v0) {
        vlSelfRef.__PVT__bank1[__VdlyDim0__bank1__v0] 
            = __VdlyVal__bank1__v0;
    }
    if (__VdlySet__bank0__v0) {
        vlSelfRef.__PVT__bank0[__VdlyDim0__bank0__v0] 
            = __VdlyVal__bank0__v0;
    }
    if ((1U & ((IData)(vlSelfRef.rd_data) ^ (IData)(vlSelfRef.__Vtogcov__rd_data)))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.rd_data)))));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 1U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffdULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 1U))))) 
                                           << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 2U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffbULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 2U))))) 
                                           << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 3U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffff7ULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 3U))))) 
                                           << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 4U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffefULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 4U))))) 
                                           << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 5U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffdfULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 5U))))) 
                                           << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 6U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffffbfULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 6U))))) 
                                           << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 7U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffff7fULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 7U))))) 
                                           << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 8U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffeffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 8U))))) 
                                           << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 9U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffdffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 9U))))) 
                                           << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xaU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffbffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xaU))))) 
                                           << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xbU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffff7ffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xbU))))) 
                                           << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xcU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffefffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xcU))))) 
                                           << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xdU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffdfffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xdU))))) 
                                           << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xeU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffffbfffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xeU))))) 
                                           << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0xfU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffff7fffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0xfU))))) 
                                           << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x10U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffeffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x10U))))) 
                                           << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x11U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffdffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x11U))))) 
                                           << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x12U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffbffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x12U))))) 
                                           << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x13U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffff7ffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x13U))))) 
                                           << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x14U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffefffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x14U))))) 
                                           << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x15U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffdfffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x15U))))) 
                                           << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x16U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffffbfffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x16U))))) 
                                           << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x17U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffff7fffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x17U))))) 
                                           << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x18U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffeffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x18U))))) 
                                           << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x19U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffdffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x19U))))) 
                                           << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffbffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1aU))))) 
                                           << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffff7ffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1bU))))) 
                                           << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffefffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1cU))))) 
                                           << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffdfffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1dU))))) 
                                           << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffffbfffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1eU))))) 
                                           << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x1fU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffff7fffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x1fU))))) 
                                           << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x20U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffeffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x20U))))) 
                                           << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x21U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffdffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x21U))))) 
                                           << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x22U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffbffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x22U))))) 
                                           << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x23U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffff7ffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x23U))))) 
                                           << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x24U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffefffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x24U))))) 
                                           << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x25U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffdfffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x25U))))) 
                                           << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x26U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffffbfffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x26U))))) 
                                           << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x27U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffff7fffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x27U))))) 
                                           << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x28U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffeffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x28U))))) 
                                           << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x29U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffdffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x29U))))) 
                                           << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffbffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2aU))))) 
                                           << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffff7ffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2bU))))) 
                                           << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffefffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2cU))))) 
                                           << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffdfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2dU))))) 
                                           << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffffbfffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2eU))))) 
                                           << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x2fU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffff7fffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x2fU))))) 
                                           << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x30U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffeffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x30U))))) 
                                           << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x31U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffdffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x31U))))) 
                                           << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x32U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffbffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x32U))))) 
                                           << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x33U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfff7ffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x33U))))) 
                                           << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x34U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffefffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x34U))))) 
                                           << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x35U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffdfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x35U))))) 
                                           << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x36U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlSelfRef.__Vtogcov__rd_data = ((0xffbfffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x36U))))) 
                                           << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x37U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlSelfRef.__Vtogcov__rd_data = ((0xff7fffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x37U))))) 
                                           << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x38U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfeffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x38U))))) 
                                           << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x39U)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfdffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x39U))))) 
                                           << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3aU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfbffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3aU))))) 
                                           << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3bU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlSelfRef.__Vtogcov__rd_data = ((0xf7ffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3bU))))) 
                                           << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3cU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlSelfRef.__Vtogcov__rd_data = ((0xefffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3cU))))) 
                                           << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3dU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlSelfRef.__Vtogcov__rd_data = ((0xdfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3dU))))) 
                                           << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 0x3eU)) 
               ^ (IData)((vlSelfRef.__Vtogcov__rd_data 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlSelfRef.__Vtogcov__rd_data = ((0xbfffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3eU))))) 
                                           << 0x3eU));
    }
    if ((IData)(((vlSelfRef.rd_data ^ vlSelfRef.__Vtogcov__rd_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlSelfRef.__Vtogcov__rd_data = ((0x7fffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.rd_data 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU));
    }
}
