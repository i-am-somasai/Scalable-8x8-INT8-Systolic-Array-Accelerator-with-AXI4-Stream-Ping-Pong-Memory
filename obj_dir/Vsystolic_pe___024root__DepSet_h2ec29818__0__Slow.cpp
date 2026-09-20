// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe___024root.h"

VL_ATTR_COLD void Vsystolic_pe___024root___eval_static(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsystolic_pe___024root___eval_final(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_pe___024root___dump_triggers__stl(Vsystolic_pe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_pe___024root___eval_phase__stl(Vsystolic_pe___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_pe___024root___eval_settle(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_pe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/array/systolic_array_2x2.sv", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsystolic_pe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_pe___024root___dump_triggers__stl(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_pe___024root___eval_triggers__stl(Vsystolic_pe___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_pe___024root___eval_stl(Vsystolic_pe___024root* vlSelf);

VL_ATTR_COLD bool Vsystolic_pe___024root___eval_phase__stl(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystolic_pe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsystolic_pe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_pe___024root___dump_triggers__ico(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_pe___024root___dump_triggers__act(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge accelerator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_pe___024root___dump_triggers__nba(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge accelerator_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_pe___024root____Vm_traceActivitySetAll(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vsystolic_pe___024root___ctor_var_reset(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->clear = VL_RAND_RESET_I(1);
    vlSelf->drain = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->a_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->b_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->acc_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->systolic_array_2x2__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__clear = VL_RAND_RESET_I(1);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__drain = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array_2x2__DOT____Vtogcov__a_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array_2x2__DOT____Vtogcov__b_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array_2x2__DOT____Vtogcov__acc_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->systolic_array_2x2__DOT____Vtogcov__a_w_0_0to1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__a_w_1_0to1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__b_w_0_0to1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__b_w_1_0to1 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__acc_w_0_0to1 = VL_RAND_RESET_I(32);
    vlSelf->systolic_array_2x2__DOT____Vtogcov__acc_w_1_0to1 = VL_RAND_RESET_I(32);
    vlSelf->accelerator_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__s_axis_tdata = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__s_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__s_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__m_axis_tready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->accelerator_tb__DOT__mem_A[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->accelerator_tb__DOT__mem_B[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->accelerator_tb__DOT__mem_K_tiles[__Vi0] = 0;
    }
    vlSelf->accelerator_tb__DOT__fd_out = 0;
    vlSelf->accelerator_tb__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__s_axis_tdata = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT____Vtogcov__s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__s_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__s_axis_tlast = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT____Vtogcov__m_axis_tdata);
    vlSelf->accelerator_tb__DOT____Vtogcov__m_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__m_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT____Vtogcov__m_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__push_thread__DOT__tile_ptr = 0;
    vlSelf->accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__t = 0;
    vlSelf->accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k_tiles = 0;
    vlSelf->accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->accelerator_tb__DOT__pull_thread__DOT__unnamedblk6__DOT__t = 0;
    vlSelf->accelerator_tb__DOT__pull_thread__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->accelerator_tb__DOT__dut__DOT__load_done = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__load_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__load_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__compute_done = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__compute_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__compute_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__wr_en_a = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__wr_en_b = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__rd_phase = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__rd_phase_q = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__array_en = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__array_clear = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__array_drain = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__flat_a_in = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT__flat_b_in = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT__flat_acc_out);
    vlSelf->accelerator_tb__DOT__dut__DOT__internal_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__internal_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__internal_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__load_done = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__load_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__load_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__compute_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__compute_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__compute_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__load_bank_sel = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_a = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_b = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a = VL_RAND_RESET_I(3);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr = VL_RAND_RESET_I(3);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase_q = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__array_en = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__internal_ready = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT___Vpast_1_0 = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT___Vpast_3_0);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt = VL_RAND_RESET_I(4);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt = VL_RAND_RESET_I(4);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__beat_cnt = VL_RAND_RESET_I(4);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt = VL_RAND_RESET_I(4);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0 = VL_RAND_RESET_Q(64);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_valid = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_is_last = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt = VL_RAND_RESET_I(6);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt = VL_RAND_RESET_I(6);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state = VL_RAND_RESET_I(2);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt = VL_RAND_RESET_I(6);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt = VL_RAND_RESET_I(6);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__is_first_tile = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_last_reg = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_1_0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0);
    VL_RAND_RESET_W(256, vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__s_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__m_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__s_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__array_clear = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__accelerator_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
