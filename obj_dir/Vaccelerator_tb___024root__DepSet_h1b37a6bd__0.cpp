// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb___024root.h"

void Vaccelerator_tb___024root___timing_resume(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7584d8bb__0.resume(
                                                   "@(negedge accelerator_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7584d7fa__0.resume(
                                                   "@(posedge accelerator_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vaccelerator_tb___024root___timing_commit(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7584d8bb__0.commit(
                                                   "@(negedge accelerator_tb.clk)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7584d7fa__0.commit(
                                                   "@(posedge accelerator_tb.clk)");
    }
}

void Vaccelerator_tb___024root___eval_triggers__act(Vaccelerator_tb___024root* vlSelf);
void Vaccelerator_tb___024root___eval_act(Vaccelerator_tb___024root* vlSelf);

bool Vaccelerator_tb___024root___eval_phase__act(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaccelerator_tb___024root___eval_triggers__act(vlSelf);
    Vaccelerator_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaccelerator_tb___024root___timing_resume(vlSelf);
        Vaccelerator_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vaccelerator_tb___024root___eval_nba(Vaccelerator_tb___024root* vlSelf);

bool Vaccelerator_tb___024root___eval_phase__nba(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaccelerator_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccelerator_tb___024root___dump_triggers__nba(Vaccelerator_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccelerator_tb___024root___dump_triggers__act(Vaccelerator_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vaccelerator_tb___024root___eval(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst 
        = vlSelfRef.accelerator_tb__DOT__rst;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_0_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_1_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_1_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata 
        = vlSelfRef.accelerator_tb__DOT__s_axis_tdata;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_2_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[0U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[0U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[1U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[1U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[2U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[2U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[3U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[3U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[4U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[4U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[5U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[5U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[6U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[6U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[7U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[7U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid 
        = vlSelfRef.accelerator_tb__DOT__s_axis_tvalid;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tready 
        = vlSelfRef.accelerator_tb__DOT__s_axis_tready;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__m_axis_tready 
        = vlSelfRef.accelerator_tb__DOT__m_axis_tready;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tlast 
        = vlSelfRef.accelerator_tb__DOT__s_axis_tlast;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__array_clear 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__array_clear;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[0U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[0U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[1U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[1U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[2U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[2U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[3U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[3U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[4U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[4U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[5U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[5U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[6U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[6U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[7U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[7U];
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0;
    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaccelerator_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/accelerator_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vaccelerator_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/accelerator_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaccelerator_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaccelerator_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaccelerator_tb___024root___eval_debug_assertions(Vaccelerator_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccelerator_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
