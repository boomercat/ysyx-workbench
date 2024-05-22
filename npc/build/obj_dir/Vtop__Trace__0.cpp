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
    VlWide<5>/*159:0*/ __Vtemp_h5515d294__0;
    VlWide<14>/*447:0*/ __Vtemp_h8a74ccf4__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
    VlWide<3>/*95:0*/ __Vtemp_h020a3be6__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b997cca__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdeed6a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),4);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),2);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),2);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+80,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__Ext_type),2);
        bufp->chgBit(oldp+85,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__alu_ctrl),4);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__PC_src),2);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__RegWrite),2);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__rs2_valid));
        bufp->chgBit(oldp+91,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+92,((IData)((0x2001013U == 
                                       (0xfe00707fU 
                                        & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+93,((IData)((0x2005013U == 
                                       (0xfe00707fU 
                                        & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+94,((IData)((0x82005013U 
                                       == (0xfe00707fU 
                                           & vlSelf->top__DOT__instruction)))));
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
        __Vtemp_h5515d294__0[0U] = (IData)((0x300000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->top__DOT__instruction 
                                                                    >> 0xcU)))) 
                                                << 0x2eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__instruction 
                                                                       >> 0x14U)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (vlSelf->top__DOT__instruction 
                                                                          >> 0x15U)))) 
                                                      << 0x23U) 
                                                     | (QData)((IData)(
                                                                       (((- (IData)(
                                                                                (vlSelf->top__DOT__instruction 
                                                                                >> 0x1fU))) 
                                                                         << 0xcU) 
                                                                        | (vlSelf->top__DOT__instruction 
                                                                           >> 0x14U)))))))));
        __Vtemp_h5515d294__0[1U] = (((- (IData)((vlSelf->top__DOT__instruction 
                                                 >> 0x1fU))) 
                                     << 0x16U) | (IData)(
                                                         ((0x300000000ULL 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0xcU)))) 
                                                               << 0x2eU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0x14U)))) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0x15U)))) 
                                                                     << 0x23U) 
                                                                    | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->top__DOT__instruction 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top__DOT__instruction 
                                                                                >> 0x14U)))))))) 
                                                          >> 0x20U)));
        __Vtemp_h5515d294__0[2U] = (8U | ((0xffff0000U 
                                           & (vlSelf->top__DOT__instruction 
                                              << 4U)) 
                                          | (3U & (
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   >> 0xaU))));
        __Vtemp_h5515d294__0[3U] = (0x10U | (((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x12U) 
                                             | ((0x3f800U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0xeU)) 
                                                | ((0x7c0U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       >> 1U)) 
                                                   | (0xffffU 
                                                      & (vlSelf->top__DOT__instruction 
                                                         >> 0x1cU))))));
        __Vtemp_h5515d294__0[4U] = (0x3fU & ((- (IData)(
                                                        (vlSelf->top__DOT__instruction 
                                                         >> 0x1fU))) 
                                             >> 0xeU));
        bufp->chgWData(oldp+101,(__Vtemp_h5515d294__0),136);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+120,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
        bufp->chgBit(oldp+121,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+122,(((0U == (7U & (vlSelf->top__DOT__instruction 
                                                >> 0xcU)))
                                   ? 1U : ((1U == (7U 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0xcU)))
                                            ? 3U : 
                                           ((2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__instruction 
                                               >> 0xcU)))
                                             ? 0xfU
                                             : 0U)))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__src1_data),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__src2_data),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__memory_out_data),32);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+152,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        __Vtemp_h8a74ccf4__0[0U] = (IData)((0xc00000000ULL 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0))));
        __Vtemp_h8a74ccf4__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                     << 4U) | (IData)(
                                                      ((0xc00000000ULL 
                                                        | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0))) 
                                                       >> 0x20U)));
        __Vtemp_h8a74ccf4__0[2U] = (0xa0U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                              << 8U) 
                                             | (vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                                >> 0x1cU)));
        __Vtemp_h8a74ccf4__0[3U] = (0x900U | ((((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                                 ? 
                                                (vlSelf->top__DOT__src1_data 
                                                 << 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                                 : 0U) 
                                               << 0xcU) 
                                              | (vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                                 >> 0x18U)));
        __Vtemp_h8a74ccf4__0[4U] = (0x8000U | (((vlSelf->top__DOT__src1_data 
                                                 & vlSelf->top__DOT__src2_data) 
                                                << 0x10U) 
                                               | (((0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__src2_data))
                                                    ? 
                                                   (vlSelf->top__DOT__src1_data 
                                                    << 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__src2_data))
                                                    : 0U) 
                                                  >> 0x14U)));
        __Vtemp_h8a74ccf4__0[5U] = (0x70000U | (((vlSelf->top__DOT__src1_data 
                                                  | vlSelf->top__DOT__src2_data) 
                                                 << 0x14U) 
                                                | ((vlSelf->top__DOT__src1_data 
                                                    & vlSelf->top__DOT__src2_data) 
                                                   >> 0x10U)));
        __Vtemp_h8a74ccf4__0[6U] = (0x600000U | (((vlSelf->top__DOT__src1_data 
                                                   ^ vlSelf->top__DOT__src2_data) 
                                                  << 0x18U) 
                                                 | ((vlSelf->top__DOT__src1_data 
                                                     | vlSelf->top__DOT__src2_data) 
                                                    >> 0xcU)));
        __Vtemp_h8a74ccf4__0[7U] = (0x5000000U | (((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                   << 0x1cU) 
                                                  | ((vlSelf->top__DOT__src1_data 
                                                      ^ vlSelf->top__DOT__src2_data) 
                                                     >> 8U)));
        __Vtemp_h8a74ccf4__0[8U] = 0x40000000U;
        __Vtemp_h8a74ccf4__0[9U] = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0);
        __Vtemp_h8a74ccf4__0[0xaU] = (3U | ((vlSelf->top__DOT__src1_data 
                                             - vlSelf->top__DOT__src2_data) 
                                            << 4U));
        __Vtemp_h8a74ccf4__0[0xbU] = (0x20U | ((vlSelf->top__DOT__src2_data 
                                                << 8U) 
                                               | ((vlSelf->top__DOT__src1_data 
                                                   - vlSelf->top__DOT__src2_data) 
                                                  >> 0x1cU)));
        __Vtemp_h8a74ccf4__0[0xcU] = (0x100U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                 << 0xcU) 
                                                | (vlSelf->top__DOT__src2_data 
                                                   >> 0x18U)));
        __Vtemp_h8a74ccf4__0[0xdU] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                      >> 0x14U);
        bufp->chgWData(oldp+153,(__Vtemp_h8a74ccf4__0),432);
        bufp->chgQData(oldp+167,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+169,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+173,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+175,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+177,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+179,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+181,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+183,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+185,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+187,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+189,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+204,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
        __Vtemp_h392ba67f__0[0U] = (IData)((0x10300000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->top__DOT__memory_1__DOT__rdata))) 
                                                << 0x2aU) 
                                               | (QData)((IData)(vlSelf->top__DOT__memory_1__DOT__rdata)))));
        __Vtemp_h392ba67f__0[1U] = (IData)(((0x10300000000ULL 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->top__DOT__memory_1__DOT__rdata))) 
                                                 << 0x2aU) 
                                                | (QData)((IData)(vlSelf->top__DOT__memory_1__DOT__rdata)))) 
                                            >> 0x20U));
        __Vtemp_h392ba67f__0[2U] = (0xa0c00U | (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                << 0x14U));
        __Vtemp_h392ba67f__0[3U] = (0x8300000U | ((vlSelf->top__DOT__memory_1__DOT__rdata 
                                                   << 0x1eU) 
                                                  | (0xfffffU 
                                                     & ((0xffff0U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                                           >> 0xfU)))) 
                                                            << 4U)) 
                                                        | (0xfU 
                                                           & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                              >> 0xcU))))));
        __Vtemp_h392ba67f__0[4U] = (0xc0000000U | (0x3fU 
                                                   & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                      >> 2U)));
        __Vtemp_h392ba67f__0[5U] = (0x80U | (0xffffff00U 
                                             & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                                >> 7U)))) 
                                                 << 0x10U) 
                                                | (0xff00U 
                                                   & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                      << 8U)))));
        __Vtemp_h392ba67f__0[6U] = (0x300U | (0xffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                                >> 7U)))) 
                                                 >> 0x10U)));
        bufp->chgWData(oldp+206,(__Vtemp_h392ba67f__0),210);
        bufp->chgQData(oldp+213,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
        bufp->chgQData(oldp+215,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
        bufp->chgQData(oldp+217,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
        bufp->chgQData(oldp+219,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
        bufp->chgQData(oldp+221,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+232,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
        __Vtemp_h020a3be6__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
        __Vtemp_h020a3be6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                       >> 0x20U)));
        __Vtemp_h020a3be6__0[2U] = (vlSelf->top__DOT__ext_imm 
                                    >> 0x1fU);
        bufp->chgWData(oldp+238,(__Vtemp_h020a3be6__0),66);
        bufp->chgQData(oldp+241,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+243,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+281,(vlSelf->clk));
    bufp->chgBit(oldp+282,(vlSelf->rst));
    bufp->chgBit(oldp+283,(vlSelf->wen));
    bufp->chgIData(oldp+284,(vlSelf->pc),32);
    bufp->chgIData(oldp+285,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+286,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+287,(vlSelf->alu_result),32);
    __Vtemp_h1b997cca__0[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__memory_out_data)));
    __Vtemp_h1b997cca__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 2U) | (IData)(((QData)((IData)(vlSelf->top__DOT__memory_out_data)) 
                                                   >> 0x20U)));
    __Vtemp_h1b997cca__0[2U] = (0xcU | ((vlSelf->alu_result 
                                         << 4U) | (vlSelf->top__DOT__ext_imm 
                                                   >> 0x1eU)));
    __Vtemp_h1b997cca__0[3U] = (0x20U | ((((IData)(4U) 
                                           + vlSelf->pc) 
                                          << 6U) | 
                                         (vlSelf->alu_result 
                                          >> 0x1cU)));
    __Vtemp_h1b997cca__0[4U] = (0x40U | (((IData)(4U) 
                                          + vlSelf->pc) 
                                         >> 0x1aU));
    bufp->chgWData(oldp+288,(__Vtemp_h1b997cca__0),136);
    __Vtemp_hbdeed6a0__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(vlSelf->alu_result))));
    __Vtemp_hbdeed6a0__0[1U] = (((vlSelf->alu_result 
                                  + vlSelf->pc) << 2U) 
                                | (IData)(((0x200000000ULL 
                                            | (QData)((IData)(vlSelf->alu_result))) 
                                           >> 0x20U)));
    __Vtemp_hbdeed6a0__0[2U] = (4U | ((((IData)(4U) 
                                        + vlSelf->pc) 
                                       << 4U) | ((vlSelf->alu_result 
                                                  + vlSelf->pc) 
                                                 >> 0x1eU)));
    __Vtemp_hbdeed6a0__0[3U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x1cU);
    bufp->chgWData(oldp+293,(__Vtemp_hbdeed6a0__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->chgWData(oldp+297,(__Vtemp_h2ea4f700__0),66);
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
