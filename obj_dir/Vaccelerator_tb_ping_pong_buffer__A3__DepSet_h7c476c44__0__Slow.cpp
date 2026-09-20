// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb_ping_pong_buffer__A3.h"

VL_ATTR_COLD void Vaccelerator_tb_ping_pong_buffer__A3___ctor_var_reset(Vaccelerator_tb_ping_pong_buffer__A3* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_ping_pong_buffer__A3___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->compute_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->load_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_addr = VL_RAND_RESET_I(3);
    vlSelf->wr_data = VL_RAND_RESET_Q(64);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->rd_addr = VL_RAND_RESET_I(3);
    vlSelf->rd_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__bank0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__bank1[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__compute_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__load_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wr_addr = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__wr_data = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__rd_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rd_addr = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__rd_data = VL_RAND_RESET_Q(64);
}
