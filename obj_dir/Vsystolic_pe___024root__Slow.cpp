// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_pe.h for the primary calling header

#include "Vsystolic_pe__pch.h"
#include "Vsystolic_pe__Syms.h"
#include "Vsystolic_pe___024root.h"

void Vsystolic_pe___024root___ctor_var_reset(Vsystolic_pe___024root* vlSelf);

Vsystolic_pe___024root::Vsystolic_pe___024root(Vsystolic_pe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsystolic_pe___024root___ctor_var_reset(this);
}

void Vsystolic_pe___024root___configure_coverage(Vsystolic_pe___024root* vlSelf, bool first);

void Vsystolic_pe___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vsystolic_pe___024root___configure_coverage(this, first);
}

Vsystolic_pe___024root::~Vsystolic_pe___024root() {
}

// Coverage
void Vsystolic_pe___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
