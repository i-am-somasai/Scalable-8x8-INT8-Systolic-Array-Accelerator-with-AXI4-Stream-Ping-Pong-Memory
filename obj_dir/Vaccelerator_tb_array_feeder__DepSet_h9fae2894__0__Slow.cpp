// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb_array_feeder.h"

VL_ATTR_COLD void Vaccelerator_tb_array_feeder___ctor_var_reset(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->mem_data_in = VL_RAND_RESET_Q(64);
    vlSelf->skewed_data_out_flat = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__delay_regs[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_data_in = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__skewed_data_out_flat = VL_RAND_RESET_Q(64);
}
