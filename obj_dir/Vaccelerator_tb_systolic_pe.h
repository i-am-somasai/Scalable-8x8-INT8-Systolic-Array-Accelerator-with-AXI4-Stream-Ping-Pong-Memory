// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccelerator_tb.h for the primary calling header

#ifndef VERILATED_VACCELERATOR_TB_SYSTOLIC_PE_H_
#define VERILATED_VACCELERATOR_TB_SYSTOLIC_PE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vaccelerator_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccelerator_tb_systolic_pe final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(clear,0,0);
    VL_IN8(drain,0,0);
    VL_IN8(a_in,7,0);
    VL_IN8(b_in,7,0);
    VL_OUT8(a_out,7,0);
    VL_OUT8(b_out,7,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__rst;
    CData/*0:0*/ __Vtogcov__en;
    CData/*0:0*/ __Vtogcov__clear;
    CData/*0:0*/ __Vtogcov__drain;
    CData/*7:0*/ __Vtogcov__a_in;
    CData/*7:0*/ __Vtogcov__b_in;
    CData/*7:0*/ __Vtogcov__a_out;
    CData/*7:0*/ __Vtogcov__b_out;
    SData/*15:0*/ __PVT__product;
    SData/*15:0*/ __Vtogcov__product;
    VL_IN(acc_in,31,0);
    VL_OUT(acc_out,31,0);
    IData/*31:0*/ __Vtogcov__acc_in;
    IData/*31:0*/ __Vtogcov__acc_out;
    IData/*31:0*/ __Vtogcov__product_ext;
    IData/*31:0*/ __Vdly__acc_out;

    // INTERNAL VARIABLES
    Vaccelerator_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaccelerator_tb_systolic_pe(Vaccelerator_tb__Syms* symsp, const char* v__name);
    ~Vaccelerator_tb_systolic_pe();
    VL_UNCOPYABLE(Vaccelerator_tb_systolic_pe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
