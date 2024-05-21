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
    VlWide<4>/*127:0*/ __Vtemp_hfa72e0ee__0;
    VlWide<13>/*415:0*/ __Vtemp_h189c200b__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
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
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),2);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
        bufp->chgSData(oldp+66,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+67,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+68,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+73,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+75,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__Ext_type),2);
        bufp->chgBit(oldp+78,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__alu_ctrl),4);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__PC_src),2);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__RegWrite),2);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+83,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+84,((IData)((0x2001013U == 
                                       (0xfe00707fU 
                                        & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+85,((IData)((0x2005013U == 
                                       (0xfe00707fU 
                                        & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+86,((IData)((0x82005013U 
                                       == (0xfe00707fU 
                                           & vlSelf->top__DOT__instruction)))));
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
        __Vtemp_hfa72e0ee__0[0U] = (IData)((0x300000000ULL 
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
        __Vtemp_hfa72e0ee__0[1U] = (((- (IData)((vlSelf->top__DOT__instruction 
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
        __Vtemp_hfa72e0ee__0[2U] = (8U | ((0xffff0000U 
                                           & (vlSelf->top__DOT__instruction 
                                              << 4U)) 
                                          | (3U & (
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   >> 0xaU))));
        __Vtemp_hfa72e0ee__0[3U] = (0x10U | (0xffffU 
                                             & (vlSelf->top__DOT__instruction 
                                                >> 0x1cU)));
        bufp->chgWData(oldp+93,(__Vtemp_hfa72e0ee__0),102);
        bufp->chgQData(oldp+97,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+99,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+101,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+108,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__out_data1),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__memory_out_data),32);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+126,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        __Vtemp_h189c200b__0[0U] = (IData)((0xa00000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0))));
        __Vtemp_h189c200b__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0 
                                     << 4U) | (IData)(
                                                      ((0xa00000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0))) 
                                                       >> 0x20U)));
        __Vtemp_h189c200b__0[2U] = (0x90U | ((((0x1fU 
                                                >= 
                                                (0x3fU 
                                                 & vlSelf->top__DOT__ext_imm))
                                                ? (vlSelf->top__DOT__out_data1 
                                                   << 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__ext_imm))
                                                : 0U) 
                                              << 8U) 
                                             | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0 
                                                >> 0x1cU)));
        __Vtemp_h189c200b__0[3U] = (0x800U | (((vlSelf->top__DOT__ext_imm 
                                                & vlSelf->top__DOT__out_data1) 
                                               << 0xcU) 
                                              | (((0x1fU 
                                                   >= 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__ext_imm))
                                                   ? 
                                                  (vlSelf->top__DOT__out_data1 
                                                   << 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__ext_imm))
                                                   : 0U) 
                                                 >> 0x18U)));
        __Vtemp_h189c200b__0[4U] = (0x7000U | (((vlSelf->top__DOT__ext_imm 
                                                 | vlSelf->top__DOT__out_data1) 
                                                << 0x10U) 
                                               | ((vlSelf->top__DOT__ext_imm 
                                                   & vlSelf->top__DOT__out_data1) 
                                                  >> 0x14U)));
        __Vtemp_h189c200b__0[5U] = (0x60000U | (((vlSelf->top__DOT__ext_imm 
                                                  ^ vlSelf->top__DOT__out_data1) 
                                                 << 0x14U) 
                                                | ((vlSelf->top__DOT__ext_imm 
                                                    | vlSelf->top__DOT__out_data1) 
                                                   >> 0x10U)));
        __Vtemp_h189c200b__0[6U] = (0x500000U | (((IData)(vlSelf->__VdfgTmp_he6c18802__0) 
                                                  << 0x18U) 
                                                 | ((vlSelf->top__DOT__ext_imm 
                                                     ^ vlSelf->top__DOT__out_data1) 
                                                    >> 0xcU)));
        __Vtemp_h189c200b__0[7U] = (0x4000000U | (0xe0000000U 
                                                  & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                     << 0x1cU)));
        __Vtemp_h189c200b__0[8U] = (0x30000000U | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                   >> 4U));
        __Vtemp_h189c200b__0[9U] = vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0;
        __Vtemp_h189c200b__0[0xaU] = (2U | (vlSelf->top__DOT__ext_imm 
                                            << 4U));
        __Vtemp_h189c200b__0[0xbU] = (0x10U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                << 8U) 
                                               | (vlSelf->top__DOT__ext_imm 
                                                  >> 0x1cU)));
        __Vtemp_h189c200b__0[0xcU] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                      >> 0x18U);
        bufp->chgWData(oldp+137,(__Vtemp_h189c200b__0),396);
        bufp->chgQData(oldp+150,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+152,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+154,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+156,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+158,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+160,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+170,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
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
        bufp->chgWData(oldp+186,(__Vtemp_h392ba67f__0),210);
        bufp->chgQData(oldp+193,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
        bufp->chgQData(oldp+195,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
        bufp->chgQData(oldp+197,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
        bufp->chgQData(oldp+199,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
        bufp->chgQData(oldp+201,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+210,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+250,(vlSelf->clk));
    bufp->chgBit(oldp+251,(vlSelf->rst));
    bufp->chgBit(oldp+252,(vlSelf->wen));
    bufp->chgIData(oldp+253,(vlSelf->pc),32);
    bufp->chgIData(oldp+254,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+255,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+256,(vlSelf->alu_result),32);
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
    bufp->chgWData(oldp+257,(__Vtemp_h1b997cca__0),136);
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
    bufp->chgWData(oldp+262,(__Vtemp_hbdeed6a0__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->chgWData(oldp+266,(__Vtemp_h2ea4f700__0),66);
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
