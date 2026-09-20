// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccelerator_tb.h for the primary calling header

#ifndef VERILATED_VACCELERATOR_TB___024ROOT_H_
#define VERILATED_VACCELERATOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vaccelerator_tb_array_feeder;
class Vaccelerator_tb_ping_pong_buffer__A3;
class Vaccelerator_tb_systolic_pe;


class Vaccelerator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccelerator_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaccelerator_tb_ping_pong_buffer__A3* __PVT__accelerator_tb__DOT__dut__DOT__buf_a_inst;
    Vaccelerator_tb_ping_pong_buffer__A3* __PVT__accelerator_tb__DOT__dut__DOT__buf_b_inst;
    Vaccelerator_tb_array_feeder* __PVT__accelerator_tb__DOT__dut__DOT__feeder_a;
    Vaccelerator_tb_array_feeder* __PVT__accelerator_tb__DOT__dut__DOT__feeder_b;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst;
    Vaccelerator_tb_systolic_pe* __PVT__accelerator_tb__DOT__dut__DOT__array_inst__DOT__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ accelerator_tb__DOT__clk;
        CData/*0:0*/ accelerator_tb__DOT__rst;
        CData/*0:0*/ accelerator_tb__DOT__s_axis_tvalid;
        CData/*0:0*/ accelerator_tb__DOT__s_axis_tready;
        CData/*0:0*/ accelerator_tb__DOT__s_axis_tlast;
        CData/*0:0*/ accelerator_tb__DOT__m_axis_tready;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__clk;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__rst;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__s_axis_tvalid;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__s_axis_tready;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__s_axis_tlast;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__m_axis_tvalid;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__m_axis_tready;
        CData/*0:0*/ accelerator_tb__DOT____Vtogcov__m_axis_tlast;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__load_done;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__load_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__load_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__compute_done;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__compute_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__compute_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__wr_en_a;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__wr_en_b;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__rd_en;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__rd_phase;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__rd_phase_q;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__array_en;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__array_clear;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__array_drain;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__internal_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__internal_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__internal_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__load_done;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__load_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__load_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__compute_done;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__compute_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__compute_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__compute_bank_sel;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__load_bank_sel;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_a;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__wr_en_b;
        CData/*2:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__wr_addr_a;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_en;
        CData/*2:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_addr;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_phase_q;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__array_en;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__array_clear;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__array_drain;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__internal_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__internal_ready;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__internal_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT___Vpast_0_0;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT___Vpast_2_0;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__state;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_state;
        CData/*3:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__beat_cnt;
        CData/*3:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT__next_beat_cnt;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__state;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_state;
        CData/*3:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__beat_cnt;
        CData/*3:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT____Vtogcov__next_beat_cnt;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0;
    };
    struct {
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank0_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__bank1_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_valid;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank0_is_last;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT____Vtogcov__bank1_is_last;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_state;
        CData/*5:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__t_cnt;
        CData/*5:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_t_cnt;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__is_first_tile;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__next_is_first_tile;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__state;
        CData/*1:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_state;
        CData/*5:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__t_cnt;
        CData/*5:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_t_cnt;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__is_first_tile;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT____Vtogcov__next_is_first_tile;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_last_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_valid_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_last_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_valid_reg;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0;
        CData/*0:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0;
        CData/*0:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__load_ptr;
        CData/*0:0*/ __Vdly__accelerator_tb__DOT__dut__DOT__buf_ctrl_inst__DOT__compute_ptr;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__rst;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__s_axis_tvalid;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__s_axis_tready;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__valid_reg;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__m_axis_tready;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__s_axis_tlast;
        CData/*1:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__acc_ctrl_inst__DOT__state;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__array_clear;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__last_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__accelerator_tb__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ accelerator_tb__DOT__fd_out;
        VlWide<8>/*255:0*/ accelerator_tb__DOT____Vtogcov__m_axis_tdata;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__tile_ptr;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__t;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k_tiles;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ accelerator_tb__DOT__push_thread__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ accelerator_tb__DOT__pull_thread__DOT__unnamedblk6__DOT__t;
        IData/*31:0*/ accelerator_tb__DOT__pull_thread__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i;
    };
    struct {
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT__flat_acc_out;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__flat_acc_out;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT___Vpast_3_0;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__skid_data_reg;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT____Vtogcov__skid_data_reg;
        VlWide<8>/*255:0*/ accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0;
        VlWide<8>/*255:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_3_0;
        VlWide<8>/*255:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT__data_reg;
        VlWide<8>/*255:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_out_inst__DOT___Vpast_1_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ accelerator_tb__DOT__s_axis_tdata;
        QData/*63:0*/ accelerator_tb__DOT____Vtogcov__s_axis_tdata;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT__flat_a_in;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT__flat_b_in;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_a;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__rd_data_b;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__flat_a_in;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__flat_b_in;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_a_flat;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT____Vtogcov__skewed_b_flat;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT___Vpast_1_0;
        QData/*63:0*/ accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0;
        QData/*63:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT___Vpast_1_0;
        QData/*63:0*/ __Vsampled_TOP__accelerator_tb__DOT__s_axis_tdata;
        QData/*63:0*/ __Vsampled_TOP__accelerator_tb__DOT__dut__DOT__axi_in_inst__DOT___Vpast_1_0;
        VlUnpacked<QData/*63:0*/, 512> accelerator_tb__DOT__mem_A;
        VlUnpacked<QData/*63:0*/, 512> accelerator_tb__DOT__mem_B;
        VlUnpacked<IData/*31:0*/, 8> accelerator_tb__DOT__mem_K_tiles;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7584d8bb__0;
    VlTriggerScheduler __VtrigSched_h7584d7fa__0;
    VlForkSync __Vfork_1__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaccelerator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaccelerator_tb___024root(Vaccelerator_tb__Syms* symsp, const char* v__name);
    ~Vaccelerator_tb___024root();
    VL_UNCOPYABLE(Vaccelerator_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
