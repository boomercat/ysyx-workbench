// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h3498ed0f__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__Ext_type));
        bufp->chgQData(oldp+6,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+8,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+15,((vlSelf->top__DOT__ext_imm 
                                 + vlSelf->top__DOT__out_data1)),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__out_data1),32);
        bufp->chgQData(oldp+17,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+19,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+57,(vlSelf->clk));
    bufp->chgBit(oldp+58,(vlSelf->rst));
    bufp->chgBit(oldp+59,(vlSelf->wen));
    bufp->chgIData(oldp+60,(vlSelf->instruction),32);
    bufp->chgIData(oldp+61,(vlSelf->pc),32);
    bufp->chgIData(oldp+62,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+63,(vlSelf->next_pc),32);
    bufp->chgCData(oldp+64,((0x1fU & (vlSelf->instruction 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+65,((0x1fU & (vlSelf->instruction 
                                      >> 7U))),5);
    bufp->chgBit(oldp+66,((0x17U == (0x7fU & vlSelf->instruction))));
    bufp->chgIData(oldp+67,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+68,((0x7fU & vlSelf->instruction)),7);
    __Vtemp_h3498ed0f__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->instruction)))));
    __Vtemp_h3498ed0f__0[1U] = ((0xfffffffeU & (((- (IData)(
                                                            (vlSelf->instruction 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | (0x1ffeU 
                                                   & (vlSelf->instruction 
                                                      >> 0x13U)))) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->instruction)))) 
                                           >> 0x20U)));
    __Vtemp_h3498ed0f__0[2U] = (1U & ((- (IData)((vlSelf->instruction 
                                                  >> 0x1fU))) 
                                      >> 0x13U));
    bufp->chgWData(oldp+69,(__Vtemp_h3498ed0f__0),66);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->chgWData(oldp+72,(__Vtemp_h2ea4f700__0),66);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
