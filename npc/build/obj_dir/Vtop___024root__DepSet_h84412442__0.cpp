// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" unsigned int pmem_read(unsigned int raddr, int len);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP\n"); );
    // Body
    unsigned int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    unsigned int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, len__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void set_npctrap(int i);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(IData/*31:0*/ i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP\n"); );
    // Body
    int i__Vcvt;
    for (size_t i__Vidx = 0; i__Vidx < 1; ++i__Vidx) i__Vcvt = i;
    set_npctrap(i__Vcvt);
}

extern "C" void set_npcinv(int i);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(IData/*31:0*/ i) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP\n"); );
    // Body
    int i__Vcvt;
    for (size_t i__Vidx = 0; i__Vidx < 1; ++i__Vidx) i__Vcvt = i;
    set_npcinv(i__Vcvt);
}

extern "C" void pmem_write(int addr, int data, int len);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__memory_1__DOT__pmem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    pmem_write(addr__Vcvt, data__Vcvt, len__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      ^ (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = ((((IData)(vlSelf->clk) 
                                        != (IData)(vlSelf->__Vtrigrprev__TOP__clk)) 
                                       | ((IData)(vlSelf->top__DOT__memory_1__DOT__read_valid) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__read_valid))) 
                                      | ((IData)(vlSelf->top__DOT__memory_1__DOT__write_valid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__write_valid)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__read_valid 
        = vlSelf->top__DOT__memory_1__DOT__read_valid;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__write_valid 
        = vlSelf->top__DOT__memory_1__DOT__write_valid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
