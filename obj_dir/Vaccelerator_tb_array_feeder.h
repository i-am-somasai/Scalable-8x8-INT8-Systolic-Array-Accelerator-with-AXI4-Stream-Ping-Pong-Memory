// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccelerator_tb.h for the primary calling header

#ifndef VERILATED_VACCELERATOR_TB_ARRAY_FEEDER_H_
#define VERILATED_VACCELERATOR_TB_ARRAY_FEEDER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vaccelerator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccelerator_tb_array_feeder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__rst;
    CData/*0:0*/ __Vtogcov__en;
    VL_IN64(mem_data_in,63,0);
    VL_OUT64(skewed_data_out_flat,63,0);
    QData/*63:0*/ __Vtogcov__mem_data_in;
    QData/*63:0*/ __Vtogcov__skewed_data_out_flat;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> __PVT__delay_regs;

    // INTERNAL VARIABLES
    Vaccelerator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaccelerator_tb_array_feeder(Vaccelerator_tb__Syms* symsp, const char* v__name);
    ~Vaccelerator_tb_array_feeder();
    VL_UNCOPYABLE(Vaccelerator_tb_array_feeder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
