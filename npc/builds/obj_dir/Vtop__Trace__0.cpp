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
    VlWide<5>/*159:0*/ __Vtemp_hd68abb91__0;
    VlWide<4>/*127:0*/ __Vtemp_h9046d7e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h0aba8026__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd265232__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__Ext_type),2);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__alu_ctrl),2);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__PC_src));
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__RegWrite),2);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+61,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+63,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+65,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__out_data1),32);
        bufp->chgQData(oldp+74,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+76,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+78,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+85,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+87,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        __Vtemp_hd68abb91__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(
                                                              (0xfffffffeU 
                                                               & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)))));
        __Vtemp_hd68abb91__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                     << 2U) | (IData)(
                                                      ((0x300000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xfffffffeU 
                                                                           & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)))) 
                                                       >> 0x20U)));
        __Vtemp_hd68abb91__0[2U] = (8U | ((vlSelf->top__DOT__ext_imm 
                                           << 4U) | 
                                          (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                           >> 0x1eU)));
        __Vtemp_hd68abb91__0[3U] = (0x10U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                              << 6U) 
                                             | (vlSelf->top__DOT__ext_imm 
                                                >> 0x1cU)));
        __Vtemp_hd68abb91__0[4U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                    >> 0x1aU);
        bufp->chgWData(oldp+93,(__Vtemp_hd68abb91__0),136);
        bufp->chgQData(oldp+98,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+100,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+102,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+152,(vlSelf->clk));
    bufp->chgBit(oldp+153,(vlSelf->rst));
    bufp->chgBit(oldp+154,(vlSelf->wen));
    bufp->chgIData(oldp+155,(vlSelf->instruction),32);
    bufp->chgIData(oldp+156,(vlSelf->pc),32);
    bufp->chgIData(oldp+157,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+158,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+159,(vlSelf->alu_result),32);
    bufp->chgCData(oldp+160,((0x1fU & (vlSelf->instruction 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+161,((0x1fU & (vlSelf->instruction 
                                       >> 7U))),5);
    bufp->chgCData(oldp+162,((0x7fU & vlSelf->instruction)),7);
    bufp->chgBit(oldp+163,((0x17U == (0x7fU & vlSelf->instruction))));
    __Vtemp_h9046d7e5__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ext_imm))));
    __Vtemp_h9046d7e5__0[1U] = ((vlSelf->alu_result 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ext_imm))) 
                                                   >> 0x20U)));
    __Vtemp_h9046d7e5__0[2U] = (8U | ((((IData)(4U) 
                                        + vlSelf->pc) 
                                       << 4U) | (vlSelf->alu_result 
                                                 >> 0x1eU)));
    __Vtemp_h9046d7e5__0[3U] = (0x10U | (((IData)(4U) 
                                          + vlSelf->pc) 
                                         >> 0x1cU));
    bufp->chgWData(oldp+164,(__Vtemp_h9046d7e5__0),102);
    __Vtemp_h0aba8026__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->alu_result 
                                                           + vlSelf->pc)))));
    __Vtemp_h0aba8026__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->alu_result 
                                                                       + vlSelf->pc)))) 
                                                   >> 0x20U)));
    __Vtemp_h0aba8026__0[2U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x1fU);
    bufp->chgWData(oldp+168,(__Vtemp_h0aba8026__0),66);
    __Vtemp_hfd265232__0[0U] = (IData)((0x300000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (vlSelf->instruction 
                                                                >> 0xcU)))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->instruction 
                                                                   >> 0x14U)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (vlSelf->instruction 
                                                                      >> 0x15U)))) 
                                                  << 0x23U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->instruction 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | (vlSelf->instruction 
                                                                       >> 0x14U)))))))));
    __Vtemp_hfd265232__0[1U] = (((- (IData)((vlSelf->instruction 
                                             >> 0x1fU))) 
                                 << 0x16U) | (IData)(
                                                     ((0x300000000ULL 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (vlSelf->instruction 
                                                                               >> 0xcU)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->instruction 
                                                                                >> 0x14U)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x15U)))) 
                                                                 << 0x23U) 
                                                                | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->instruction 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | (vlSelf->instruction 
                                                                                >> 0x14U)))))))) 
                                                      >> 0x20U)));
    __Vtemp_hfd265232__0[2U] = (8U | ((0xffff0000U 
                                       & (vlSelf->instruction 
                                          << 4U)) | 
                                      (3U & ((- (IData)(
                                                        (vlSelf->instruction 
                                                         >> 0x1fU))) 
                                             >> 0xaU))));
    __Vtemp_hfd265232__0[3U] = (0x10U | (0xffffU & 
                                         (vlSelf->instruction 
                                          >> 0x1cU)));
    bufp->chgWData(oldp+171,(__Vtemp_hfd265232__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->chgWData(oldp+175,(__Vtemp_h2ea4f700__0),66);
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