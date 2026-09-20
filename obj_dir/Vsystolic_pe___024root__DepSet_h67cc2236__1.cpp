// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe___024root.h"

extern const VlWide<8>/*255:0*/ Vsystolic_pe__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__0(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = 0;
    CData/*0:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg = 0;
    VlWide<8>/*255:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg;
    VL_ZERO_W(256, __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg);
    CData/*0:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((1U != (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__array_clear))))))) {
            VL_WRITEF_NX("[%0t] %%Error: accelerator_controller.sv:157: Assertion failed in %Naccelerator_tb.dut.acc_ctrl_inst: FSM Violation: array_clear not asserted in INIT\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/control/accelerator_controller.sv", 157, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0) 
                                        == (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tlast)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_stream_input.sv:137: Assertion failed in %Naccelerator_tb.dut.axi_in_inst: AXI Protocol Violation: TLAST changed while TVALID=1 and TREADY=0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/axi/axi_stream_input.sv", 137, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0) 
                                        == (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_stream_output.sv:104: Assertion failed in %Naccelerator_tb.dut.axi_out_inst: AXI Output Protocol Violation: TLAST changed while stalled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/axi/axi_stream_output.sv", 104, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_0_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_1_0 
                                        == vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata))))))) {
            VL_WRITEF_NX("[%0t] %%Error: systolic_accelerator_top.sv:193: Assertion failed in %Naccelerator_tb.dut: AXI Protocol Violation: TDATA changed when TVALID=1 and TREADY=0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/top/systolic_accelerator_top.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_2_0)) 
                                     | (0U == (((((
                                                   (((vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[0U] 
                                                      ^ 
                                                      vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]) 
                                                     | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[1U] 
                                                        ^ 
                                                        vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U])) 
                                                    | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[2U] 
                                                       ^ 
                                                       vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U])) 
                                                   | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[3U] 
                                                      ^ 
                                                      vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U])) 
                                                  | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[4U] 
                                                     ^ 
                                                     vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U])) 
                                                 | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[5U] 
                                                    ^ 
                                                    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U])) 
                                                | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[6U] 
                                                   ^ 
                                                   vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U])) 
                                               | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0[7U] 
                                                  ^ 
                                                  vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: systolic_accelerator_top.sv:199: Assertion failed in %Naccelerator_tb.dut: AXI Output Protocol Violation: TDATA changed while stalled.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/top/systolic_accelerator_top.sv", 199, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0)) 
                                     | ((vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0 
                                         == vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata) 
                                        & (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_stream_input.sv:130: Assertion failed in %Naccelerator_tb.dut.axi_in_inst: AXI Protocol Violation: TDATA changed while TVALID=1 and TREADY=0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/axi/axi_stream_input.sv", 130, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0)) 
                                     | ((0U == ((((
                                                   ((((vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[0U] 
                                                       ^ 
                                                       vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]) 
                                                      | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[1U] 
                                                         ^ 
                                                         vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U])) 
                                                     | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[2U] 
                                                        ^ 
                                                        vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U])) 
                                                    | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[3U] 
                                                       ^ 
                                                       vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U])) 
                                                   | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[4U] 
                                                      ^ 
                                                      vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U])) 
                                                  | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[5U] 
                                                     ^ 
                                                     vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U])) 
                                                 | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[6U] 
                                                    ^ 
                                                    vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U])) 
                                                | (vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[7U] 
                                                   ^ 
                                                   vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]))) 
                                        & (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: axi_stream_output.sv:97: Assertion failed in %Naccelerator_tb.dut.axi_out_inst: AXI Output Protocol Violation: TDATA changed while stalled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("rtl/axi/axi_stream_output.sv", 97, "");
        }
    }
    vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
    vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg;
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U];
    __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
        = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tlast;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg;
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_1_0 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata;
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[0U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[1U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[2U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[3U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[4U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[5U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[6U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_3_0[7U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[0U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[1U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[2U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[3U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[4U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[5U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[6U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0[7U] 
        = vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_0_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tready))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT___Vpast_2_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__m_axis_tready))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tready))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__s_axis_tready))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__m_axis_tready))));
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__rst)) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__accelerator_tb__DOT__m_axis_tready))));
    if (vlSelfRef.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last = 0U;
        vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr = 0U;
        vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr = 0U;
    } else {
        if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__load_done) 
             & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__load_ready))) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) {
                ++(vlSymsp->__Vcoverage[1253]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last;
            } else {
                ++(vlSymsp->__Vcoverage[1252]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__load_is_last;
            }
            vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr 
                = (1U & (~ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr)));
            ++(vlSymsp->__Vcoverage[1254]);
        } else {
            ++(vlSymsp->__Vcoverage[1255]);
        }
        if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_done) 
             & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready))) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
                ++(vlSymsp->__Vcoverage[1257]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1256]);
                vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid = 0U;
            }
            vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr 
                = (1U & (~ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr)));
            ++(vlSymsp->__Vcoverage[1258]);
        } else {
            ++(vlSymsp->__Vcoverage[1259]);
        }
        ++(vlSymsp->__Vcoverage[1261]);
    }
    ++(vlSymsp->__Vcoverage[1262]);
    if (vlSelfRef.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase_q = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase_q 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase;
    }
    ++(vlSymsp->__Vcoverage[1089]);
    if (vlSelfRef.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1567]);
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = 0U;
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg = 0U;
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
            = Vsystolic_pe__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__m_axis_tready) 
                   | (~ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg))))) {
            if (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg) {
                ++(vlSymsp->__Vcoverage[1563]);
                __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
                __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg = 0U;
            } else if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid) 
                        & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_ready))) {
                ++(vlSymsp->__Vcoverage[1561]);
                __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = 1U;
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U];
                vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg 
                    = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last;
            } else {
                ++(vlSymsp->__Vcoverage[1562]);
                __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg = 0U;
            }
            ++(vlSymsp->__Vcoverage[1566]);
        } else if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_valid) 
                    & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_ready))) {
            ++(vlSymsp->__Vcoverage[1564]);
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg = 1U;
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[0U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[1U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[2U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[3U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[4U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[5U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[6U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_acc_out[7U];
            __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg 
                = vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_last;
        } else {
            ++(vlSymsp->__Vcoverage[1565]);
        }
        ++(vlSymsp->__Vcoverage[1568]);
    }
    ++(vlSymsp->__Vcoverage[1569]);
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U];
    vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
        = __Vdly__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U];
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_is_last))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_is_last))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_valid))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_valid 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_valid))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_valid 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase_q) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase_q))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase_q 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase_q;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tvalid))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tvalid 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tlast))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tlast 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_last_reg))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_last_reg 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
    }
    if ((1U ^ ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_ready)))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__internal_ready 
            = (1U & (~ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_valid_reg))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_valid_reg 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg;
    }
    vlSelfRef.accelerator_tb__DOT__dut__DOT__internal_ready 
        = (1U & (~ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg)));
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[0U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[0U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[1U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[1U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[2U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[2U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[3U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[3U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[4U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[4U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[5U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[5U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[6U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[6U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U] 
          ^ vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT____Vtogcov__m_axis_tdata[7U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg[7U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[0U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[0U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[1U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[1U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[2U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[2U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[3U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[3U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[4U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[4U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[5U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[5U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[6U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[6U]));
    }
    if ((1U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffffeU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (1U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((2U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffffdU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (2U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((4U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffffbU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (4U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((8U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
               ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffff7U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (8U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x10U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffffefU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x10U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x20U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffffdfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x20U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x40U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffffbfU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x40U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x80U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffff7fU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x80U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x100U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffeffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x100U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x200U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffdffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x200U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x400U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffffbffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x400U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x800U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                   ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffff7ffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x800U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x1000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffefffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x1000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x2000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffdfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x2000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x4000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffffbfffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x4000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x8000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                    ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffff7fffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x8000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x10000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffeffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x10000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x20000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffdffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x20000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x40000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfffbffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x40000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x80000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                     ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfff7ffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x80000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x100000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffefffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x100000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x200000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffdfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x200000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x400000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xffbfffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x400000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x800000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                      ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xff7fffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x800000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x1000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfeffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x1000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x2000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfdffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x2000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x4000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xfbffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x4000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x8000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                       ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xf7ffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x8000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x10000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xefffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x10000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x20000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xdfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x20000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if ((0x40000000U & (vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
                        ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0xbfffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x40000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
    if (((vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U] 
          ^ vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U] 
            = ((0x7fffffffU & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg[7U]) 
               | (0x80000000U & vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg[7U]));
    }
}

VL_INLINE_OPT void Vsystolic_pe___024root___nba_sequent__TOP__1(Vsystolic_pe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_pe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_pe___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr 
        = vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
    vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr 
        = vlSelfRef.__Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
    if ((1U & ((IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelfRef.accelerator_tb__DOT__dut__DOT__rd_phase_q) {
        vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
            = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_a_inst.rd_data;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
            = vlSymsp->TOP__accelerator_tb__DOT__dut__DOT__buf_b_inst.rd_data;
    } else {
        vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in = 0ULL;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in = 0ULL;
    }
    if (vlSelfRef.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt;
    }
    ++(vlSymsp->__Vcoverage[1231]);
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_bank_sel))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_bank_sel 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
    }
    vlSelfRef.accelerator_tb__DOT__dut__DOT__load_ready 
        = (1U & (~ ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr)
                     ? (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid)
                     : (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid))));
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_bank_sel))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_bank_sel 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
    }
    if (vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr) {
        vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last;
    } else {
        vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last;
    }
    if (vlSelfRef.accelerator_tb__DOT__rst) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt = 0U;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1279]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt;
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile;
    }
    ++(vlSymsp->__Vcoverage[1280]);
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in)))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in)))));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_a_in 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffffeULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | (IData)((IData)((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in)))));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 1U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffffdULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 2U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffffbULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 3U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffff7ULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 4U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffffefULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 5U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffffdfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 6U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffffbfULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 7U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffff7fULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 8U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffeffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 9U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffdffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xaU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffffbffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xbU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffff7ffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xcU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffefffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xdU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffdfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xeU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffffbfffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0xfU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffff7fffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x10U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffeffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x11U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffdffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x12U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffffbffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x13U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffff7ffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x14U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffefffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x15U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffdfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x16U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffffbfffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x17U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffff7fffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x18U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffeffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x19U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffdffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffffbffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffff7ffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffefffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffdfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffffbfffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x1fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffff7fffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x20U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffeffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x21U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffdffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x22U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffffbffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x23U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffff7ffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x24U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffefffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x25U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffdfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x26U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffffbfffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x27U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffff7fffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x28U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffeffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x29U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffdffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffffbffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffff7ffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffefffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffdfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffffbfffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x2fU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffff7fffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x30U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffeffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x31U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffdffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x32U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfffbffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x33U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfff7ffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x34U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffefffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x35U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffdfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x36U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xffbfffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x37U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xff7fffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x38U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfeffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x39U)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfdffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3aU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xfbffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3bU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xf7ffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3cU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xefffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3dU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xdfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                        >> 0x3eU)) ^ (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0xbfffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                  ^ vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in 
            = ((0x7fffffffffffffffULL & vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in) 
               | ((QData)((IData)((1U & (IData)((vlSelfRef.accelerator_tb__DOT__dut__DOT__flat_b_in 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__load_ready) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_ready))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__load_ready 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__load_ready;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_ready))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_ready 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_ready;
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_is_last))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__compute_is_last 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__compute_is_last;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state)));
    }
    if ((8U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__beat_cnt)))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__beat_cnt 
            = ((7U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__beat_cnt)) 
               | (8U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a 
            = ((6U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a 
            = ((5U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a 
            = ((3U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a)) 
               | (4U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt)));
    }
    if (((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile) 
         ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__is_first_tile))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__is_first_tile 
            = vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile;
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state 
            = ((2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state 
            = ((1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr 
            = ((6U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)) 
               | (1U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((2U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr 
            = ((5U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)) 
               | (2U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((4U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr 
            = ((3U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr)) 
               | (4U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((8U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
               ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt 
            = ((0x37U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)) 
               | (8U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((0x10U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt 
            = ((0x2fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)) 
               | (0x10U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
    if ((0x20U & ((IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt) 
                  ^ (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt 
            = ((0x1fU & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt)) 
               | (0x20U & (IData)(vlSelfRef.accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt)));
    }
}
