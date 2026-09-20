// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe_ping_pong_buffer__A3.h"

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
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
        ++(vlSymsp->__Vcoverage[1881]);
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
        ++(vlSymsp->__Vcoverage[1882]);
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
        ++(vlSymsp->__Vcoverage[1883]);
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
        ++(vlSymsp->__Vcoverage[1884]);
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
        ++(vlSymsp->__Vcoverage[1885]);
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
        ++(vlSymsp->__Vcoverage[1886]);
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
        ++(vlSymsp->__Vcoverage[1887]);
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
        ++(vlSymsp->__Vcoverage[1888]);
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
        ++(vlSymsp->__Vcoverage[1889]);
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
        ++(vlSymsp->__Vcoverage[1890]);
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
        ++(vlSymsp->__Vcoverage[1891]);
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
        ++(vlSymsp->__Vcoverage[1892]);
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
        ++(vlSymsp->__Vcoverage[1893]);
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
        ++(vlSymsp->__Vcoverage[1894]);
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
        ++(vlSymsp->__Vcoverage[1895]);
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
        ++(vlSymsp->__Vcoverage[1896]);
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
        ++(vlSymsp->__Vcoverage[1897]);
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
        ++(vlSymsp->__Vcoverage[1898]);
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
        ++(vlSymsp->__Vcoverage[1899]);
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
        ++(vlSymsp->__Vcoverage[1900]);
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
        ++(vlSymsp->__Vcoverage[1901]);
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
        ++(vlSymsp->__Vcoverage[1902]);
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
        ++(vlSymsp->__Vcoverage[1903]);
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
        ++(vlSymsp->__Vcoverage[1904]);
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
        ++(vlSymsp->__Vcoverage[1905]);
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
        ++(vlSymsp->__Vcoverage[1906]);
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
        ++(vlSymsp->__Vcoverage[1907]);
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
        ++(vlSymsp->__Vcoverage[1908]);
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
        ++(vlSymsp->__Vcoverage[1909]);
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
        ++(vlSymsp->__Vcoverage[1910]);
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
        ++(vlSymsp->__Vcoverage[1911]);
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
        ++(vlSymsp->__Vcoverage[1912]);
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
        ++(vlSymsp->__Vcoverage[1913]);
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
        ++(vlSymsp->__Vcoverage[1914]);
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
        ++(vlSymsp->__Vcoverage[1915]);
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
        ++(vlSymsp->__Vcoverage[1916]);
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
        ++(vlSymsp->__Vcoverage[1917]);
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
        ++(vlSymsp->__Vcoverage[1918]);
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
        ++(vlSymsp->__Vcoverage[1919]);
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
        ++(vlSymsp->__Vcoverage[1920]);
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
        ++(vlSymsp->__Vcoverage[1921]);
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
        ++(vlSymsp->__Vcoverage[1922]);
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
        ++(vlSymsp->__Vcoverage[1923]);
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
        ++(vlSymsp->__Vcoverage[1924]);
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
        ++(vlSymsp->__Vcoverage[1925]);
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
        ++(vlSymsp->__Vcoverage[1926]);
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
        ++(vlSymsp->__Vcoverage[1927]);
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
        ++(vlSymsp->__Vcoverage[1928]);
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
        ++(vlSymsp->__Vcoverage[1929]);
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
        ++(vlSymsp->__Vcoverage[1930]);
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
        ++(vlSymsp->__Vcoverage[1931]);
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
        ++(vlSymsp->__Vcoverage[1932]);
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
        ++(vlSymsp->__Vcoverage[1933]);
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
        ++(vlSymsp->__Vcoverage[1934]);
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
        ++(vlSymsp->__Vcoverage[1935]);
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
        ++(vlSymsp->__Vcoverage[1936]);
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
        ++(vlSymsp->__Vcoverage[1937]);
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
        ++(vlSymsp->__Vcoverage[1938]);
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
        ++(vlSymsp->__Vcoverage[1939]);
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
        ++(vlSymsp->__Vcoverage[1940]);
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
        ++(vlSymsp->__Vcoverage[1941]);
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
        ++(vlSymsp->__Vcoverage[1942]);
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
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a;
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
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
            ++(vlSymsp->__Vcoverage[2017]);
            __VdlyVal__bank1__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank1__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank1__v0 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[2016]);
            __VdlyVal__bank0__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank0__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank0__v0 = 1U;
        }
        ++(vlSymsp->__Vcoverage[2018]);
    } else {
        ++(vlSymsp->__Vcoverage[2019]);
    }
    ++(vlSymsp->__Vcoverage[2020]);
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
            ++(vlSymsp->__Vcoverage[2012]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank1
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        } else {
            ++(vlSymsp->__Vcoverage[2011]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank0
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        }
        ++(vlSymsp->__Vcoverage[2013]);
    } else {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelfRef.rd_data = 0ULL;
    }
    ++(vlSymsp->__Vcoverage[2015]);
    if (__VdlySet__bank1__v0) {
        vlSelfRef.__PVT__bank1[__VdlyDim0__bank1__v0] 
            = __VdlyVal__bank1__v0;
    }
    if (__VdlySet__bank0__v0) {
        vlSelfRef.__PVT__bank0[__VdlyDim0__bank0__v0] 
            = __VdlyVal__bank0__v0;
    }
    if ((1U & ((IData)(vlSelfRef.rd_data) ^ (IData)(vlSelfRef.__Vtogcov__rd_data)))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.rd_data)))));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 1U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1948]);
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
        ++(vlSymsp->__Vcoverage[1949]);
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
        ++(vlSymsp->__Vcoverage[1950]);
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
        ++(vlSymsp->__Vcoverage[1951]);
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
        ++(vlSymsp->__Vcoverage[1952]);
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
        ++(vlSymsp->__Vcoverage[1953]);
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
        ++(vlSymsp->__Vcoverage[1954]);
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
        ++(vlSymsp->__Vcoverage[1955]);
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
        ++(vlSymsp->__Vcoverage[1956]);
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
        ++(vlSymsp->__Vcoverage[1957]);
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
        ++(vlSymsp->__Vcoverage[1958]);
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
        ++(vlSymsp->__Vcoverage[1959]);
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
        ++(vlSymsp->__Vcoverage[1960]);
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
        ++(vlSymsp->__Vcoverage[1961]);
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
        ++(vlSymsp->__Vcoverage[1962]);
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
        ++(vlSymsp->__Vcoverage[1963]);
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
        ++(vlSymsp->__Vcoverage[1964]);
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
        ++(vlSymsp->__Vcoverage[1965]);
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
        ++(vlSymsp->__Vcoverage[1966]);
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
        ++(vlSymsp->__Vcoverage[1967]);
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
        ++(vlSymsp->__Vcoverage[1968]);
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
        ++(vlSymsp->__Vcoverage[1969]);
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
        ++(vlSymsp->__Vcoverage[1970]);
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
        ++(vlSymsp->__Vcoverage[1971]);
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
        ++(vlSymsp->__Vcoverage[1972]);
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
        ++(vlSymsp->__Vcoverage[1973]);
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
        ++(vlSymsp->__Vcoverage[1974]);
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
        ++(vlSymsp->__Vcoverage[1975]);
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
        ++(vlSymsp->__Vcoverage[1976]);
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
        ++(vlSymsp->__Vcoverage[1977]);
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
        ++(vlSymsp->__Vcoverage[1978]);
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
        ++(vlSymsp->__Vcoverage[1979]);
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
        ++(vlSymsp->__Vcoverage[1980]);
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
        ++(vlSymsp->__Vcoverage[1981]);
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
        ++(vlSymsp->__Vcoverage[1982]);
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
        ++(vlSymsp->__Vcoverage[1983]);
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
        ++(vlSymsp->__Vcoverage[1984]);
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
        ++(vlSymsp->__Vcoverage[1985]);
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
        ++(vlSymsp->__Vcoverage[1986]);
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
        ++(vlSymsp->__Vcoverage[1987]);
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
        ++(vlSymsp->__Vcoverage[1988]);
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
        ++(vlSymsp->__Vcoverage[1989]);
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
        ++(vlSymsp->__Vcoverage[1990]);
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
        ++(vlSymsp->__Vcoverage[1991]);
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
        ++(vlSymsp->__Vcoverage[1992]);
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
        ++(vlSymsp->__Vcoverage[1993]);
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
        ++(vlSymsp->__Vcoverage[1994]);
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
        ++(vlSymsp->__Vcoverage[1995]);
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
        ++(vlSymsp->__Vcoverage[1996]);
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
        ++(vlSymsp->__Vcoverage[1997]);
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
        ++(vlSymsp->__Vcoverage[1998]);
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
        ++(vlSymsp->__Vcoverage[1999]);
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
        ++(vlSymsp->__Vcoverage[2000]);
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
        ++(vlSymsp->__Vcoverage[2001]);
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
        ++(vlSymsp->__Vcoverage[2002]);
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
        ++(vlSymsp->__Vcoverage[2003]);
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
        ++(vlSymsp->__Vcoverage[2004]);
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
        ++(vlSymsp->__Vcoverage[2005]);
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
        ++(vlSymsp->__Vcoverage[2006]);
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
        ++(vlSymsp->__Vcoverage[2007]);
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
        ++(vlSymsp->__Vcoverage[2008]);
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
        ++(vlSymsp->__Vcoverage[2009]);
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
        ++(vlSymsp->__Vcoverage[2010]);
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

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__1(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) 
         ^ (IData)(vlSelfRef.__Vtogcov__load_bank_sel))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlSelfRef.__Vtogcov__load_bank_sel = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) 
         ^ (IData)(vlSelfRef.__Vtogcov__compute_bank_sel))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlSelfRef.__Vtogcov__compute_bank_sel = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlSelfRef.__Vtogcov__wr_addr = ((6U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (1U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlSelfRef.__Vtogcov__wr_addr = ((5U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (2U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_addr)))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlSelfRef.__Vtogcov__wr_addr = ((3U & (IData)(vlSelfRef.__Vtogcov__wr_addr)) 
                                        | (4U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlSelfRef.__Vtogcov__rd_addr = ((6U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (1U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlSelfRef.__Vtogcov__rd_addr = ((5U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (2U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.__Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlSelfRef.__Vtogcov__rd_addr = ((3U & (IData)(vlSelfRef.__Vtogcov__rd_addr)) 
                                        | (4U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__2(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__rd_en))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlSelfRef.__Vtogcov__rd_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en;
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__3(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
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
        ++(vlSymsp->__Vcoverage[1881]);
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
        ++(vlSymsp->__Vcoverage[1882]);
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
        ++(vlSymsp->__Vcoverage[1883]);
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
        ++(vlSymsp->__Vcoverage[1884]);
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
        ++(vlSymsp->__Vcoverage[1885]);
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
        ++(vlSymsp->__Vcoverage[1886]);
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
        ++(vlSymsp->__Vcoverage[1887]);
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
        ++(vlSymsp->__Vcoverage[1888]);
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
        ++(vlSymsp->__Vcoverage[1889]);
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
        ++(vlSymsp->__Vcoverage[1890]);
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
        ++(vlSymsp->__Vcoverage[1891]);
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
        ++(vlSymsp->__Vcoverage[1892]);
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
        ++(vlSymsp->__Vcoverage[1893]);
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
        ++(vlSymsp->__Vcoverage[1894]);
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
        ++(vlSymsp->__Vcoverage[1895]);
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
        ++(vlSymsp->__Vcoverage[1896]);
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
        ++(vlSymsp->__Vcoverage[1897]);
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
        ++(vlSymsp->__Vcoverage[1898]);
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
        ++(vlSymsp->__Vcoverage[1899]);
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
        ++(vlSymsp->__Vcoverage[1900]);
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
        ++(vlSymsp->__Vcoverage[1901]);
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
        ++(vlSymsp->__Vcoverage[1902]);
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
        ++(vlSymsp->__Vcoverage[1903]);
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
        ++(vlSymsp->__Vcoverage[1904]);
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
        ++(vlSymsp->__Vcoverage[1905]);
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
        ++(vlSymsp->__Vcoverage[1906]);
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
        ++(vlSymsp->__Vcoverage[1907]);
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
        ++(vlSymsp->__Vcoverage[1908]);
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
        ++(vlSymsp->__Vcoverage[1909]);
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
        ++(vlSymsp->__Vcoverage[1910]);
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
        ++(vlSymsp->__Vcoverage[1911]);
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
        ++(vlSymsp->__Vcoverage[1912]);
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
        ++(vlSymsp->__Vcoverage[1913]);
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
        ++(vlSymsp->__Vcoverage[1914]);
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
        ++(vlSymsp->__Vcoverage[1915]);
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
        ++(vlSymsp->__Vcoverage[1916]);
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
        ++(vlSymsp->__Vcoverage[1917]);
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
        ++(vlSymsp->__Vcoverage[1918]);
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
        ++(vlSymsp->__Vcoverage[1919]);
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
        ++(vlSymsp->__Vcoverage[1920]);
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
        ++(vlSymsp->__Vcoverage[1921]);
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
        ++(vlSymsp->__Vcoverage[1922]);
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
        ++(vlSymsp->__Vcoverage[1923]);
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
        ++(vlSymsp->__Vcoverage[1924]);
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
        ++(vlSymsp->__Vcoverage[1925]);
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
        ++(vlSymsp->__Vcoverage[1926]);
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
        ++(vlSymsp->__Vcoverage[1927]);
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
        ++(vlSymsp->__Vcoverage[1928]);
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
        ++(vlSymsp->__Vcoverage[1929]);
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
        ++(vlSymsp->__Vcoverage[1930]);
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
        ++(vlSymsp->__Vcoverage[1931]);
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
        ++(vlSymsp->__Vcoverage[1932]);
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
        ++(vlSymsp->__Vcoverage[1933]);
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
        ++(vlSymsp->__Vcoverage[1934]);
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
        ++(vlSymsp->__Vcoverage[1935]);
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
        ++(vlSymsp->__Vcoverage[1936]);
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
        ++(vlSymsp->__Vcoverage[1937]);
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
        ++(vlSymsp->__Vcoverage[1938]);
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
        ++(vlSymsp->__Vcoverage[1939]);
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
        ++(vlSymsp->__Vcoverage[1940]);
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
        ++(vlSymsp->__Vcoverage[1941]);
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
        ++(vlSymsp->__Vcoverage[1942]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffffffffffffffULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_a;
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__wr_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__wr_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1880]);
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
        ++(vlSymsp->__Vcoverage[1881]);
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
        ++(vlSymsp->__Vcoverage[1882]);
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
        ++(vlSymsp->__Vcoverage[1883]);
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
        ++(vlSymsp->__Vcoverage[1884]);
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
        ++(vlSymsp->__Vcoverage[1885]);
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
        ++(vlSymsp->__Vcoverage[1886]);
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
        ++(vlSymsp->__Vcoverage[1887]);
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
        ++(vlSymsp->__Vcoverage[1888]);
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
        ++(vlSymsp->__Vcoverage[1889]);
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
        ++(vlSymsp->__Vcoverage[1890]);
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
        ++(vlSymsp->__Vcoverage[1891]);
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
        ++(vlSymsp->__Vcoverage[1892]);
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
        ++(vlSymsp->__Vcoverage[1893]);
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
        ++(vlSymsp->__Vcoverage[1894]);
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
        ++(vlSymsp->__Vcoverage[1895]);
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
        ++(vlSymsp->__Vcoverage[1896]);
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
        ++(vlSymsp->__Vcoverage[1897]);
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
        ++(vlSymsp->__Vcoverage[1898]);
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
        ++(vlSymsp->__Vcoverage[1899]);
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
        ++(vlSymsp->__Vcoverage[1900]);
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
        ++(vlSymsp->__Vcoverage[1901]);
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
        ++(vlSymsp->__Vcoverage[1902]);
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
        ++(vlSymsp->__Vcoverage[1903]);
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
        ++(vlSymsp->__Vcoverage[1904]);
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
        ++(vlSymsp->__Vcoverage[1905]);
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
        ++(vlSymsp->__Vcoverage[1906]);
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
        ++(vlSymsp->__Vcoverage[1907]);
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
        ++(vlSymsp->__Vcoverage[1908]);
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
        ++(vlSymsp->__Vcoverage[1909]);
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
        ++(vlSymsp->__Vcoverage[1910]);
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
        ++(vlSymsp->__Vcoverage[1911]);
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
        ++(vlSymsp->__Vcoverage[1912]);
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
        ++(vlSymsp->__Vcoverage[1913]);
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
        ++(vlSymsp->__Vcoverage[1914]);
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
        ++(vlSymsp->__Vcoverage[1915]);
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
        ++(vlSymsp->__Vcoverage[1916]);
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
        ++(vlSymsp->__Vcoverage[1917]);
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
        ++(vlSymsp->__Vcoverage[1918]);
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
        ++(vlSymsp->__Vcoverage[1919]);
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
        ++(vlSymsp->__Vcoverage[1920]);
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
        ++(vlSymsp->__Vcoverage[1921]);
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
        ++(vlSymsp->__Vcoverage[1922]);
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
        ++(vlSymsp->__Vcoverage[1923]);
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
        ++(vlSymsp->__Vcoverage[1924]);
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
        ++(vlSymsp->__Vcoverage[1925]);
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
        ++(vlSymsp->__Vcoverage[1926]);
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
        ++(vlSymsp->__Vcoverage[1927]);
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
        ++(vlSymsp->__Vcoverage[1928]);
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
        ++(vlSymsp->__Vcoverage[1929]);
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
        ++(vlSymsp->__Vcoverage[1930]);
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
        ++(vlSymsp->__Vcoverage[1931]);
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
        ++(vlSymsp->__Vcoverage[1932]);
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
        ++(vlSymsp->__Vcoverage[1933]);
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
        ++(vlSymsp->__Vcoverage[1934]);
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
        ++(vlSymsp->__Vcoverage[1935]);
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
        ++(vlSymsp->__Vcoverage[1936]);
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
        ++(vlSymsp->__Vcoverage[1937]);
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
        ++(vlSymsp->__Vcoverage[1938]);
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
        ++(vlSymsp->__Vcoverage[1939]);
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
        ++(vlSymsp->__Vcoverage[1940]);
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
        ++(vlSymsp->__Vcoverage[1941]);
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
        ++(vlSymsp->__Vcoverage[1942]);
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
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b;
    }
}

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0\n"); );
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
            ++(vlSymsp->__Vcoverage[2017]);
            __VdlyVal__bank1__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank1__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank1__v0 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[2016]);
            __VdlyVal__bank0__v0 = vlSymsp->TOP.accelerator_tb__DOT__s_axis_tdata;
            __VdlyDim0__bank0__v0 = (7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt));
            __VdlySet__bank0__v0 = 1U;
        }
        ++(vlSymsp->__Vcoverage[2018]);
    } else {
        ++(vlSymsp->__Vcoverage[2019]);
    }
    ++(vlSymsp->__Vcoverage[2020]);
    if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__rd_en) {
        if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
            ++(vlSymsp->__Vcoverage[2012]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank1
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        } else {
            ++(vlSymsp->__Vcoverage[2011]);
            vlSelfRef.rd_data = vlSelfRef.__PVT__bank0
                [(7U & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt))];
        }
        ++(vlSymsp->__Vcoverage[2013]);
    } else {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelfRef.rd_data = 0ULL;
    }
    ++(vlSymsp->__Vcoverage[2015]);
    if (__VdlySet__bank1__v0) {
        vlSelfRef.__PVT__bank1[__VdlyDim0__bank1__v0] 
            = __VdlyVal__bank1__v0;
    }
    if (__VdlySet__bank0__v0) {
        vlSelfRef.__PVT__bank0[__VdlyDim0__bank0__v0] 
            = __VdlyVal__bank0__v0;
    }
    if ((1U & ((IData)(vlSelfRef.rd_data) ^ (IData)(vlSelfRef.__Vtogcov__rd_data)))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlSelfRef.__Vtogcov__rd_data = ((0xfffffffffffffffeULL 
                                         & vlSelfRef.__Vtogcov__rd_data) 
                                        | (IData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.rd_data)))));
    }
    if ((1U & ((IData)((vlSelfRef.rd_data >> 1U)) ^ (IData)(
                                                            (vlSelfRef.__Vtogcov__rd_data 
                                                             >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1948]);
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
        ++(vlSymsp->__Vcoverage[1949]);
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
        ++(vlSymsp->__Vcoverage[1950]);
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
        ++(vlSymsp->__Vcoverage[1951]);
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
        ++(vlSymsp->__Vcoverage[1952]);
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
        ++(vlSymsp->__Vcoverage[1953]);
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
        ++(vlSymsp->__Vcoverage[1954]);
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
        ++(vlSymsp->__Vcoverage[1955]);
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
        ++(vlSymsp->__Vcoverage[1956]);
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
        ++(vlSymsp->__Vcoverage[1957]);
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
        ++(vlSymsp->__Vcoverage[1958]);
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
        ++(vlSymsp->__Vcoverage[1959]);
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
        ++(vlSymsp->__Vcoverage[1960]);
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
        ++(vlSymsp->__Vcoverage[1961]);
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
        ++(vlSymsp->__Vcoverage[1962]);
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
        ++(vlSymsp->__Vcoverage[1963]);
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
        ++(vlSymsp->__Vcoverage[1964]);
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
        ++(vlSymsp->__Vcoverage[1965]);
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
        ++(vlSymsp->__Vcoverage[1966]);
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
        ++(vlSymsp->__Vcoverage[1967]);
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
        ++(vlSymsp->__Vcoverage[1968]);
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
        ++(vlSymsp->__Vcoverage[1969]);
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
        ++(vlSymsp->__Vcoverage[1970]);
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
        ++(vlSymsp->__Vcoverage[1971]);
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
        ++(vlSymsp->__Vcoverage[1972]);
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
        ++(vlSymsp->__Vcoverage[1973]);
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
        ++(vlSymsp->__Vcoverage[1974]);
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
        ++(vlSymsp->__Vcoverage[1975]);
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
        ++(vlSymsp->__Vcoverage[1976]);
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
        ++(vlSymsp->__Vcoverage[1977]);
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
        ++(vlSymsp->__Vcoverage[1978]);
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
        ++(vlSymsp->__Vcoverage[1979]);
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
        ++(vlSymsp->__Vcoverage[1980]);
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
        ++(vlSymsp->__Vcoverage[1981]);
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
        ++(vlSymsp->__Vcoverage[1982]);
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
        ++(vlSymsp->__Vcoverage[1983]);
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
        ++(vlSymsp->__Vcoverage[1984]);
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
        ++(vlSymsp->__Vcoverage[1985]);
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
        ++(vlSymsp->__Vcoverage[1986]);
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
        ++(vlSymsp->__Vcoverage[1987]);
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
        ++(vlSymsp->__Vcoverage[1988]);
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
        ++(vlSymsp->__Vcoverage[1989]);
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
        ++(vlSymsp->__Vcoverage[1990]);
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
        ++(vlSymsp->__Vcoverage[1991]);
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
        ++(vlSymsp->__Vcoverage[1992]);
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
        ++(vlSymsp->__Vcoverage[1993]);
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
        ++(vlSymsp->__Vcoverage[1994]);
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
        ++(vlSymsp->__Vcoverage[1995]);
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
        ++(vlSymsp->__Vcoverage[1996]);
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
        ++(vlSymsp->__Vcoverage[1997]);
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
        ++(vlSymsp->__Vcoverage[1998]);
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
        ++(vlSymsp->__Vcoverage[1999]);
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
        ++(vlSymsp->__Vcoverage[2000]);
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
        ++(vlSymsp->__Vcoverage[2001]);
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
        ++(vlSymsp->__Vcoverage[2002]);
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
        ++(vlSymsp->__Vcoverage[2003]);
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
        ++(vlSymsp->__Vcoverage[2004]);
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
        ++(vlSymsp->__Vcoverage[2005]);
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
        ++(vlSymsp->__Vcoverage[2006]);
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
        ++(vlSymsp->__Vcoverage[2007]);
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
        ++(vlSymsp->__Vcoverage[2008]);
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
        ++(vlSymsp->__Vcoverage[2009]);
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
        ++(vlSymsp->__Vcoverage[2010]);
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

VL_INLINE_OPT void Vsystolic_pe_ping_pong_buffer__A3___nba_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0(Vsystolic_pe_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_ping_pong_buffer__A3___nba_comb__TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__wr_en_b;
    }
}
