// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VIDU__Syms.h"
#include "VIDU___024root.h"

void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf);

VIDU___024root::VIDU___024root(VIDU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VIDU___024root___ctor_var_reset(this);
}

void VIDU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VIDU___024root::~VIDU___024root() {
}
