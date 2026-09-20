// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb_systolic_pe.h"

VL_ATTR_COLD void Vaccelerator_tb_systolic_pe___ctor_var_reset(Vaccelerator_tb_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaccelerator_tb_systolic_pe___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->clear = VL_RAND_RESET_I(1);
    vlSelf->drain = VL_RAND_RESET_I(1);
    vlSelf->a_in = VL_RAND_RESET_I(8);
    vlSelf->b_in = VL_RAND_RESET_I(8);
    vlSelf->acc_in = VL_RAND_RESET_I(32);
    vlSelf->a_out = VL_RAND_RESET_I(8);
    vlSelf->b_out = VL_RAND_RESET_I(8);
    vlSelf->acc_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__product = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clear = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__drain = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__a_in = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__b_in = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__acc_in = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__a_out = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__b_out = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__acc_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__product = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__product_ext = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__acc_out = VL_RAND_RESET_I(32);
}
