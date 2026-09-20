// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe_array_feeder.h"

VL_INLINE_OPT void Vsystolic_pe_array_feeder___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__delay_regs__v0;
    __VdlySet__delay_regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v1;
    __VdlyVal__delay_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v1;
    __VdlySet__delay_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v2;
    __VdlySet__delay_regs__v2 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v3;
    __VdlyVal__delay_regs__v3 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v3;
    __VdlySet__delay_regs__v3 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v4;
    __VdlySet__delay_regs__v4 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v5;
    __VdlyVal__delay_regs__v5 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v5;
    __VdlySet__delay_regs__v5 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v6;
    __VdlySet__delay_regs__v6 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v7;
    __VdlyVal__delay_regs__v7 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v7;
    __VdlySet__delay_regs__v7 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v8;
    __VdlySet__delay_regs__v8 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v9;
    __VdlyVal__delay_regs__v9 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v9;
    __VdlySet__delay_regs__v9 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v10;
    __VdlySet__delay_regs__v10 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v11;
    __VdlyVal__delay_regs__v11 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v11;
    __VdlySet__delay_regs__v11 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v12;
    __VdlySet__delay_regs__v12 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v13;
    __VdlyVal__delay_regs__v13 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v13;
    __VdlySet__delay_regs__v13 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v14;
    __VdlySet__delay_regs__v14 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v15;
    __VdlyVal__delay_regs__v15 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v15;
    __VdlySet__delay_regs__v15 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v16;
    __VdlySet__delay_regs__v16 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v17;
    __VdlyVal__delay_regs__v17 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v17;
    __VdlySet__delay_regs__v17 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v18;
    __VdlySet__delay_regs__v18 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v19;
    __VdlyVal__delay_regs__v19 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v19;
    __VdlySet__delay_regs__v19 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v20;
    __VdlySet__delay_regs__v20 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v21;
    __VdlyVal__delay_regs__v21 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v21;
    __VdlySet__delay_regs__v21 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v22;
    __VdlySet__delay_regs__v22 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v23;
    __VdlyVal__delay_regs__v23 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v23;
    __VdlySet__delay_regs__v23 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v24;
    __VdlySet__delay_regs__v24 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v25;
    __VdlyVal__delay_regs__v25 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v25;
    __VdlySet__delay_regs__v25 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v26;
    __VdlySet__delay_regs__v26 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v27;
    __VdlyVal__delay_regs__v27 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v27;
    __VdlySet__delay_regs__v27 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v28;
    __VdlySet__delay_regs__v28 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v29;
    __VdlyVal__delay_regs__v29 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v29;
    __VdlySet__delay_regs__v29 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v30;
    __VdlySet__delay_regs__v30 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v31;
    __VdlyVal__delay_regs__v31 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v31;
    __VdlySet__delay_regs__v31 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v32;
    __VdlySet__delay_regs__v32 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v33;
    __VdlyVal__delay_regs__v33 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v33;
    __VdlySet__delay_regs__v33 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v34;
    __VdlySet__delay_regs__v34 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v35;
    __VdlyVal__delay_regs__v35 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v35;
    __VdlySet__delay_regs__v35 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v36;
    __VdlySet__delay_regs__v36 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v37;
    __VdlyVal__delay_regs__v37 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v37;
    __VdlySet__delay_regs__v37 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v38;
    __VdlySet__delay_regs__v38 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v39;
    __VdlyVal__delay_regs__v39 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v39;
    __VdlySet__delay_regs__v39 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v40;
    __VdlySet__delay_regs__v40 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v41;
    __VdlyVal__delay_regs__v41 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v41;
    __VdlySet__delay_regs__v41 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v42;
    __VdlySet__delay_regs__v42 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v43;
    __VdlyVal__delay_regs__v43 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v43;
    __VdlySet__delay_regs__v43 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v44;
    __VdlySet__delay_regs__v44 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v45;
    __VdlyVal__delay_regs__v45 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v45;
    __VdlySet__delay_regs__v45 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v46;
    __VdlySet__delay_regs__v46 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v47;
    __VdlyVal__delay_regs__v47 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v47;
    __VdlySet__delay_regs__v47 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v48;
    __VdlySet__delay_regs__v48 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v49;
    __VdlyVal__delay_regs__v49 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v49;
    __VdlySet__delay_regs__v49 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v50;
    __VdlySet__delay_regs__v50 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v51;
    __VdlyVal__delay_regs__v51 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v51;
    __VdlySet__delay_regs__v51 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v52;
    __VdlySet__delay_regs__v52 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v53;
    __VdlyVal__delay_regs__v53 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v53;
    __VdlySet__delay_regs__v53 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v54;
    __VdlySet__delay_regs__v54 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v55;
    __VdlyVal__delay_regs__v55 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v55;
    __VdlySet__delay_regs__v55 = 0;
    // Body
    __VdlySet__delay_regs__v0 = 0U;
    __VdlySet__delay_regs__v1 = 0U;
    __VdlySet__delay_regs__v2 = 0U;
    __VdlySet__delay_regs__v3 = 0U;
    __VdlySet__delay_regs__v6 = 0U;
    __VdlySet__delay_regs__v7 = 0U;
    __VdlySet__delay_regs__v12 = 0U;
    __VdlySet__delay_regs__v13 = 0U;
    __VdlySet__delay_regs__v20 = 0U;
    __VdlySet__delay_regs__v21 = 0U;
    __VdlySet__delay_regs__v30 = 0U;
    __VdlySet__delay_regs__v31 = 0U;
    __VdlySet__delay_regs__v42 = 0U;
    __VdlySet__delay_regs__v43 = 0U;
    __VdlySet__delay_regs__v4 = 0U;
    __VdlySet__delay_regs__v5 = 0U;
    __VdlySet__delay_regs__v8 = 0U;
    __VdlySet__delay_regs__v9 = 0U;
    __VdlySet__delay_regs__v10 = 0U;
    __VdlySet__delay_regs__v11 = 0U;
    __VdlySet__delay_regs__v14 = 0U;
    __VdlySet__delay_regs__v15 = 0U;
    __VdlySet__delay_regs__v16 = 0U;
    __VdlySet__delay_regs__v17 = 0U;
    __VdlySet__delay_regs__v18 = 0U;
    __VdlySet__delay_regs__v19 = 0U;
    __VdlySet__delay_regs__v22 = 0U;
    __VdlySet__delay_regs__v23 = 0U;
    __VdlySet__delay_regs__v24 = 0U;
    __VdlySet__delay_regs__v25 = 0U;
    __VdlySet__delay_regs__v26 = 0U;
    __VdlySet__delay_regs__v27 = 0U;
    __VdlySet__delay_regs__v28 = 0U;
    __VdlySet__delay_regs__v29 = 0U;
    __VdlySet__delay_regs__v32 = 0U;
    __VdlySet__delay_regs__v33 = 0U;
    __VdlySet__delay_regs__v34 = 0U;
    __VdlySet__delay_regs__v35 = 0U;
    __VdlySet__delay_regs__v36 = 0U;
    __VdlySet__delay_regs__v37 = 0U;
    __VdlySet__delay_regs__v38 = 0U;
    __VdlySet__delay_regs__v39 = 0U;
    __VdlySet__delay_regs__v40 = 0U;
    __VdlySet__delay_regs__v41 = 0U;
    __VdlySet__delay_regs__v44 = 0U;
    __VdlySet__delay_regs__v45 = 0U;
    __VdlySet__delay_regs__v46 = 0U;
    __VdlySet__delay_regs__v47 = 0U;
    __VdlySet__delay_regs__v48 = 0U;
    __VdlySet__delay_regs__v49 = 0U;
    __VdlySet__delay_regs__v50 = 0U;
    __VdlySet__delay_regs__v51 = 0U;
    __VdlySet__delay_regs__v52 = 0U;
    __VdlySet__delay_regs__v53 = 0U;
    __VdlySet__delay_regs__v54 = 0U;
    __VdlySet__delay_regs__v55 = 0U;
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1707]);
        __VdlySet__delay_regs__v0 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1703]);
        __VdlyVal__delay_regs__v1 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 8U)));
        __VdlySet__delay_regs__v1 = 1U;
        ++(vlSymsp->__Vcoverage[1705]);
    } else {
        ++(vlSymsp->__Vcoverage[1706]);
    }
    ++(vlSymsp->__Vcoverage[1708]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1713]);
        __VdlySet__delay_regs__v2 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1709]);
        __VdlyVal__delay_regs__v3 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 0x10U)));
        __VdlySet__delay_regs__v3 = 1U;
        ++(vlSymsp->__Vcoverage[1711]);
    } else {
        ++(vlSymsp->__Vcoverage[1712]);
    }
    ++(vlSymsp->__Vcoverage[1714]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1725]);
        __VdlySet__delay_regs__v6 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1721]);
        __VdlyVal__delay_regs__v7 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 0x18U)));
        __VdlySet__delay_regs__v7 = 1U;
        ++(vlSymsp->__Vcoverage[1723]);
    } else {
        ++(vlSymsp->__Vcoverage[1724]);
    }
    ++(vlSymsp->__Vcoverage[1726]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1743]);
        __VdlySet__delay_regs__v12 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1739]);
        __VdlyVal__delay_regs__v13 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x20U)));
        __VdlySet__delay_regs__v13 = 1U;
        ++(vlSymsp->__Vcoverage[1741]);
    } else {
        ++(vlSymsp->__Vcoverage[1742]);
    }
    ++(vlSymsp->__Vcoverage[1744]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1767]);
        __VdlySet__delay_regs__v20 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1763]);
        __VdlyVal__delay_regs__v21 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x28U)));
        __VdlySet__delay_regs__v21 = 1U;
        ++(vlSymsp->__Vcoverage[1765]);
    } else {
        ++(vlSymsp->__Vcoverage[1766]);
    }
    ++(vlSymsp->__Vcoverage[1768]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1797]);
        __VdlySet__delay_regs__v30 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1793]);
        __VdlyVal__delay_regs__v31 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x30U)));
        __VdlySet__delay_regs__v31 = 1U;
        ++(vlSymsp->__Vcoverage[1795]);
    } else {
        ++(vlSymsp->__Vcoverage[1796]);
    }
    ++(vlSymsp->__Vcoverage[1798]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1833]);
        __VdlySet__delay_regs__v42 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1829]);
        __VdlyVal__delay_regs__v43 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x38U)));
        __VdlySet__delay_regs__v43 = 1U;
        ++(vlSymsp->__Vcoverage[1831]);
    } else {
        ++(vlSymsp->__Vcoverage[1832]);
    }
    ++(vlSymsp->__Vcoverage[1834]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1719]);
        __VdlySet__delay_regs__v4 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v5 = vlSelfRef.__PVT__delay_regs
            [2U][1U];
        __VdlySet__delay_regs__v5 = 1U;
        ++(vlSymsp->__Vcoverage[1716]);
        ++(vlSymsp->__Vcoverage[1717]);
    } else {
        ++(vlSymsp->__Vcoverage[1718]);
    }
    ++(vlSymsp->__Vcoverage[1720]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1731]);
        __VdlySet__delay_regs__v8 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v9 = vlSelfRef.__PVT__delay_regs
            [3U][1U];
        __VdlySet__delay_regs__v9 = 1U;
        ++(vlSymsp->__Vcoverage[1728]);
        ++(vlSymsp->__Vcoverage[1729]);
    } else {
        ++(vlSymsp->__Vcoverage[1730]);
    }
    ++(vlSymsp->__Vcoverage[1732]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1737]);
        __VdlySet__delay_regs__v10 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v11 = vlSelfRef.__PVT__delay_regs
            [3U][2U];
        __VdlySet__delay_regs__v11 = 1U;
        ++(vlSymsp->__Vcoverage[1734]);
        ++(vlSymsp->__Vcoverage[1735]);
    } else {
        ++(vlSymsp->__Vcoverage[1736]);
    }
    ++(vlSymsp->__Vcoverage[1738]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1749]);
        __VdlySet__delay_regs__v14 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v15 = vlSelfRef.__PVT__delay_regs
            [4U][1U];
        __VdlySet__delay_regs__v15 = 1U;
        ++(vlSymsp->__Vcoverage[1746]);
        ++(vlSymsp->__Vcoverage[1747]);
    } else {
        ++(vlSymsp->__Vcoverage[1748]);
    }
    ++(vlSymsp->__Vcoverage[1750]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1755]);
        __VdlySet__delay_regs__v16 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v17 = vlSelfRef.__PVT__delay_regs
            [4U][2U];
        __VdlySet__delay_regs__v17 = 1U;
        ++(vlSymsp->__Vcoverage[1752]);
        ++(vlSymsp->__Vcoverage[1753]);
    } else {
        ++(vlSymsp->__Vcoverage[1754]);
    }
    ++(vlSymsp->__Vcoverage[1756]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1761]);
        __VdlySet__delay_regs__v18 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v19 = vlSelfRef.__PVT__delay_regs
            [4U][3U];
        __VdlySet__delay_regs__v19 = 1U;
        ++(vlSymsp->__Vcoverage[1758]);
        ++(vlSymsp->__Vcoverage[1759]);
    } else {
        ++(vlSymsp->__Vcoverage[1760]);
    }
    ++(vlSymsp->__Vcoverage[1762]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1773]);
        __VdlySet__delay_regs__v22 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v23 = vlSelfRef.__PVT__delay_regs
            [5U][1U];
        __VdlySet__delay_regs__v23 = 1U;
        ++(vlSymsp->__Vcoverage[1770]);
        ++(vlSymsp->__Vcoverage[1771]);
    } else {
        ++(vlSymsp->__Vcoverage[1772]);
    }
    ++(vlSymsp->__Vcoverage[1774]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1779]);
        __VdlySet__delay_regs__v24 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v25 = vlSelfRef.__PVT__delay_regs
            [5U][2U];
        __VdlySet__delay_regs__v25 = 1U;
        ++(vlSymsp->__Vcoverage[1776]);
        ++(vlSymsp->__Vcoverage[1777]);
    } else {
        ++(vlSymsp->__Vcoverage[1778]);
    }
    ++(vlSymsp->__Vcoverage[1780]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1785]);
        __VdlySet__delay_regs__v26 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v27 = vlSelfRef.__PVT__delay_regs
            [5U][3U];
        __VdlySet__delay_regs__v27 = 1U;
        ++(vlSymsp->__Vcoverage[1782]);
        ++(vlSymsp->__Vcoverage[1783]);
    } else {
        ++(vlSymsp->__Vcoverage[1784]);
    }
    ++(vlSymsp->__Vcoverage[1786]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1791]);
        __VdlySet__delay_regs__v28 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v29 = vlSelfRef.__PVT__delay_regs
            [5U][4U];
        __VdlySet__delay_regs__v29 = 1U;
        ++(vlSymsp->__Vcoverage[1788]);
        ++(vlSymsp->__Vcoverage[1789]);
    } else {
        ++(vlSymsp->__Vcoverage[1790]);
    }
    ++(vlSymsp->__Vcoverage[1792]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1803]);
        __VdlySet__delay_regs__v32 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v33 = vlSelfRef.__PVT__delay_regs
            [6U][1U];
        __VdlySet__delay_regs__v33 = 1U;
        ++(vlSymsp->__Vcoverage[1800]);
        ++(vlSymsp->__Vcoverage[1801]);
    } else {
        ++(vlSymsp->__Vcoverage[1802]);
    }
    ++(vlSymsp->__Vcoverage[1804]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1809]);
        __VdlySet__delay_regs__v34 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v35 = vlSelfRef.__PVT__delay_regs
            [6U][2U];
        __VdlySet__delay_regs__v35 = 1U;
        ++(vlSymsp->__Vcoverage[1806]);
        ++(vlSymsp->__Vcoverage[1807]);
    } else {
        ++(vlSymsp->__Vcoverage[1808]);
    }
    ++(vlSymsp->__Vcoverage[1810]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1815]);
        __VdlySet__delay_regs__v36 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v37 = vlSelfRef.__PVT__delay_regs
            [6U][3U];
        __VdlySet__delay_regs__v37 = 1U;
        ++(vlSymsp->__Vcoverage[1812]);
        ++(vlSymsp->__Vcoverage[1813]);
    } else {
        ++(vlSymsp->__Vcoverage[1814]);
    }
    ++(vlSymsp->__Vcoverage[1816]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1821]);
        __VdlySet__delay_regs__v38 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v39 = vlSelfRef.__PVT__delay_regs
            [6U][4U];
        __VdlySet__delay_regs__v39 = 1U;
        ++(vlSymsp->__Vcoverage[1818]);
        ++(vlSymsp->__Vcoverage[1819]);
    } else {
        ++(vlSymsp->__Vcoverage[1820]);
    }
    ++(vlSymsp->__Vcoverage[1822]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1827]);
        __VdlySet__delay_regs__v40 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v41 = vlSelfRef.__PVT__delay_regs
            [6U][5U];
        __VdlySet__delay_regs__v41 = 1U;
        ++(vlSymsp->__Vcoverage[1824]);
        ++(vlSymsp->__Vcoverage[1825]);
    } else {
        ++(vlSymsp->__Vcoverage[1826]);
    }
    ++(vlSymsp->__Vcoverage[1828]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1839]);
        __VdlySet__delay_regs__v44 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v45 = vlSelfRef.__PVT__delay_regs
            [7U][1U];
        __VdlySet__delay_regs__v45 = 1U;
        ++(vlSymsp->__Vcoverage[1836]);
        ++(vlSymsp->__Vcoverage[1837]);
    } else {
        ++(vlSymsp->__Vcoverage[1838]);
    }
    ++(vlSymsp->__Vcoverage[1840]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1845]);
        __VdlySet__delay_regs__v46 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v47 = vlSelfRef.__PVT__delay_regs
            [7U][2U];
        __VdlySet__delay_regs__v47 = 1U;
        ++(vlSymsp->__Vcoverage[1842]);
        ++(vlSymsp->__Vcoverage[1843]);
    } else {
        ++(vlSymsp->__Vcoverage[1844]);
    }
    ++(vlSymsp->__Vcoverage[1846]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1851]);
        __VdlySet__delay_regs__v48 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v49 = vlSelfRef.__PVT__delay_regs
            [7U][3U];
        __VdlySet__delay_regs__v49 = 1U;
        ++(vlSymsp->__Vcoverage[1848]);
        ++(vlSymsp->__Vcoverage[1849]);
    } else {
        ++(vlSymsp->__Vcoverage[1850]);
    }
    ++(vlSymsp->__Vcoverage[1852]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1857]);
        __VdlySet__delay_regs__v50 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v51 = vlSelfRef.__PVT__delay_regs
            [7U][4U];
        __VdlySet__delay_regs__v51 = 1U;
        ++(vlSymsp->__Vcoverage[1854]);
        ++(vlSymsp->__Vcoverage[1855]);
    } else {
        ++(vlSymsp->__Vcoverage[1856]);
    }
    ++(vlSymsp->__Vcoverage[1858]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1863]);
        __VdlySet__delay_regs__v52 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v53 = vlSelfRef.__PVT__delay_regs
            [7U][5U];
        __VdlySet__delay_regs__v53 = 1U;
        ++(vlSymsp->__Vcoverage[1860]);
        ++(vlSymsp->__Vcoverage[1861]);
    } else {
        ++(vlSymsp->__Vcoverage[1862]);
    }
    ++(vlSymsp->__Vcoverage[1864]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1869]);
        __VdlySet__delay_regs__v54 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v55 = vlSelfRef.__PVT__delay_regs
            [7U][6U];
        __VdlySet__delay_regs__v55 = 1U;
        ++(vlSymsp->__Vcoverage[1866]);
        ++(vlSymsp->__Vcoverage[1867]);
    } else {
        ++(vlSymsp->__Vcoverage[1868]);
    }
    ++(vlSymsp->__Vcoverage[1870]);
    if (__VdlySet__delay_regs__v0) {
        vlSelfRef.__PVT__delay_regs[1U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v1) {
        vlSelfRef.__PVT__delay_regs[1U][1U] = __VdlyVal__delay_regs__v1;
    }
    if (__VdlySet__delay_regs__v2) {
        vlSelfRef.__PVT__delay_regs[2U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v3) {
        vlSelfRef.__PVT__delay_regs[2U][1U] = __VdlyVal__delay_regs__v3;
    }
    if (__VdlySet__delay_regs__v4) {
        vlSelfRef.__PVT__delay_regs[2U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v5) {
        vlSelfRef.__PVT__delay_regs[2U][2U] = __VdlyVal__delay_regs__v5;
    }
    if (__VdlySet__delay_regs__v6) {
        vlSelfRef.__PVT__delay_regs[3U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v7) {
        vlSelfRef.__PVT__delay_regs[3U][1U] = __VdlyVal__delay_regs__v7;
    }
    if (__VdlySet__delay_regs__v8) {
        vlSelfRef.__PVT__delay_regs[3U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v9) {
        vlSelfRef.__PVT__delay_regs[3U][2U] = __VdlyVal__delay_regs__v9;
    }
    if (__VdlySet__delay_regs__v10) {
        vlSelfRef.__PVT__delay_regs[3U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v11) {
        vlSelfRef.__PVT__delay_regs[3U][3U] = __VdlyVal__delay_regs__v11;
    }
    if (__VdlySet__delay_regs__v12) {
        vlSelfRef.__PVT__delay_regs[4U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v13) {
        vlSelfRef.__PVT__delay_regs[4U][1U] = __VdlyVal__delay_regs__v13;
    }
    if (__VdlySet__delay_regs__v14) {
        vlSelfRef.__PVT__delay_regs[4U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v15) {
        vlSelfRef.__PVT__delay_regs[4U][2U] = __VdlyVal__delay_regs__v15;
    }
    if (__VdlySet__delay_regs__v16) {
        vlSelfRef.__PVT__delay_regs[4U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v17) {
        vlSelfRef.__PVT__delay_regs[4U][3U] = __VdlyVal__delay_regs__v17;
    }
    if (__VdlySet__delay_regs__v18) {
        vlSelfRef.__PVT__delay_regs[4U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v19) {
        vlSelfRef.__PVT__delay_regs[4U][4U] = __VdlyVal__delay_regs__v19;
    }
    if (__VdlySet__delay_regs__v20) {
        vlSelfRef.__PVT__delay_regs[5U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v21) {
        vlSelfRef.__PVT__delay_regs[5U][1U] = __VdlyVal__delay_regs__v21;
    }
    if (__VdlySet__delay_regs__v22) {
        vlSelfRef.__PVT__delay_regs[5U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v23) {
        vlSelfRef.__PVT__delay_regs[5U][2U] = __VdlyVal__delay_regs__v23;
    }
    if (__VdlySet__delay_regs__v24) {
        vlSelfRef.__PVT__delay_regs[5U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v25) {
        vlSelfRef.__PVT__delay_regs[5U][3U] = __VdlyVal__delay_regs__v25;
    }
    if (__VdlySet__delay_regs__v26) {
        vlSelfRef.__PVT__delay_regs[5U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v27) {
        vlSelfRef.__PVT__delay_regs[5U][4U] = __VdlyVal__delay_regs__v27;
    }
    if (__VdlySet__delay_regs__v28) {
        vlSelfRef.__PVT__delay_regs[5U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v29) {
        vlSelfRef.__PVT__delay_regs[5U][5U] = __VdlyVal__delay_regs__v29;
    }
    if (__VdlySet__delay_regs__v30) {
        vlSelfRef.__PVT__delay_regs[6U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v31) {
        vlSelfRef.__PVT__delay_regs[6U][1U] = __VdlyVal__delay_regs__v31;
    }
    if (__VdlySet__delay_regs__v32) {
        vlSelfRef.__PVT__delay_regs[6U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v33) {
        vlSelfRef.__PVT__delay_regs[6U][2U] = __VdlyVal__delay_regs__v33;
    }
    if (__VdlySet__delay_regs__v34) {
        vlSelfRef.__PVT__delay_regs[6U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v35) {
        vlSelfRef.__PVT__delay_regs[6U][3U] = __VdlyVal__delay_regs__v35;
    }
    if (__VdlySet__delay_regs__v36) {
        vlSelfRef.__PVT__delay_regs[6U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v37) {
        vlSelfRef.__PVT__delay_regs[6U][4U] = __VdlyVal__delay_regs__v37;
    }
    if (__VdlySet__delay_regs__v38) {
        vlSelfRef.__PVT__delay_regs[6U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v39) {
        vlSelfRef.__PVT__delay_regs[6U][5U] = __VdlyVal__delay_regs__v39;
    }
    if (__VdlySet__delay_regs__v40) {
        vlSelfRef.__PVT__delay_regs[6U][6U] = 0U;
    }
    if (__VdlySet__delay_regs__v41) {
        vlSelfRef.__PVT__delay_regs[6U][6U] = __VdlyVal__delay_regs__v41;
    }
    if (__VdlySet__delay_regs__v42) {
        vlSelfRef.__PVT__delay_regs[7U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v43) {
        vlSelfRef.__PVT__delay_regs[7U][1U] = __VdlyVal__delay_regs__v43;
    }
    if (__VdlySet__delay_regs__v44) {
        vlSelfRef.__PVT__delay_regs[7U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v45) {
        vlSelfRef.__PVT__delay_regs[7U][2U] = __VdlyVal__delay_regs__v45;
    }
    if (__VdlySet__delay_regs__v46) {
        vlSelfRef.__PVT__delay_regs[7U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v47) {
        vlSelfRef.__PVT__delay_regs[7U][3U] = __VdlyVal__delay_regs__v47;
    }
    if (__VdlySet__delay_regs__v48) {
        vlSelfRef.__PVT__delay_regs[7U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v49) {
        vlSelfRef.__PVT__delay_regs[7U][4U] = __VdlyVal__delay_regs__v49;
    }
    if (__VdlySet__delay_regs__v50) {
        vlSelfRef.__PVT__delay_regs[7U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v51) {
        vlSelfRef.__PVT__delay_regs[7U][5U] = __VdlyVal__delay_regs__v51;
    }
    if (__VdlySet__delay_regs__v52) {
        vlSelfRef.__PVT__delay_regs[7U][6U] = 0U;
    }
    if (__VdlySet__delay_regs__v53) {
        vlSelfRef.__PVT__delay_regs[7U][6U] = __VdlyVal__delay_regs__v53;
    }
    if (__VdlySet__delay_regs__v54) {
        vlSelfRef.__PVT__delay_regs[7U][7U] = 0U;
    }
    if (__VdlySet__delay_regs__v55) {
        vlSelfRef.__PVT__delay_regs[7U][7U] = __VdlyVal__delay_regs__v55;
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__1(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in) 
               ^ (IData)(vlSelfRef.__Vtogcov__mem_data_in)))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffeULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffdULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 1U))))) 
                                               << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffbULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 2U))))) 
                                               << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffff7ULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 3U))))) 
                                               << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffefULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 4U))))) 
                                               << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffdfULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 5U))))) 
                                               << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffbfULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 6U))))) 
                                               << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffff7fULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 7U))))) 
                                               << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffeffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 8U))))) 
                                               << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffdffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 9U))))) 
                                               << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffbffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xaU))))) 
                                               << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffff7ffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xbU))))) 
                                               << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffefffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xcU))))) 
                                               << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffdfffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xdU))))) 
                                               << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffbfffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xeU))))) 
                                               << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffff7fffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0xfU))))) 
                                               << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffeffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x10U))))) 
                                               << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffdffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x11U))))) 
                                               << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffbffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x12U))))) 
                                               << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffff7ffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x13U))))) 
                                               << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffefffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x14U))))) 
                                               << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffdfffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x15U))))) 
                                               << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffbfffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x16U))))) 
                                               << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffff7fffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x17U))))) 
                                               << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffeffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x18U))))) 
                                               << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffdffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x19U))))) 
                                               << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffbffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1aU))))) 
                                               << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffff7ffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1bU))))) 
                                               << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffefffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1cU))))) 
                                               << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffdfffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1dU))))) 
                                               << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffbfffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1eU))))) 
                                               << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffff7fffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x1fU))))) 
                                               << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffeffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x20U))))) 
                                               << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffdffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x21U))))) 
                                               << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffbffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x22U))))) 
                                               << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffff7ffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x23U))))) 
                                               << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffefffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x24U))))) 
                                               << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffdfffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x25U))))) 
                                               << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffbfffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x26U))))) 
                                               << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffff7fffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x27U))))) 
                                               << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffeffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x28U))))) 
                                               << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffdffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x29U))))) 
                                               << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffbffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2aU))))) 
                                               << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffff7ffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffefffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2cU))))) 
                                               << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffdfffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2dU))))) 
                                               << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffbfffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2eU))))) 
                                               << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffff7fffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x2fU))))) 
                                               << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffeffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x30U))))) 
                                               << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffdffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x31U))))) 
                                               << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffbffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x32U))))) 
                                               << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfff7ffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x33U))))) 
                                               << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffefffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x34U))))) 
                                               << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffdfffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x35U))))) 
                                               << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffbfffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x36U))))) 
                                               << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xff7fffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x37U))))) 
                                               << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfeffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x38U))))) 
                                               << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfdffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x39U))))) 
                                               << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfbffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3aU))))) 
                                               << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xf7ffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3bU))))) 
                                               << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xefffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3cU))))) 
                                               << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xdfffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3dU))))) 
                                               << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xbfffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3eU))))) 
                                               << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                  ^ vlSelfRef.__Vtogcov__mem_data_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0x7fffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__2(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.skewed_data_out_flat = ((0xffffffffff0000ffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [2U]
                                                           [2U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [1U]
                                                          [1U]))) 
                                         << 8U));
    vlSelfRef.skewed_data_out_flat = ((0xffffff0000ffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [4U]
                                                           [4U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [3U]
                                                          [3U]))) 
                                         << 0x18U));
    vlSelfRef.skewed_data_out_flat = ((0xff0000ffffffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [6U]
                                                           [6U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [5U]
                                                          [5U]))) 
                                         << 0x28U));
    vlSelfRef.skewed_data_out_flat = ((0xffffffffffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.__PVT__delay_regs
                                                         [7U]
                                                         [7U])) 
                                         << 0x38U));
    vlSelfRef.skewed_data_out_flat = ((0xffffffffffffff00ULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | (IData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.__Vtogcov__skewed_data_out_flat)))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffeULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | (IData)((IData)((1U & (IData)(vlSelfRef.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffdULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffbULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffff7ULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffefULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffdfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffbfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffff7fULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffeffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffdffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffbffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffff7ffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffefffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffdfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffbfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffff7fffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffeffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffdffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffbffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffff7ffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffefffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffdfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffbfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffff7fffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffeffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffdffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffbffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffff7ffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffefffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffdfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffbfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffff7fffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffeffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffdffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffbffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffff7ffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffefffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffdfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffbfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffff7fffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffeffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffdffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffbffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffff7ffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffefffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffdfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffbfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffff7fffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffeffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffdffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffbffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfff7ffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffefffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffdfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffbfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xff7fffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfeffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfdffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfbffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xf7ffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xefffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xdfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xbfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelfRef.skewed_data_out_flat ^ vlSelfRef.__Vtogcov__skewed_data_out_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0x7fffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__0(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__delay_regs__v0;
    __VdlySet__delay_regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v1;
    __VdlyVal__delay_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v1;
    __VdlySet__delay_regs__v1 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v2;
    __VdlySet__delay_regs__v2 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v3;
    __VdlyVal__delay_regs__v3 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v3;
    __VdlySet__delay_regs__v3 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v4;
    __VdlySet__delay_regs__v4 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v5;
    __VdlyVal__delay_regs__v5 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v5;
    __VdlySet__delay_regs__v5 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v6;
    __VdlySet__delay_regs__v6 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v7;
    __VdlyVal__delay_regs__v7 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v7;
    __VdlySet__delay_regs__v7 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v8;
    __VdlySet__delay_regs__v8 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v9;
    __VdlyVal__delay_regs__v9 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v9;
    __VdlySet__delay_regs__v9 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v10;
    __VdlySet__delay_regs__v10 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v11;
    __VdlyVal__delay_regs__v11 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v11;
    __VdlySet__delay_regs__v11 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v12;
    __VdlySet__delay_regs__v12 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v13;
    __VdlyVal__delay_regs__v13 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v13;
    __VdlySet__delay_regs__v13 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v14;
    __VdlySet__delay_regs__v14 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v15;
    __VdlyVal__delay_regs__v15 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v15;
    __VdlySet__delay_regs__v15 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v16;
    __VdlySet__delay_regs__v16 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v17;
    __VdlyVal__delay_regs__v17 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v17;
    __VdlySet__delay_regs__v17 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v18;
    __VdlySet__delay_regs__v18 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v19;
    __VdlyVal__delay_regs__v19 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v19;
    __VdlySet__delay_regs__v19 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v20;
    __VdlySet__delay_regs__v20 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v21;
    __VdlyVal__delay_regs__v21 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v21;
    __VdlySet__delay_regs__v21 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v22;
    __VdlySet__delay_regs__v22 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v23;
    __VdlyVal__delay_regs__v23 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v23;
    __VdlySet__delay_regs__v23 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v24;
    __VdlySet__delay_regs__v24 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v25;
    __VdlyVal__delay_regs__v25 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v25;
    __VdlySet__delay_regs__v25 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v26;
    __VdlySet__delay_regs__v26 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v27;
    __VdlyVal__delay_regs__v27 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v27;
    __VdlySet__delay_regs__v27 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v28;
    __VdlySet__delay_regs__v28 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v29;
    __VdlyVal__delay_regs__v29 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v29;
    __VdlySet__delay_regs__v29 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v30;
    __VdlySet__delay_regs__v30 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v31;
    __VdlyVal__delay_regs__v31 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v31;
    __VdlySet__delay_regs__v31 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v32;
    __VdlySet__delay_regs__v32 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v33;
    __VdlyVal__delay_regs__v33 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v33;
    __VdlySet__delay_regs__v33 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v34;
    __VdlySet__delay_regs__v34 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v35;
    __VdlyVal__delay_regs__v35 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v35;
    __VdlySet__delay_regs__v35 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v36;
    __VdlySet__delay_regs__v36 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v37;
    __VdlyVal__delay_regs__v37 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v37;
    __VdlySet__delay_regs__v37 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v38;
    __VdlySet__delay_regs__v38 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v39;
    __VdlyVal__delay_regs__v39 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v39;
    __VdlySet__delay_regs__v39 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v40;
    __VdlySet__delay_regs__v40 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v41;
    __VdlyVal__delay_regs__v41 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v41;
    __VdlySet__delay_regs__v41 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v42;
    __VdlySet__delay_regs__v42 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v43;
    __VdlyVal__delay_regs__v43 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v43;
    __VdlySet__delay_regs__v43 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v44;
    __VdlySet__delay_regs__v44 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v45;
    __VdlyVal__delay_regs__v45 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v45;
    __VdlySet__delay_regs__v45 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v46;
    __VdlySet__delay_regs__v46 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v47;
    __VdlyVal__delay_regs__v47 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v47;
    __VdlySet__delay_regs__v47 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v48;
    __VdlySet__delay_regs__v48 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v49;
    __VdlyVal__delay_regs__v49 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v49;
    __VdlySet__delay_regs__v49 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v50;
    __VdlySet__delay_regs__v50 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v51;
    __VdlyVal__delay_regs__v51 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v51;
    __VdlySet__delay_regs__v51 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v52;
    __VdlySet__delay_regs__v52 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v53;
    __VdlyVal__delay_regs__v53 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v53;
    __VdlySet__delay_regs__v53 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v54;
    __VdlySet__delay_regs__v54 = 0;
    CData/*7:0*/ __VdlyVal__delay_regs__v55;
    __VdlyVal__delay_regs__v55 = 0;
    CData/*0:0*/ __VdlySet__delay_regs__v55;
    __VdlySet__delay_regs__v55 = 0;
    // Body
    __VdlySet__delay_regs__v0 = 0U;
    __VdlySet__delay_regs__v1 = 0U;
    __VdlySet__delay_regs__v2 = 0U;
    __VdlySet__delay_regs__v3 = 0U;
    __VdlySet__delay_regs__v6 = 0U;
    __VdlySet__delay_regs__v7 = 0U;
    __VdlySet__delay_regs__v12 = 0U;
    __VdlySet__delay_regs__v13 = 0U;
    __VdlySet__delay_regs__v20 = 0U;
    __VdlySet__delay_regs__v21 = 0U;
    __VdlySet__delay_regs__v30 = 0U;
    __VdlySet__delay_regs__v31 = 0U;
    __VdlySet__delay_regs__v42 = 0U;
    __VdlySet__delay_regs__v43 = 0U;
    __VdlySet__delay_regs__v4 = 0U;
    __VdlySet__delay_regs__v5 = 0U;
    __VdlySet__delay_regs__v8 = 0U;
    __VdlySet__delay_regs__v9 = 0U;
    __VdlySet__delay_regs__v10 = 0U;
    __VdlySet__delay_regs__v11 = 0U;
    __VdlySet__delay_regs__v14 = 0U;
    __VdlySet__delay_regs__v15 = 0U;
    __VdlySet__delay_regs__v16 = 0U;
    __VdlySet__delay_regs__v17 = 0U;
    __VdlySet__delay_regs__v18 = 0U;
    __VdlySet__delay_regs__v19 = 0U;
    __VdlySet__delay_regs__v22 = 0U;
    __VdlySet__delay_regs__v23 = 0U;
    __VdlySet__delay_regs__v24 = 0U;
    __VdlySet__delay_regs__v25 = 0U;
    __VdlySet__delay_regs__v26 = 0U;
    __VdlySet__delay_regs__v27 = 0U;
    __VdlySet__delay_regs__v28 = 0U;
    __VdlySet__delay_regs__v29 = 0U;
    __VdlySet__delay_regs__v32 = 0U;
    __VdlySet__delay_regs__v33 = 0U;
    __VdlySet__delay_regs__v34 = 0U;
    __VdlySet__delay_regs__v35 = 0U;
    __VdlySet__delay_regs__v36 = 0U;
    __VdlySet__delay_regs__v37 = 0U;
    __VdlySet__delay_regs__v38 = 0U;
    __VdlySet__delay_regs__v39 = 0U;
    __VdlySet__delay_regs__v40 = 0U;
    __VdlySet__delay_regs__v41 = 0U;
    __VdlySet__delay_regs__v44 = 0U;
    __VdlySet__delay_regs__v45 = 0U;
    __VdlySet__delay_regs__v46 = 0U;
    __VdlySet__delay_regs__v47 = 0U;
    __VdlySet__delay_regs__v48 = 0U;
    __VdlySet__delay_regs__v49 = 0U;
    __VdlySet__delay_regs__v50 = 0U;
    __VdlySet__delay_regs__v51 = 0U;
    __VdlySet__delay_regs__v52 = 0U;
    __VdlySet__delay_regs__v53 = 0U;
    __VdlySet__delay_regs__v54 = 0U;
    __VdlySet__delay_regs__v55 = 0U;
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1707]);
        __VdlySet__delay_regs__v0 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1703]);
        __VdlyVal__delay_regs__v1 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 8U)));
        __VdlySet__delay_regs__v1 = 1U;
        ++(vlSymsp->__Vcoverage[1705]);
    } else {
        ++(vlSymsp->__Vcoverage[1706]);
    }
    ++(vlSymsp->__Vcoverage[1708]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1713]);
        __VdlySet__delay_regs__v2 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1709]);
        __VdlyVal__delay_regs__v3 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 0x10U)));
        __VdlySet__delay_regs__v3 = 1U;
        ++(vlSymsp->__Vcoverage[1711]);
    } else {
        ++(vlSymsp->__Vcoverage[1712]);
    }
    ++(vlSymsp->__Vcoverage[1714]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1725]);
        __VdlySet__delay_regs__v6 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1721]);
        __VdlyVal__delay_regs__v7 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 0x18U)));
        __VdlySet__delay_regs__v7 = 1U;
        ++(vlSymsp->__Vcoverage[1723]);
    } else {
        ++(vlSymsp->__Vcoverage[1724]);
    }
    ++(vlSymsp->__Vcoverage[1726]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1743]);
        __VdlySet__delay_regs__v12 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1739]);
        __VdlyVal__delay_regs__v13 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x20U)));
        __VdlySet__delay_regs__v13 = 1U;
        ++(vlSymsp->__Vcoverage[1741]);
    } else {
        ++(vlSymsp->__Vcoverage[1742]);
    }
    ++(vlSymsp->__Vcoverage[1744]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1767]);
        __VdlySet__delay_regs__v20 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1763]);
        __VdlyVal__delay_regs__v21 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x28U)));
        __VdlySet__delay_regs__v21 = 1U;
        ++(vlSymsp->__Vcoverage[1765]);
    } else {
        ++(vlSymsp->__Vcoverage[1766]);
    }
    ++(vlSymsp->__Vcoverage[1768]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1797]);
        __VdlySet__delay_regs__v30 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1793]);
        __VdlyVal__delay_regs__v31 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x30U)));
        __VdlySet__delay_regs__v31 = 1U;
        ++(vlSymsp->__Vcoverage[1795]);
    } else {
        ++(vlSymsp->__Vcoverage[1796]);
    }
    ++(vlSymsp->__Vcoverage[1798]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1833]);
        __VdlySet__delay_regs__v42 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1829]);
        __VdlyVal__delay_regs__v43 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x38U)));
        __VdlySet__delay_regs__v43 = 1U;
        ++(vlSymsp->__Vcoverage[1831]);
    } else {
        ++(vlSymsp->__Vcoverage[1832]);
    }
    ++(vlSymsp->__Vcoverage[1834]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1719]);
        __VdlySet__delay_regs__v4 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v5 = vlSelfRef.__PVT__delay_regs
            [2U][1U];
        __VdlySet__delay_regs__v5 = 1U;
        ++(vlSymsp->__Vcoverage[1716]);
        ++(vlSymsp->__Vcoverage[1717]);
    } else {
        ++(vlSymsp->__Vcoverage[1718]);
    }
    ++(vlSymsp->__Vcoverage[1720]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1731]);
        __VdlySet__delay_regs__v8 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v9 = vlSelfRef.__PVT__delay_regs
            [3U][1U];
        __VdlySet__delay_regs__v9 = 1U;
        ++(vlSymsp->__Vcoverage[1728]);
        ++(vlSymsp->__Vcoverage[1729]);
    } else {
        ++(vlSymsp->__Vcoverage[1730]);
    }
    ++(vlSymsp->__Vcoverage[1732]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1737]);
        __VdlySet__delay_regs__v10 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v11 = vlSelfRef.__PVT__delay_regs
            [3U][2U];
        __VdlySet__delay_regs__v11 = 1U;
        ++(vlSymsp->__Vcoverage[1734]);
        ++(vlSymsp->__Vcoverage[1735]);
    } else {
        ++(vlSymsp->__Vcoverage[1736]);
    }
    ++(vlSymsp->__Vcoverage[1738]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1749]);
        __VdlySet__delay_regs__v14 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v15 = vlSelfRef.__PVT__delay_regs
            [4U][1U];
        __VdlySet__delay_regs__v15 = 1U;
        ++(vlSymsp->__Vcoverage[1746]);
        ++(vlSymsp->__Vcoverage[1747]);
    } else {
        ++(vlSymsp->__Vcoverage[1748]);
    }
    ++(vlSymsp->__Vcoverage[1750]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1755]);
        __VdlySet__delay_regs__v16 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v17 = vlSelfRef.__PVT__delay_regs
            [4U][2U];
        __VdlySet__delay_regs__v17 = 1U;
        ++(vlSymsp->__Vcoverage[1752]);
        ++(vlSymsp->__Vcoverage[1753]);
    } else {
        ++(vlSymsp->__Vcoverage[1754]);
    }
    ++(vlSymsp->__Vcoverage[1756]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1761]);
        __VdlySet__delay_regs__v18 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v19 = vlSelfRef.__PVT__delay_regs
            [4U][3U];
        __VdlySet__delay_regs__v19 = 1U;
        ++(vlSymsp->__Vcoverage[1758]);
        ++(vlSymsp->__Vcoverage[1759]);
    } else {
        ++(vlSymsp->__Vcoverage[1760]);
    }
    ++(vlSymsp->__Vcoverage[1762]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1773]);
        __VdlySet__delay_regs__v22 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v23 = vlSelfRef.__PVT__delay_regs
            [5U][1U];
        __VdlySet__delay_regs__v23 = 1U;
        ++(vlSymsp->__Vcoverage[1770]);
        ++(vlSymsp->__Vcoverage[1771]);
    } else {
        ++(vlSymsp->__Vcoverage[1772]);
    }
    ++(vlSymsp->__Vcoverage[1774]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1779]);
        __VdlySet__delay_regs__v24 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v25 = vlSelfRef.__PVT__delay_regs
            [5U][2U];
        __VdlySet__delay_regs__v25 = 1U;
        ++(vlSymsp->__Vcoverage[1776]);
        ++(vlSymsp->__Vcoverage[1777]);
    } else {
        ++(vlSymsp->__Vcoverage[1778]);
    }
    ++(vlSymsp->__Vcoverage[1780]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1785]);
        __VdlySet__delay_regs__v26 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v27 = vlSelfRef.__PVT__delay_regs
            [5U][3U];
        __VdlySet__delay_regs__v27 = 1U;
        ++(vlSymsp->__Vcoverage[1782]);
        ++(vlSymsp->__Vcoverage[1783]);
    } else {
        ++(vlSymsp->__Vcoverage[1784]);
    }
    ++(vlSymsp->__Vcoverage[1786]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1791]);
        __VdlySet__delay_regs__v28 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v29 = vlSelfRef.__PVT__delay_regs
            [5U][4U];
        __VdlySet__delay_regs__v29 = 1U;
        ++(vlSymsp->__Vcoverage[1788]);
        ++(vlSymsp->__Vcoverage[1789]);
    } else {
        ++(vlSymsp->__Vcoverage[1790]);
    }
    ++(vlSymsp->__Vcoverage[1792]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1803]);
        __VdlySet__delay_regs__v32 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v33 = vlSelfRef.__PVT__delay_regs
            [6U][1U];
        __VdlySet__delay_regs__v33 = 1U;
        ++(vlSymsp->__Vcoverage[1800]);
        ++(vlSymsp->__Vcoverage[1801]);
    } else {
        ++(vlSymsp->__Vcoverage[1802]);
    }
    ++(vlSymsp->__Vcoverage[1804]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1809]);
        __VdlySet__delay_regs__v34 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v35 = vlSelfRef.__PVT__delay_regs
            [6U][2U];
        __VdlySet__delay_regs__v35 = 1U;
        ++(vlSymsp->__Vcoverage[1806]);
        ++(vlSymsp->__Vcoverage[1807]);
    } else {
        ++(vlSymsp->__Vcoverage[1808]);
    }
    ++(vlSymsp->__Vcoverage[1810]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1815]);
        __VdlySet__delay_regs__v36 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v37 = vlSelfRef.__PVT__delay_regs
            [6U][3U];
        __VdlySet__delay_regs__v37 = 1U;
        ++(vlSymsp->__Vcoverage[1812]);
        ++(vlSymsp->__Vcoverage[1813]);
    } else {
        ++(vlSymsp->__Vcoverage[1814]);
    }
    ++(vlSymsp->__Vcoverage[1816]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1821]);
        __VdlySet__delay_regs__v38 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v39 = vlSelfRef.__PVT__delay_regs
            [6U][4U];
        __VdlySet__delay_regs__v39 = 1U;
        ++(vlSymsp->__Vcoverage[1818]);
        ++(vlSymsp->__Vcoverage[1819]);
    } else {
        ++(vlSymsp->__Vcoverage[1820]);
    }
    ++(vlSymsp->__Vcoverage[1822]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1827]);
        __VdlySet__delay_regs__v40 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v41 = vlSelfRef.__PVT__delay_regs
            [6U][5U];
        __VdlySet__delay_regs__v41 = 1U;
        ++(vlSymsp->__Vcoverage[1824]);
        ++(vlSymsp->__Vcoverage[1825]);
    } else {
        ++(vlSymsp->__Vcoverage[1826]);
    }
    ++(vlSymsp->__Vcoverage[1828]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1839]);
        __VdlySet__delay_regs__v44 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v45 = vlSelfRef.__PVT__delay_regs
            [7U][1U];
        __VdlySet__delay_regs__v45 = 1U;
        ++(vlSymsp->__Vcoverage[1836]);
        ++(vlSymsp->__Vcoverage[1837]);
    } else {
        ++(vlSymsp->__Vcoverage[1838]);
    }
    ++(vlSymsp->__Vcoverage[1840]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1845]);
        __VdlySet__delay_regs__v46 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v47 = vlSelfRef.__PVT__delay_regs
            [7U][2U];
        __VdlySet__delay_regs__v47 = 1U;
        ++(vlSymsp->__Vcoverage[1842]);
        ++(vlSymsp->__Vcoverage[1843]);
    } else {
        ++(vlSymsp->__Vcoverage[1844]);
    }
    ++(vlSymsp->__Vcoverage[1846]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1851]);
        __VdlySet__delay_regs__v48 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v49 = vlSelfRef.__PVT__delay_regs
            [7U][3U];
        __VdlySet__delay_regs__v49 = 1U;
        ++(vlSymsp->__Vcoverage[1848]);
        ++(vlSymsp->__Vcoverage[1849]);
    } else {
        ++(vlSymsp->__Vcoverage[1850]);
    }
    ++(vlSymsp->__Vcoverage[1852]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1857]);
        __VdlySet__delay_regs__v50 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v51 = vlSelfRef.__PVT__delay_regs
            [7U][4U];
        __VdlySet__delay_regs__v51 = 1U;
        ++(vlSymsp->__Vcoverage[1854]);
        ++(vlSymsp->__Vcoverage[1855]);
    } else {
        ++(vlSymsp->__Vcoverage[1856]);
    }
    ++(vlSymsp->__Vcoverage[1858]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1863]);
        __VdlySet__delay_regs__v52 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v53 = vlSelfRef.__PVT__delay_regs
            [7U][5U];
        __VdlySet__delay_regs__v53 = 1U;
        ++(vlSymsp->__Vcoverage[1860]);
        ++(vlSymsp->__Vcoverage[1861]);
    } else {
        ++(vlSymsp->__Vcoverage[1862]);
    }
    ++(vlSymsp->__Vcoverage[1864]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1869]);
        __VdlySet__delay_regs__v54 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v55 = vlSelfRef.__PVT__delay_regs
            [7U][6U];
        __VdlySet__delay_regs__v55 = 1U;
        ++(vlSymsp->__Vcoverage[1866]);
        ++(vlSymsp->__Vcoverage[1867]);
    } else {
        ++(vlSymsp->__Vcoverage[1868]);
    }
    ++(vlSymsp->__Vcoverage[1870]);
    if (__VdlySet__delay_regs__v0) {
        vlSelfRef.__PVT__delay_regs[1U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v1) {
        vlSelfRef.__PVT__delay_regs[1U][1U] = __VdlyVal__delay_regs__v1;
    }
    if (__VdlySet__delay_regs__v2) {
        vlSelfRef.__PVT__delay_regs[2U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v3) {
        vlSelfRef.__PVT__delay_regs[2U][1U] = __VdlyVal__delay_regs__v3;
    }
    if (__VdlySet__delay_regs__v4) {
        vlSelfRef.__PVT__delay_regs[2U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v5) {
        vlSelfRef.__PVT__delay_regs[2U][2U] = __VdlyVal__delay_regs__v5;
    }
    if (__VdlySet__delay_regs__v6) {
        vlSelfRef.__PVT__delay_regs[3U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v7) {
        vlSelfRef.__PVT__delay_regs[3U][1U] = __VdlyVal__delay_regs__v7;
    }
    if (__VdlySet__delay_regs__v8) {
        vlSelfRef.__PVT__delay_regs[3U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v9) {
        vlSelfRef.__PVT__delay_regs[3U][2U] = __VdlyVal__delay_regs__v9;
    }
    if (__VdlySet__delay_regs__v10) {
        vlSelfRef.__PVT__delay_regs[3U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v11) {
        vlSelfRef.__PVT__delay_regs[3U][3U] = __VdlyVal__delay_regs__v11;
    }
    if (__VdlySet__delay_regs__v12) {
        vlSelfRef.__PVT__delay_regs[4U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v13) {
        vlSelfRef.__PVT__delay_regs[4U][1U] = __VdlyVal__delay_regs__v13;
    }
    if (__VdlySet__delay_regs__v14) {
        vlSelfRef.__PVT__delay_regs[4U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v15) {
        vlSelfRef.__PVT__delay_regs[4U][2U] = __VdlyVal__delay_regs__v15;
    }
    if (__VdlySet__delay_regs__v16) {
        vlSelfRef.__PVT__delay_regs[4U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v17) {
        vlSelfRef.__PVT__delay_regs[4U][3U] = __VdlyVal__delay_regs__v17;
    }
    if (__VdlySet__delay_regs__v18) {
        vlSelfRef.__PVT__delay_regs[4U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v19) {
        vlSelfRef.__PVT__delay_regs[4U][4U] = __VdlyVal__delay_regs__v19;
    }
    if (__VdlySet__delay_regs__v20) {
        vlSelfRef.__PVT__delay_regs[5U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v21) {
        vlSelfRef.__PVT__delay_regs[5U][1U] = __VdlyVal__delay_regs__v21;
    }
    if (__VdlySet__delay_regs__v22) {
        vlSelfRef.__PVT__delay_regs[5U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v23) {
        vlSelfRef.__PVT__delay_regs[5U][2U] = __VdlyVal__delay_regs__v23;
    }
    if (__VdlySet__delay_regs__v24) {
        vlSelfRef.__PVT__delay_regs[5U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v25) {
        vlSelfRef.__PVT__delay_regs[5U][3U] = __VdlyVal__delay_regs__v25;
    }
    if (__VdlySet__delay_regs__v26) {
        vlSelfRef.__PVT__delay_regs[5U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v27) {
        vlSelfRef.__PVT__delay_regs[5U][4U] = __VdlyVal__delay_regs__v27;
    }
    if (__VdlySet__delay_regs__v28) {
        vlSelfRef.__PVT__delay_regs[5U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v29) {
        vlSelfRef.__PVT__delay_regs[5U][5U] = __VdlyVal__delay_regs__v29;
    }
    if (__VdlySet__delay_regs__v30) {
        vlSelfRef.__PVT__delay_regs[6U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v31) {
        vlSelfRef.__PVT__delay_regs[6U][1U] = __VdlyVal__delay_regs__v31;
    }
    if (__VdlySet__delay_regs__v32) {
        vlSelfRef.__PVT__delay_regs[6U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v33) {
        vlSelfRef.__PVT__delay_regs[6U][2U] = __VdlyVal__delay_regs__v33;
    }
    if (__VdlySet__delay_regs__v34) {
        vlSelfRef.__PVT__delay_regs[6U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v35) {
        vlSelfRef.__PVT__delay_regs[6U][3U] = __VdlyVal__delay_regs__v35;
    }
    if (__VdlySet__delay_regs__v36) {
        vlSelfRef.__PVT__delay_regs[6U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v37) {
        vlSelfRef.__PVT__delay_regs[6U][4U] = __VdlyVal__delay_regs__v37;
    }
    if (__VdlySet__delay_regs__v38) {
        vlSelfRef.__PVT__delay_regs[6U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v39) {
        vlSelfRef.__PVT__delay_regs[6U][5U] = __VdlyVal__delay_regs__v39;
    }
    if (__VdlySet__delay_regs__v40) {
        vlSelfRef.__PVT__delay_regs[6U][6U] = 0U;
    }
    if (__VdlySet__delay_regs__v41) {
        vlSelfRef.__PVT__delay_regs[6U][6U] = __VdlyVal__delay_regs__v41;
    }
    if (__VdlySet__delay_regs__v42) {
        vlSelfRef.__PVT__delay_regs[7U][1U] = 0U;
    }
    if (__VdlySet__delay_regs__v43) {
        vlSelfRef.__PVT__delay_regs[7U][1U] = __VdlyVal__delay_regs__v43;
    }
    if (__VdlySet__delay_regs__v44) {
        vlSelfRef.__PVT__delay_regs[7U][2U] = 0U;
    }
    if (__VdlySet__delay_regs__v45) {
        vlSelfRef.__PVT__delay_regs[7U][2U] = __VdlyVal__delay_regs__v45;
    }
    if (__VdlySet__delay_regs__v46) {
        vlSelfRef.__PVT__delay_regs[7U][3U] = 0U;
    }
    if (__VdlySet__delay_regs__v47) {
        vlSelfRef.__PVT__delay_regs[7U][3U] = __VdlyVal__delay_regs__v47;
    }
    if (__VdlySet__delay_regs__v48) {
        vlSelfRef.__PVT__delay_regs[7U][4U] = 0U;
    }
    if (__VdlySet__delay_regs__v49) {
        vlSelfRef.__PVT__delay_regs[7U][4U] = __VdlyVal__delay_regs__v49;
    }
    if (__VdlySet__delay_regs__v50) {
        vlSelfRef.__PVT__delay_regs[7U][5U] = 0U;
    }
    if (__VdlySet__delay_regs__v51) {
        vlSelfRef.__PVT__delay_regs[7U][5U] = __VdlyVal__delay_regs__v51;
    }
    if (__VdlySet__delay_regs__v52) {
        vlSelfRef.__PVT__delay_regs[7U][6U] = 0U;
    }
    if (__VdlySet__delay_regs__v53) {
        vlSelfRef.__PVT__delay_regs[7U][6U] = __VdlyVal__delay_regs__v53;
    }
    if (__VdlySet__delay_regs__v54) {
        vlSelfRef.__PVT__delay_regs[7U][7U] = 0U;
    }
    if (__VdlySet__delay_regs__v55) {
        vlSelfRef.__PVT__delay_regs[7U][7U] = __VdlyVal__delay_regs__v55;
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__1(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in) 
               ^ (IData)(vlSelfRef.__Vtogcov__mem_data_in)))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffeULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffdULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 1U))))) 
                                               << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffbULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 2U))))) 
                                               << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffff7ULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 3U))))) 
                                               << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffefULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 4U))))) 
                                               << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffdfULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 5U))))) 
                                               << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffffbfULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 6U))))) 
                                               << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffff7fULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 7U))))) 
                                               << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffeffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 8U))))) 
                                               << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffdffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 9U))))) 
                                               << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffbffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xaU))))) 
                                               << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffff7ffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xbU))))) 
                                               << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffefffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xcU))))) 
                                               << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffdfffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xdU))))) 
                                               << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffffbfffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xeU))))) 
                                               << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffff7fffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0xfU))))) 
                                               << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffeffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x10U))))) 
                                               << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffdffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x11U))))) 
                                               << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffbffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x12U))))) 
                                               << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffff7ffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x13U))))) 
                                               << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffefffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x14U))))) 
                                               << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffdfffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x15U))))) 
                                               << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffffbfffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x16U))))) 
                                               << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffff7fffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x17U))))) 
                                               << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffeffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x18U))))) 
                                               << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffdffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x19U))))) 
                                               << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffbffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1aU))))) 
                                               << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffff7ffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1bU))))) 
                                               << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffefffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1cU))))) 
                                               << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffdfffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1dU))))) 
                                               << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffffbfffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1eU))))) 
                                               << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffff7fffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x1fU))))) 
                                               << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffeffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x20U))))) 
                                               << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffdffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x21U))))) 
                                               << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffbffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x22U))))) 
                                               << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffff7ffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x23U))))) 
                                               << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffefffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x24U))))) 
                                               << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffdfffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x25U))))) 
                                               << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffffbfffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x26U))))) 
                                               << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffff7fffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x27U))))) 
                                               << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffeffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x28U))))) 
                                               << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffdffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x29U))))) 
                                               << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffbffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2aU))))) 
                                               << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffff7ffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffefffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2cU))))) 
                                               << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffdfffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2dU))))) 
                                               << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffffbfffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2eU))))) 
                                               << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffff7fffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x2fU))))) 
                                               << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffeffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x30U))))) 
                                               << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffdffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x31U))))) 
                                               << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffbffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x32U))))) 
                                               << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfff7ffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x33U))))) 
                                               << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffefffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x34U))))) 
                                               << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffdfffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x35U))))) 
                                               << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xffbfffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x36U))))) 
                                               << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xff7fffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x37U))))) 
                                               << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfeffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x38U))))) 
                                               << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfdffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x39U))))) 
                                               << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfbffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3aU))))) 
                                               << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xf7ffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3bU))))) 
                                               << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xefffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3cU))))) 
                                               << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xdfffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3dU))))) 
                                               << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xbfffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3eU))))) 
                                               << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                  ^ vlSelfRef.__Vtogcov__mem_data_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0x7fffffffffffffffULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU));
    }
}

VL_INLINE_OPT void Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__2(Vsystolic_pe_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsystolic_pe_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.skewed_data_out_flat = ((0xffffffffff0000ffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [2U]
                                                           [2U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [1U]
                                                          [1U]))) 
                                         << 8U));
    vlSelfRef.skewed_data_out_flat = ((0xffffff0000ffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [4U]
                                                           [4U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [3U]
                                                          [3U]))) 
                                         << 0x18U));
    vlSelfRef.skewed_data_out_flat = ((0xff0000ffffffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         ((vlSelfRef.__PVT__delay_regs
                                                           [6U]
                                                           [6U] 
                                                           << 8U) 
                                                          | vlSelfRef.__PVT__delay_regs
                                                          [5U]
                                                          [5U]))) 
                                         << 0x28U));
    vlSelfRef.skewed_data_out_flat = ((0xffffffffffffffULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.__PVT__delay_regs
                                                         [7U]
                                                         [7U])) 
                                         << 0x38U));
    vlSelfRef.skewed_data_out_flat = ((0xffffffffffffff00ULL 
                                       & vlSelfRef.skewed_data_out_flat) 
                                      | (IData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in)))));
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.__Vtogcov__skewed_data_out_flat)))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffeULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | (IData)((IData)((1U & (IData)(vlSelfRef.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffdULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffbULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffff7ULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffefULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffdfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffbfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffff7fULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffeffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffdffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffbffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffff7ffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffefffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffdfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffbfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffff7fffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffeffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffdffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffbffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffff7ffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffefffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffdfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffbfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffff7fffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffeffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffdffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffbffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffff7ffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffefffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffdfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffbfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffff7fffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffeffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffdffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffbffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffff7ffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffefffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffdfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffbfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffff7fffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffeffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffdffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffbffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffff7ffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffefffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffdfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffbfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffff7fffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffeffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffdffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffbffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfff7ffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffefffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffdfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffbfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xff7fffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfeffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfdffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfbffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xf7ffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xefffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xdfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xbfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelfRef.skewed_data_out_flat ^ vlSelfRef.__Vtogcov__skewed_data_out_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0x7fffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}
