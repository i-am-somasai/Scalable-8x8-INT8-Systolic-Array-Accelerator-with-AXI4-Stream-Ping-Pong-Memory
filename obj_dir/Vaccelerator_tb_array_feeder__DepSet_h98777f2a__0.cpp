// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccelerator_tb.h for the primary calling header

#include "Vaccelerator_tb__pch.h"
#include "Vaccelerator_tb__Syms.h"
#include "Vaccelerator_tb_array_feeder.h"

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___act_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__clk) 
         ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.accelerator_tb__DOT__clk;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___act_comb__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___act_comb__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.accelerator_tb__DOT__rst) 
         ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.accelerator_tb__DOT__rst;
    }
}

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__0\n"); );
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
        ++(vlSymsp->__Vcoverage[1513]);
        __VdlySet__delay_regs__v0 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1509]);
        __VdlyVal__delay_regs__v1 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 8U)));
        __VdlySet__delay_regs__v1 = 1U;
        ++(vlSymsp->__Vcoverage[1511]);
    } else {
        ++(vlSymsp->__Vcoverage[1512]);
    }
    ++(vlSymsp->__Vcoverage[1514]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1519]);
        __VdlySet__delay_regs__v2 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1515]);
        __VdlyVal__delay_regs__v3 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 0x10U)));
        __VdlySet__delay_regs__v3 = 1U;
        ++(vlSymsp->__Vcoverage[1517]);
    } else {
        ++(vlSymsp->__Vcoverage[1518]);
    }
    ++(vlSymsp->__Vcoverage[1520]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1531]);
        __VdlySet__delay_regs__v6 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1527]);
        __VdlyVal__delay_regs__v7 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                      >> 0x18U)));
        __VdlySet__delay_regs__v7 = 1U;
        ++(vlSymsp->__Vcoverage[1529]);
    } else {
        ++(vlSymsp->__Vcoverage[1530]);
    }
    ++(vlSymsp->__Vcoverage[1532]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1549]);
        __VdlySet__delay_regs__v12 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1545]);
        __VdlyVal__delay_regs__v13 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x20U)));
        __VdlySet__delay_regs__v13 = 1U;
        ++(vlSymsp->__Vcoverage[1547]);
    } else {
        ++(vlSymsp->__Vcoverage[1548]);
    }
    ++(vlSymsp->__Vcoverage[1550]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1573]);
        __VdlySet__delay_regs__v20 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1569]);
        __VdlyVal__delay_regs__v21 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x28U)));
        __VdlySet__delay_regs__v21 = 1U;
        ++(vlSymsp->__Vcoverage[1571]);
    } else {
        ++(vlSymsp->__Vcoverage[1572]);
    }
    ++(vlSymsp->__Vcoverage[1574]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1603]);
        __VdlySet__delay_regs__v30 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1599]);
        __VdlyVal__delay_regs__v31 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x30U)));
        __VdlySet__delay_regs__v31 = 1U;
        ++(vlSymsp->__Vcoverage[1601]);
    } else {
        ++(vlSymsp->__Vcoverage[1602]);
    }
    ++(vlSymsp->__Vcoverage[1604]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1639]);
        __VdlySet__delay_regs__v42 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1635]);
        __VdlyVal__delay_regs__v43 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                       >> 0x38U)));
        __VdlySet__delay_regs__v43 = 1U;
        ++(vlSymsp->__Vcoverage[1637]);
    } else {
        ++(vlSymsp->__Vcoverage[1638]);
    }
    ++(vlSymsp->__Vcoverage[1640]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1525]);
        __VdlySet__delay_regs__v4 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v5 = vlSelfRef.__PVT__delay_regs
            [2U][1U];
        __VdlySet__delay_regs__v5 = 1U;
        ++(vlSymsp->__Vcoverage[1522]);
        ++(vlSymsp->__Vcoverage[1523]);
    } else {
        ++(vlSymsp->__Vcoverage[1524]);
    }
    ++(vlSymsp->__Vcoverage[1526]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1537]);
        __VdlySet__delay_regs__v8 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v9 = vlSelfRef.__PVT__delay_regs
            [3U][1U];
        __VdlySet__delay_regs__v9 = 1U;
        ++(vlSymsp->__Vcoverage[1534]);
        ++(vlSymsp->__Vcoverage[1535]);
    } else {
        ++(vlSymsp->__Vcoverage[1536]);
    }
    ++(vlSymsp->__Vcoverage[1538]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1543]);
        __VdlySet__delay_regs__v10 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v11 = vlSelfRef.__PVT__delay_regs
            [3U][2U];
        __VdlySet__delay_regs__v11 = 1U;
        ++(vlSymsp->__Vcoverage[1540]);
        ++(vlSymsp->__Vcoverage[1541]);
    } else {
        ++(vlSymsp->__Vcoverage[1542]);
    }
    ++(vlSymsp->__Vcoverage[1544]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1555]);
        __VdlySet__delay_regs__v14 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v15 = vlSelfRef.__PVT__delay_regs
            [4U][1U];
        __VdlySet__delay_regs__v15 = 1U;
        ++(vlSymsp->__Vcoverage[1552]);
        ++(vlSymsp->__Vcoverage[1553]);
    } else {
        ++(vlSymsp->__Vcoverage[1554]);
    }
    ++(vlSymsp->__Vcoverage[1556]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1561]);
        __VdlySet__delay_regs__v16 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v17 = vlSelfRef.__PVT__delay_regs
            [4U][2U];
        __VdlySet__delay_regs__v17 = 1U;
        ++(vlSymsp->__Vcoverage[1558]);
        ++(vlSymsp->__Vcoverage[1559]);
    } else {
        ++(vlSymsp->__Vcoverage[1560]);
    }
    ++(vlSymsp->__Vcoverage[1562]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1567]);
        __VdlySet__delay_regs__v18 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v19 = vlSelfRef.__PVT__delay_regs
            [4U][3U];
        __VdlySet__delay_regs__v19 = 1U;
        ++(vlSymsp->__Vcoverage[1564]);
        ++(vlSymsp->__Vcoverage[1565]);
    } else {
        ++(vlSymsp->__Vcoverage[1566]);
    }
    ++(vlSymsp->__Vcoverage[1568]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1579]);
        __VdlySet__delay_regs__v22 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v23 = vlSelfRef.__PVT__delay_regs
            [5U][1U];
        __VdlySet__delay_regs__v23 = 1U;
        ++(vlSymsp->__Vcoverage[1576]);
        ++(vlSymsp->__Vcoverage[1577]);
    } else {
        ++(vlSymsp->__Vcoverage[1578]);
    }
    ++(vlSymsp->__Vcoverage[1580]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1585]);
        __VdlySet__delay_regs__v24 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v25 = vlSelfRef.__PVT__delay_regs
            [5U][2U];
        __VdlySet__delay_regs__v25 = 1U;
        ++(vlSymsp->__Vcoverage[1582]);
        ++(vlSymsp->__Vcoverage[1583]);
    } else {
        ++(vlSymsp->__Vcoverage[1584]);
    }
    ++(vlSymsp->__Vcoverage[1586]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1591]);
        __VdlySet__delay_regs__v26 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v27 = vlSelfRef.__PVT__delay_regs
            [5U][3U];
        __VdlySet__delay_regs__v27 = 1U;
        ++(vlSymsp->__Vcoverage[1588]);
        ++(vlSymsp->__Vcoverage[1589]);
    } else {
        ++(vlSymsp->__Vcoverage[1590]);
    }
    ++(vlSymsp->__Vcoverage[1592]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1597]);
        __VdlySet__delay_regs__v28 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v29 = vlSelfRef.__PVT__delay_regs
            [5U][4U];
        __VdlySet__delay_regs__v29 = 1U;
        ++(vlSymsp->__Vcoverage[1594]);
        ++(vlSymsp->__Vcoverage[1595]);
    } else {
        ++(vlSymsp->__Vcoverage[1596]);
    }
    ++(vlSymsp->__Vcoverage[1598]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1609]);
        __VdlySet__delay_regs__v32 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v33 = vlSelfRef.__PVT__delay_regs
            [6U][1U];
        __VdlySet__delay_regs__v33 = 1U;
        ++(vlSymsp->__Vcoverage[1606]);
        ++(vlSymsp->__Vcoverage[1607]);
    } else {
        ++(vlSymsp->__Vcoverage[1608]);
    }
    ++(vlSymsp->__Vcoverage[1610]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1615]);
        __VdlySet__delay_regs__v34 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v35 = vlSelfRef.__PVT__delay_regs
            [6U][2U];
        __VdlySet__delay_regs__v35 = 1U;
        ++(vlSymsp->__Vcoverage[1612]);
        ++(vlSymsp->__Vcoverage[1613]);
    } else {
        ++(vlSymsp->__Vcoverage[1614]);
    }
    ++(vlSymsp->__Vcoverage[1616]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1621]);
        __VdlySet__delay_regs__v36 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v37 = vlSelfRef.__PVT__delay_regs
            [6U][3U];
        __VdlySet__delay_regs__v37 = 1U;
        ++(vlSymsp->__Vcoverage[1618]);
        ++(vlSymsp->__Vcoverage[1619]);
    } else {
        ++(vlSymsp->__Vcoverage[1620]);
    }
    ++(vlSymsp->__Vcoverage[1622]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1627]);
        __VdlySet__delay_regs__v38 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v39 = vlSelfRef.__PVT__delay_regs
            [6U][4U];
        __VdlySet__delay_regs__v39 = 1U;
        ++(vlSymsp->__Vcoverage[1624]);
        ++(vlSymsp->__Vcoverage[1625]);
    } else {
        ++(vlSymsp->__Vcoverage[1626]);
    }
    ++(vlSymsp->__Vcoverage[1628]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1633]);
        __VdlySet__delay_regs__v40 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v41 = vlSelfRef.__PVT__delay_regs
            [6U][5U];
        __VdlySet__delay_regs__v41 = 1U;
        ++(vlSymsp->__Vcoverage[1630]);
        ++(vlSymsp->__Vcoverage[1631]);
    } else {
        ++(vlSymsp->__Vcoverage[1632]);
    }
    ++(vlSymsp->__Vcoverage[1634]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1645]);
        __VdlySet__delay_regs__v44 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v45 = vlSelfRef.__PVT__delay_regs
            [7U][1U];
        __VdlySet__delay_regs__v45 = 1U;
        ++(vlSymsp->__Vcoverage[1642]);
        ++(vlSymsp->__Vcoverage[1643]);
    } else {
        ++(vlSymsp->__Vcoverage[1644]);
    }
    ++(vlSymsp->__Vcoverage[1646]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1651]);
        __VdlySet__delay_regs__v46 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v47 = vlSelfRef.__PVT__delay_regs
            [7U][2U];
        __VdlySet__delay_regs__v47 = 1U;
        ++(vlSymsp->__Vcoverage[1648]);
        ++(vlSymsp->__Vcoverage[1649]);
    } else {
        ++(vlSymsp->__Vcoverage[1650]);
    }
    ++(vlSymsp->__Vcoverage[1652]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1657]);
        __VdlySet__delay_regs__v48 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v49 = vlSelfRef.__PVT__delay_regs
            [7U][3U];
        __VdlySet__delay_regs__v49 = 1U;
        ++(vlSymsp->__Vcoverage[1654]);
        ++(vlSymsp->__Vcoverage[1655]);
    } else {
        ++(vlSymsp->__Vcoverage[1656]);
    }
    ++(vlSymsp->__Vcoverage[1658]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1663]);
        __VdlySet__delay_regs__v50 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v51 = vlSelfRef.__PVT__delay_regs
            [7U][4U];
        __VdlySet__delay_regs__v51 = 1U;
        ++(vlSymsp->__Vcoverage[1660]);
        ++(vlSymsp->__Vcoverage[1661]);
    } else {
        ++(vlSymsp->__Vcoverage[1662]);
    }
    ++(vlSymsp->__Vcoverage[1664]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1669]);
        __VdlySet__delay_regs__v52 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v53 = vlSelfRef.__PVT__delay_regs
            [7U][5U];
        __VdlySet__delay_regs__v53 = 1U;
        ++(vlSymsp->__Vcoverage[1666]);
        ++(vlSymsp->__Vcoverage[1667]);
    } else {
        ++(vlSymsp->__Vcoverage[1668]);
    }
    ++(vlSymsp->__Vcoverage[1670]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1675]);
        __VdlySet__delay_regs__v54 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v55 = vlSelfRef.__PVT__delay_regs
            [7U][6U];
        __VdlySet__delay_regs__v55 = 1U;
        ++(vlSymsp->__Vcoverage[1672]);
        ++(vlSymsp->__Vcoverage[1673]);
    } else {
        ++(vlSymsp->__Vcoverage[1674]);
    }
    ++(vlSymsp->__Vcoverage[1676]);
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

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__1(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in) 
               ^ (IData)(vlSelfRef.__Vtogcov__mem_data_in)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffeULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
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
        ++(vlSymsp->__Vcoverage[1383]);
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
        ++(vlSymsp->__Vcoverage[1384]);
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
        ++(vlSymsp->__Vcoverage[1385]);
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
        ++(vlSymsp->__Vcoverage[1386]);
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
        ++(vlSymsp->__Vcoverage[1387]);
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
        ++(vlSymsp->__Vcoverage[1388]);
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
        ++(vlSymsp->__Vcoverage[1389]);
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
        ++(vlSymsp->__Vcoverage[1390]);
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
        ++(vlSymsp->__Vcoverage[1391]);
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
        ++(vlSymsp->__Vcoverage[1392]);
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
        ++(vlSymsp->__Vcoverage[1393]);
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
        ++(vlSymsp->__Vcoverage[1394]);
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
        ++(vlSymsp->__Vcoverage[1395]);
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
        ++(vlSymsp->__Vcoverage[1396]);
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
        ++(vlSymsp->__Vcoverage[1397]);
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
        ++(vlSymsp->__Vcoverage[1398]);
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
        ++(vlSymsp->__Vcoverage[1399]);
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
        ++(vlSymsp->__Vcoverage[1400]);
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
        ++(vlSymsp->__Vcoverage[1401]);
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
        ++(vlSymsp->__Vcoverage[1402]);
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
        ++(vlSymsp->__Vcoverage[1403]);
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
        ++(vlSymsp->__Vcoverage[1404]);
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
        ++(vlSymsp->__Vcoverage[1405]);
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
        ++(vlSymsp->__Vcoverage[1406]);
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
        ++(vlSymsp->__Vcoverage[1407]);
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
        ++(vlSymsp->__Vcoverage[1408]);
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
        ++(vlSymsp->__Vcoverage[1409]);
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
        ++(vlSymsp->__Vcoverage[1410]);
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
        ++(vlSymsp->__Vcoverage[1411]);
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
        ++(vlSymsp->__Vcoverage[1412]);
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
        ++(vlSymsp->__Vcoverage[1413]);
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
        ++(vlSymsp->__Vcoverage[1414]);
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
        ++(vlSymsp->__Vcoverage[1415]);
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
        ++(vlSymsp->__Vcoverage[1416]);
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
        ++(vlSymsp->__Vcoverage[1417]);
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
        ++(vlSymsp->__Vcoverage[1418]);
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
        ++(vlSymsp->__Vcoverage[1419]);
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
        ++(vlSymsp->__Vcoverage[1420]);
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
        ++(vlSymsp->__Vcoverage[1421]);
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
        ++(vlSymsp->__Vcoverage[1422]);
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
        ++(vlSymsp->__Vcoverage[1423]);
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
        ++(vlSymsp->__Vcoverage[1424]);
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
        ++(vlSymsp->__Vcoverage[1425]);
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
        ++(vlSymsp->__Vcoverage[1426]);
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
        ++(vlSymsp->__Vcoverage[1427]);
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
        ++(vlSymsp->__Vcoverage[1428]);
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
        ++(vlSymsp->__Vcoverage[1429]);
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
        ++(vlSymsp->__Vcoverage[1430]);
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
        ++(vlSymsp->__Vcoverage[1431]);
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
        ++(vlSymsp->__Vcoverage[1432]);
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
        ++(vlSymsp->__Vcoverage[1433]);
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
        ++(vlSymsp->__Vcoverage[1434]);
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
        ++(vlSymsp->__Vcoverage[1435]);
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
        ++(vlSymsp->__Vcoverage[1436]);
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
        ++(vlSymsp->__Vcoverage[1437]);
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
        ++(vlSymsp->__Vcoverage[1438]);
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
        ++(vlSymsp->__Vcoverage[1439]);
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
        ++(vlSymsp->__Vcoverage[1440]);
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
        ++(vlSymsp->__Vcoverage[1441]);
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
        ++(vlSymsp->__Vcoverage[1442]);
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
        ++(vlSymsp->__Vcoverage[1443]);
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
        ++(vlSymsp->__Vcoverage[1444]);
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

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__2(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_a__2\n"); );
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
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.__Vtogcov__skewed_data_out_flat)))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffeULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | (IData)((IData)((1U & (IData)(vlSelfRef.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffdULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffbULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffff7ULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffefULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffdfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffbfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffff7fULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffeffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffdffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffbffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffff7ffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffefffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffdfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffbfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffff7fffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffeffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffdffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffbffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffff7ffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffefffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffdfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffbfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffff7fffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffeffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffdffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffbffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffff7ffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffefffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffdfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffbfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffff7fffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffeffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffdffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffbffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffff7ffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffefffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffdfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffbfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffff7fffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffeffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffdffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffbffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffff7ffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffefffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffdfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffbfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffff7fffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffeffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffdffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffbffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfff7ffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffefffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffdfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffbfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xff7fffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfeffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfdffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfbffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xf7ffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xefffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xdfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xbfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelfRef.skewed_data_out_flat ^ vlSelfRef.__Vtogcov__skewed_data_out_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0x7fffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__0(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__0\n"); );
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
        ++(vlSymsp->__Vcoverage[1513]);
        __VdlySet__delay_regs__v0 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1509]);
        __VdlyVal__delay_regs__v1 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 8U)));
        __VdlySet__delay_regs__v1 = 1U;
        ++(vlSymsp->__Vcoverage[1511]);
    } else {
        ++(vlSymsp->__Vcoverage[1512]);
    }
    ++(vlSymsp->__Vcoverage[1514]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1519]);
        __VdlySet__delay_regs__v2 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1515]);
        __VdlyVal__delay_regs__v3 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 0x10U)));
        __VdlySet__delay_regs__v3 = 1U;
        ++(vlSymsp->__Vcoverage[1517]);
    } else {
        ++(vlSymsp->__Vcoverage[1518]);
    }
    ++(vlSymsp->__Vcoverage[1520]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1531]);
        __VdlySet__delay_regs__v6 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1527]);
        __VdlyVal__delay_regs__v7 = (0xffU & (IData)(
                                                     (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                      >> 0x18U)));
        __VdlySet__delay_regs__v7 = 1U;
        ++(vlSymsp->__Vcoverage[1529]);
    } else {
        ++(vlSymsp->__Vcoverage[1530]);
    }
    ++(vlSymsp->__Vcoverage[1532]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1549]);
        __VdlySet__delay_regs__v12 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1545]);
        __VdlyVal__delay_regs__v13 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x20U)));
        __VdlySet__delay_regs__v13 = 1U;
        ++(vlSymsp->__Vcoverage[1547]);
    } else {
        ++(vlSymsp->__Vcoverage[1548]);
    }
    ++(vlSymsp->__Vcoverage[1550]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1573]);
        __VdlySet__delay_regs__v20 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1569]);
        __VdlyVal__delay_regs__v21 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x28U)));
        __VdlySet__delay_regs__v21 = 1U;
        ++(vlSymsp->__Vcoverage[1571]);
    } else {
        ++(vlSymsp->__Vcoverage[1572]);
    }
    ++(vlSymsp->__Vcoverage[1574]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1603]);
        __VdlySet__delay_regs__v30 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1599]);
        __VdlyVal__delay_regs__v31 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x30U)));
        __VdlySet__delay_regs__v31 = 1U;
        ++(vlSymsp->__Vcoverage[1601]);
    } else {
        ++(vlSymsp->__Vcoverage[1602]);
    }
    ++(vlSymsp->__Vcoverage[1604]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1639]);
        __VdlySet__delay_regs__v42 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        ++(vlSymsp->__Vcoverage[1635]);
        __VdlyVal__delay_regs__v43 = (0xffU & (IData)(
                                                      (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                       >> 0x38U)));
        __VdlySet__delay_regs__v43 = 1U;
        ++(vlSymsp->__Vcoverage[1637]);
    } else {
        ++(vlSymsp->__Vcoverage[1638]);
    }
    ++(vlSymsp->__Vcoverage[1640]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1525]);
        __VdlySet__delay_regs__v4 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v5 = vlSelfRef.__PVT__delay_regs
            [2U][1U];
        __VdlySet__delay_regs__v5 = 1U;
        ++(vlSymsp->__Vcoverage[1522]);
        ++(vlSymsp->__Vcoverage[1523]);
    } else {
        ++(vlSymsp->__Vcoverage[1524]);
    }
    ++(vlSymsp->__Vcoverage[1526]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1537]);
        __VdlySet__delay_regs__v8 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v9 = vlSelfRef.__PVT__delay_regs
            [3U][1U];
        __VdlySet__delay_regs__v9 = 1U;
        ++(vlSymsp->__Vcoverage[1534]);
        ++(vlSymsp->__Vcoverage[1535]);
    } else {
        ++(vlSymsp->__Vcoverage[1536]);
    }
    ++(vlSymsp->__Vcoverage[1538]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1543]);
        __VdlySet__delay_regs__v10 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v11 = vlSelfRef.__PVT__delay_regs
            [3U][2U];
        __VdlySet__delay_regs__v11 = 1U;
        ++(vlSymsp->__Vcoverage[1540]);
        ++(vlSymsp->__Vcoverage[1541]);
    } else {
        ++(vlSymsp->__Vcoverage[1542]);
    }
    ++(vlSymsp->__Vcoverage[1544]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1555]);
        __VdlySet__delay_regs__v14 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v15 = vlSelfRef.__PVT__delay_regs
            [4U][1U];
        __VdlySet__delay_regs__v15 = 1U;
        ++(vlSymsp->__Vcoverage[1552]);
        ++(vlSymsp->__Vcoverage[1553]);
    } else {
        ++(vlSymsp->__Vcoverage[1554]);
    }
    ++(vlSymsp->__Vcoverage[1556]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1561]);
        __VdlySet__delay_regs__v16 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v17 = vlSelfRef.__PVT__delay_regs
            [4U][2U];
        __VdlySet__delay_regs__v17 = 1U;
        ++(vlSymsp->__Vcoverage[1558]);
        ++(vlSymsp->__Vcoverage[1559]);
    } else {
        ++(vlSymsp->__Vcoverage[1560]);
    }
    ++(vlSymsp->__Vcoverage[1562]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1567]);
        __VdlySet__delay_regs__v18 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v19 = vlSelfRef.__PVT__delay_regs
            [4U][3U];
        __VdlySet__delay_regs__v19 = 1U;
        ++(vlSymsp->__Vcoverage[1564]);
        ++(vlSymsp->__Vcoverage[1565]);
    } else {
        ++(vlSymsp->__Vcoverage[1566]);
    }
    ++(vlSymsp->__Vcoverage[1568]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1579]);
        __VdlySet__delay_regs__v22 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v23 = vlSelfRef.__PVT__delay_regs
            [5U][1U];
        __VdlySet__delay_regs__v23 = 1U;
        ++(vlSymsp->__Vcoverage[1576]);
        ++(vlSymsp->__Vcoverage[1577]);
    } else {
        ++(vlSymsp->__Vcoverage[1578]);
    }
    ++(vlSymsp->__Vcoverage[1580]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1585]);
        __VdlySet__delay_regs__v24 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v25 = vlSelfRef.__PVT__delay_regs
            [5U][2U];
        __VdlySet__delay_regs__v25 = 1U;
        ++(vlSymsp->__Vcoverage[1582]);
        ++(vlSymsp->__Vcoverage[1583]);
    } else {
        ++(vlSymsp->__Vcoverage[1584]);
    }
    ++(vlSymsp->__Vcoverage[1586]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1591]);
        __VdlySet__delay_regs__v26 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v27 = vlSelfRef.__PVT__delay_regs
            [5U][3U];
        __VdlySet__delay_regs__v27 = 1U;
        ++(vlSymsp->__Vcoverage[1588]);
        ++(vlSymsp->__Vcoverage[1589]);
    } else {
        ++(vlSymsp->__Vcoverage[1590]);
    }
    ++(vlSymsp->__Vcoverage[1592]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1597]);
        __VdlySet__delay_regs__v28 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v29 = vlSelfRef.__PVT__delay_regs
            [5U][4U];
        __VdlySet__delay_regs__v29 = 1U;
        ++(vlSymsp->__Vcoverage[1594]);
        ++(vlSymsp->__Vcoverage[1595]);
    } else {
        ++(vlSymsp->__Vcoverage[1596]);
    }
    ++(vlSymsp->__Vcoverage[1598]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1609]);
        __VdlySet__delay_regs__v32 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v33 = vlSelfRef.__PVT__delay_regs
            [6U][1U];
        __VdlySet__delay_regs__v33 = 1U;
        ++(vlSymsp->__Vcoverage[1606]);
        ++(vlSymsp->__Vcoverage[1607]);
    } else {
        ++(vlSymsp->__Vcoverage[1608]);
    }
    ++(vlSymsp->__Vcoverage[1610]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1615]);
        __VdlySet__delay_regs__v34 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v35 = vlSelfRef.__PVT__delay_regs
            [6U][2U];
        __VdlySet__delay_regs__v35 = 1U;
        ++(vlSymsp->__Vcoverage[1612]);
        ++(vlSymsp->__Vcoverage[1613]);
    } else {
        ++(vlSymsp->__Vcoverage[1614]);
    }
    ++(vlSymsp->__Vcoverage[1616]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1621]);
        __VdlySet__delay_regs__v36 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v37 = vlSelfRef.__PVT__delay_regs
            [6U][3U];
        __VdlySet__delay_regs__v37 = 1U;
        ++(vlSymsp->__Vcoverage[1618]);
        ++(vlSymsp->__Vcoverage[1619]);
    } else {
        ++(vlSymsp->__Vcoverage[1620]);
    }
    ++(vlSymsp->__Vcoverage[1622]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1627]);
        __VdlySet__delay_regs__v38 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v39 = vlSelfRef.__PVT__delay_regs
            [6U][4U];
        __VdlySet__delay_regs__v39 = 1U;
        ++(vlSymsp->__Vcoverage[1624]);
        ++(vlSymsp->__Vcoverage[1625]);
    } else {
        ++(vlSymsp->__Vcoverage[1626]);
    }
    ++(vlSymsp->__Vcoverage[1628]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1633]);
        __VdlySet__delay_regs__v40 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v41 = vlSelfRef.__PVT__delay_regs
            [6U][5U];
        __VdlySet__delay_regs__v41 = 1U;
        ++(vlSymsp->__Vcoverage[1630]);
        ++(vlSymsp->__Vcoverage[1631]);
    } else {
        ++(vlSymsp->__Vcoverage[1632]);
    }
    ++(vlSymsp->__Vcoverage[1634]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1645]);
        __VdlySet__delay_regs__v44 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v45 = vlSelfRef.__PVT__delay_regs
            [7U][1U];
        __VdlySet__delay_regs__v45 = 1U;
        ++(vlSymsp->__Vcoverage[1642]);
        ++(vlSymsp->__Vcoverage[1643]);
    } else {
        ++(vlSymsp->__Vcoverage[1644]);
    }
    ++(vlSymsp->__Vcoverage[1646]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1651]);
        __VdlySet__delay_regs__v46 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v47 = vlSelfRef.__PVT__delay_regs
            [7U][2U];
        __VdlySet__delay_regs__v47 = 1U;
        ++(vlSymsp->__Vcoverage[1648]);
        ++(vlSymsp->__Vcoverage[1649]);
    } else {
        ++(vlSymsp->__Vcoverage[1650]);
    }
    ++(vlSymsp->__Vcoverage[1652]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1657]);
        __VdlySet__delay_regs__v48 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v49 = vlSelfRef.__PVT__delay_regs
            [7U][3U];
        __VdlySet__delay_regs__v49 = 1U;
        ++(vlSymsp->__Vcoverage[1654]);
        ++(vlSymsp->__Vcoverage[1655]);
    } else {
        ++(vlSymsp->__Vcoverage[1656]);
    }
    ++(vlSymsp->__Vcoverage[1658]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1663]);
        __VdlySet__delay_regs__v50 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v51 = vlSelfRef.__PVT__delay_regs
            [7U][4U];
        __VdlySet__delay_regs__v51 = 1U;
        ++(vlSymsp->__Vcoverage[1660]);
        ++(vlSymsp->__Vcoverage[1661]);
    } else {
        ++(vlSymsp->__Vcoverage[1662]);
    }
    ++(vlSymsp->__Vcoverage[1664]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1669]);
        __VdlySet__delay_regs__v52 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v53 = vlSelfRef.__PVT__delay_regs
            [7U][5U];
        __VdlySet__delay_regs__v53 = 1U;
        ++(vlSymsp->__Vcoverage[1666]);
        ++(vlSymsp->__Vcoverage[1667]);
    } else {
        ++(vlSymsp->__Vcoverage[1668]);
    }
    ++(vlSymsp->__Vcoverage[1670]);
    if (vlSymsp->TOP.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1675]);
        __VdlySet__delay_regs__v54 = 1U;
    } else if (vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en) {
        __VdlyVal__delay_regs__v55 = vlSelfRef.__PVT__delay_regs
            [7U][6U];
        __VdlySet__delay_regs__v55 = 1U;
        ++(vlSymsp->__Vcoverage[1672]);
        ++(vlSymsp->__Vcoverage[1673]);
    } else {
        ++(vlSymsp->__Vcoverage[1674]);
    }
    ++(vlSymsp->__Vcoverage[1676]);
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

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__1(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in) 
               ^ (IData)(vlSelfRef.__Vtogcov__mem_data_in)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__mem_data_in = ((0xfffffffffffffffeULL 
                                             & vlSelfRef.__Vtogcov__mem_data_in) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__mem_data_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1382]);
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
        ++(vlSymsp->__Vcoverage[1383]);
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
        ++(vlSymsp->__Vcoverage[1384]);
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
        ++(vlSymsp->__Vcoverage[1385]);
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
        ++(vlSymsp->__Vcoverage[1386]);
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
        ++(vlSymsp->__Vcoverage[1387]);
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
        ++(vlSymsp->__Vcoverage[1388]);
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
        ++(vlSymsp->__Vcoverage[1389]);
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
        ++(vlSymsp->__Vcoverage[1390]);
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
        ++(vlSymsp->__Vcoverage[1391]);
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
        ++(vlSymsp->__Vcoverage[1392]);
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
        ++(vlSymsp->__Vcoverage[1393]);
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
        ++(vlSymsp->__Vcoverage[1394]);
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
        ++(vlSymsp->__Vcoverage[1395]);
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
        ++(vlSymsp->__Vcoverage[1396]);
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
        ++(vlSymsp->__Vcoverage[1397]);
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
        ++(vlSymsp->__Vcoverage[1398]);
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
        ++(vlSymsp->__Vcoverage[1399]);
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
        ++(vlSymsp->__Vcoverage[1400]);
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
        ++(vlSymsp->__Vcoverage[1401]);
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
        ++(vlSymsp->__Vcoverage[1402]);
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
        ++(vlSymsp->__Vcoverage[1403]);
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
        ++(vlSymsp->__Vcoverage[1404]);
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
        ++(vlSymsp->__Vcoverage[1405]);
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
        ++(vlSymsp->__Vcoverage[1406]);
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
        ++(vlSymsp->__Vcoverage[1407]);
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
        ++(vlSymsp->__Vcoverage[1408]);
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
        ++(vlSymsp->__Vcoverage[1409]);
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
        ++(vlSymsp->__Vcoverage[1410]);
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
        ++(vlSymsp->__Vcoverage[1411]);
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
        ++(vlSymsp->__Vcoverage[1412]);
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
        ++(vlSymsp->__Vcoverage[1413]);
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
        ++(vlSymsp->__Vcoverage[1414]);
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
        ++(vlSymsp->__Vcoverage[1415]);
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
        ++(vlSymsp->__Vcoverage[1416]);
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
        ++(vlSymsp->__Vcoverage[1417]);
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
        ++(vlSymsp->__Vcoverage[1418]);
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
        ++(vlSymsp->__Vcoverage[1419]);
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
        ++(vlSymsp->__Vcoverage[1420]);
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
        ++(vlSymsp->__Vcoverage[1421]);
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
        ++(vlSymsp->__Vcoverage[1422]);
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
        ++(vlSymsp->__Vcoverage[1423]);
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
        ++(vlSymsp->__Vcoverage[1424]);
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
        ++(vlSymsp->__Vcoverage[1425]);
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
        ++(vlSymsp->__Vcoverage[1426]);
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
        ++(vlSymsp->__Vcoverage[1427]);
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
        ++(vlSymsp->__Vcoverage[1428]);
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
        ++(vlSymsp->__Vcoverage[1429]);
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
        ++(vlSymsp->__Vcoverage[1430]);
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
        ++(vlSymsp->__Vcoverage[1431]);
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
        ++(vlSymsp->__Vcoverage[1432]);
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
        ++(vlSymsp->__Vcoverage[1433]);
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
        ++(vlSymsp->__Vcoverage[1434]);
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
        ++(vlSymsp->__Vcoverage[1435]);
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
        ++(vlSymsp->__Vcoverage[1436]);
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
        ++(vlSymsp->__Vcoverage[1437]);
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
        ++(vlSymsp->__Vcoverage[1438]);
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
        ++(vlSymsp->__Vcoverage[1439]);
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
        ++(vlSymsp->__Vcoverage[1440]);
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
        ++(vlSymsp->__Vcoverage[1441]);
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
        ++(vlSymsp->__Vcoverage[1442]);
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
        ++(vlSymsp->__Vcoverage[1443]);
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
        ++(vlSymsp->__Vcoverage[1444]);
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

VL_INLINE_OPT void Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__2(Vaccelerator_tb_array_feeder* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaccelerator_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccelerator_tb_array_feeder___nba_sequent__TOP__accelerator_tb__DOT__dut__DOT__feeder_b__2\n"); );
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
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__en = vlSymsp->TOP.accelerator_tb__DOT__dut__DOT__array_en;
    }
    if ((1U & ((IData)(vlSelfRef.skewed_data_out_flat) 
               ^ (IData)(vlSelfRef.__Vtogcov__skewed_data_out_flat)))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffeULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | (IData)((IData)((1U & (IData)(vlSelfRef.skewed_data_out_flat)))));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 1U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffdULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 2U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffffbULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 3U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffff7ULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 4U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffefULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 5U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffdfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 6U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffffbfULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 7U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffff7fULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 8U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffeffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 9U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffdffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xaU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffffbffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xbU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffff7ffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xcU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffefffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xdU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffdfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xeU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffffbfffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0xfU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffff7fffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x10U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffeffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x11U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffdffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x12U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffffbffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x13U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffff7ffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x14U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffefffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x15U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffdfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x16U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffffbfffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x17U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffff7fffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x18U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffeffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x19U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffdffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffffbffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffff7ffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffefffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffdfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffffbfffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffff7fffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x20U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffeffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x21U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffdffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x22U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffffbffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x23U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffff7ffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x24U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffefffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x25U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffdfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x26U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffffbfffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x27U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffff7fffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x28U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffeffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x29U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffdffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffffbffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffff7ffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffefffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffdfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffffbfffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffff7fffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x30U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffeffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x31U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffdffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x32U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfffbffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x33U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfff7ffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x34U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffefffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x35U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffdfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x36U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xffbfffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x37U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xff7fffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x38U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfeffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x39U)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfdffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xfbffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xf7ffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xefffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xdfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.skewed_data_out_flat 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.__Vtogcov__skewed_data_out_flat 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0xbfffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelfRef.skewed_data_out_flat ^ vlSelfRef.__Vtogcov__skewed_data_out_flat) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelfRef.__Vtogcov__skewed_data_out_flat = 
            ((0x7fffffffffffffffULL & vlSelfRef.__Vtogcov__skewed_data_out_flat) 
             | ((QData)((IData)((1U & (IData)((vlSelfRef.skewed_data_out_flat 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}
