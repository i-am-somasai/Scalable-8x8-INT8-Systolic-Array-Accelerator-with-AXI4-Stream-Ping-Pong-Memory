// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe_systolic_pe.h"

VL_INLINE_OPT void Vsystolic_pe_systolic_pe___nba_sequent__TOP__systolic_array_2x2__DOT__pe_0_0__0(Vsystolic_pe_systolic_pe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsystolic_pe_systolic_pe___nba_sequent__TOP__systolic_array_2x2__DOT__pe_0_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__acc_out = vlSelfRef.acc_out;
}
