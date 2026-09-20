// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccelerator_tb.h for the primary calling header

#ifndef VERILATED_VACCELERATOR_TB_PING_PONG_BUFFER__A3_H_
#define VERILATED_VACCELERATOR_TB_PING_PONG_BUFFER__A3_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vaccelerator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccelerator_tb_ping_pong_buffer__A3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(compute_bank_sel,0,0);
    VL_IN8(load_bank_sel,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(wr_addr,2,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(rd_addr,2,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__rst;
    CData/*0:0*/ __Vtogcov__compute_bank_sel;
    CData/*0:0*/ __Vtogcov__load_bank_sel;
    CData/*0:0*/ __Vtogcov__wr_en;
    CData/*2:0*/ __Vtogcov__wr_addr;
    CData/*0:0*/ __Vtogcov__rd_en;
    CData/*2:0*/ __Vtogcov__rd_addr;
    VL_IN64(wr_data,63,0);
    VL_OUT64(rd_data,63,0);
    QData/*63:0*/ __Vtogcov__wr_data;
    QData/*63:0*/ __Vtogcov__rd_data;
    VlUnpacked<QData/*63:0*/, 8> __PVT__bank0;
    VlUnpacked<QData/*63:0*/, 8> __PVT__bank1;

    // INTERNAL VARIABLES
    Vaccelerator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaccelerator_tb_ping_pong_buffer__A3(Vaccelerator_tb__Syms* symsp, const char* v__name);
    ~Vaccelerator_tb_ping_pong_buffer__A3();
    VL_UNCOPYABLE(Vaccelerator_tb_ping_pong_buffer__A3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
