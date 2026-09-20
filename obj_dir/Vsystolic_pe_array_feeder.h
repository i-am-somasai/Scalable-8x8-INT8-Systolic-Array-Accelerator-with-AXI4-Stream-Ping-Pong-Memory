// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_pe.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_PE_ARRAY_FEEDER_H_
#define VERILATED_VSYSTOLIC_PE_ARRAY_FEEDER_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vsystolic_pe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_pe_array_feeder final : public VerilatedModule {
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
    Vsystolic_pe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_pe_array_feeder(Vsystolic_pe__Syms* symsp, const char* v__name);
    ~Vsystolic_pe_array_feeder();
    VL_UNCOPYABLE(Vsystolic_pe_array_feeder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
