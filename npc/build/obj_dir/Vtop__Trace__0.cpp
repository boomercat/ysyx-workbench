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
    VlWide<6>/*191:0*/ __Vtemp_haedb7302__0;
    VlWide<21>/*671:0*/ __Vtemp_h834000df__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
    VlWide<3>/*95:0*/ __Vtemp_h020a3be6__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b997cca__0;
    VlWide<5>/*159:0*/ __Vtemp_hce3a3f54__0;
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
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),5);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[12]),5);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[13]),5);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[14]),5);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[15]),5);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[16]),5);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[17]),5);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),2);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+68,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),9);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),2);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgSData(oldp+88,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+89,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+90,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+91,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+92,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+97,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+98,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+99,((0x1fU & (vlSelf->top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+100,((0x1fU & (vlSelf->top__DOT__instruction 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__Ext_type),3);
        bufp->chgBit(oldp+103,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__alu_ctrl),5);
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__PC_src),2);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__RegWrite),2);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__rs2_valid));
        bufp->chgBit(oldp+109,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgBit(oldp+110,((IData)((0x2001013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+111,((IData)((0x2005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+112,((IData)((0x82005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
        __Vtemp_haedb7302__0[0U] = (IData)((0x400000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->top__DOT__instruction 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((0x1000U 
                                                                   & (vlSelf->top__DOT__instruction 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top__DOT__instruction 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__instruction 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__instruction 
                                                                              >> 7U))))))))));
        __Vtemp_haedb7302__0[1U] = ((0xfffffff8U & 
                                     (((- (IData)((vlSelf->top__DOT__instruction 
                                                   >> 0x1fU))) 
                                       << 0xfU) | (0x7ff8U 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0x11U)))) 
                                    | (IData)(((0x400000000ULL 
                                                | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (vlSelf->top__DOT__instruction 
                                                                                >> 0x1fU))) 
                                                                    << 0xdU) 
                                                                   | ((0x1000U 
                                                                       & (vlSelf->top__DOT__instruction 
                                                                          >> 0x13U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__instruction 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->top__DOT__instruction 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->top__DOT__instruction 
                                                                                >> 7U))))))))) 
                                               >> 0x20U)));
        __Vtemp_haedb7302__0[2U] = (0x18U | (((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | ((0x3fc0000U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    << 6U)) 
                                                | ((0x20000U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       >> 3U)) 
                                                   | ((0x1ff80U 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0xeU)) 
                                                      | (7U 
                                                         & ((- (IData)(
                                                                       (vlSelf->top__DOT__instruction 
                                                                        >> 0x1fU))) 
                                                            >> 0x11U)))))));
        __Vtemp_haedb7302__0[3U] = (0x80U | ((0xffe00000U 
                                              & (vlSelf->top__DOT__instruction 
                                                 << 9U)) 
                                             | (0x3fU 
                                                & ((- (IData)(
                                                              (vlSelf->top__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   >> 6U))));
        __Vtemp_haedb7302__0[4U] = (0x200U | (((- (IData)(
                                                          (vlSelf->top__DOT__instruction 
                                                           >> 0x1fU))) 
                                               << 0x18U) 
                                              | ((0xfe0000U 
                                                  & (vlSelf->top__DOT__instruction 
                                                     >> 8U)) 
                                                 | ((0x1f000U 
                                                     & (vlSelf->top__DOT__instruction 
                                                        << 5U)) 
                                                    | (0x1fffffU 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x17U))))));
        __Vtemp_haedb7302__0[5U] = (0xfffU & ((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              >> 8U));
        bufp->chgWData(oldp+119,(__Vtemp_haedb7302__0),175);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+142,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
        bufp->chgBit(oldp+143,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
        bufp->chgCData(oldp+144,(((0U == (7U & (vlSelf->top__DOT__instruction 
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
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__src1_data),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__src2_data),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__memory_out_data),32);
        bufp->chgQData(oldp+150,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+152,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+154,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+156,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),2);
        bufp->chgQData(oldp+165,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+167,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+169,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        __Vtemp_h834000df__0[0U] = (IData)((0x1200000000ULL 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_ha493ef8e__0))));
        __Vtemp_h834000df__0[1U] = (((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                     << 5U) | (IData)(
                                                      ((0x1200000000ULL 
                                                        | (QData)((IData)(vlSelf->__VdfgTmp_ha493ef8e__0))) 
                                                       >> 0x20U)));
        __Vtemp_h834000df__0[2U] = (0x220U | (((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                               << 0xaU) 
                                              | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                 >> 0x1bU)));
        __Vtemp_h834000df__0[3U] = (0x4000U | (((IData)(vlSelf->__VdfgTmp_ha73a0501__0) 
                                                << 0xfU) 
                                               | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                  >> 0x16U)));
        __Vtemp_h834000df__0[4U] = (0x78000U | ((IData)(vlSelf->__VdfgTmp_ha706d132__0) 
                                                << 0x14U));
        __Vtemp_h834000df__0[5U] = (0xe00000U | ((IData)(vlSelf->__VdfgTmp_ha4dc0392__0) 
                                                 << 0x19U));
        __Vtemp_h834000df__0[6U] = (0x1a000000U | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                   << 0x1eU));
        __Vtemp_h834000df__0[7U] = ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                    >> 2U);
        __Vtemp_h834000df__0[8U] = (3U | (((0x1fU >= 
                                            (0x3fU 
                                             & vlSelf->top__DOT__src2_data))
                                            ? (vlSelf->top__DOT__src1_data 
                                               >> (0x3fU 
                                                   & vlSelf->top__DOT__src2_data))
                                            : 0U) << 3U));
        __Vtemp_h834000df__0[9U] = (0x50U | ((((0x1fU 
                                                >= 
                                                (0x3fU 
                                                 & vlSelf->top__DOT__src2_data))
                                                ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                                                                 (0x3fU 
                                                                  & vlSelf->top__DOT__src2_data))
                                                : (- 
                                                   (vlSelf->top__DOT__src1_data 
                                                    >> 0x1fU))) 
                                              << 8U) 
                                             | (((0x1fU 
                                                  >= 
                                                  (0x3fU 
                                                   & vlSelf->top__DOT__src2_data))
                                                  ? 
                                                 (vlSelf->top__DOT__src1_data 
                                                  >> 
                                                  (0x3fU 
                                                   & vlSelf->top__DOT__src2_data))
                                                  : 0U) 
                                                >> 0x1dU)));
        __Vtemp_h834000df__0[0xaU] = (0x900U | ((((0x1fU 
                                                   >= 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__src2_data))
                                                   ? 
                                                  (vlSelf->top__DOT__src1_data 
                                                   << 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__src2_data))
                                                   : 0U) 
                                                 << 0xdU) 
                                                | (((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & vlSelf->top__DOT__src2_data))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                                                                   (0x3fU 
                                                                    & vlSelf->top__DOT__src2_data))
                                                     : 
                                                    (- 
                                                     (vlSelf->top__DOT__src1_data 
                                                      >> 0x1fU))) 
                                                   >> 0x18U)));
        __Vtemp_h834000df__0[0xbU] = (0x10000U | ((
                                                   (vlSelf->top__DOT__src1_data 
                                                    & vlSelf->top__DOT__src2_data) 
                                                   << 0x12U) 
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
                                                     >> 0x13U)));
        __Vtemp_h834000df__0[0xcU] = (0x1c0000U | (
                                                   ((vlSelf->top__DOT__src1_data 
                                                     | vlSelf->top__DOT__src2_data) 
                                                    << 0x17U) 
                                                   | ((vlSelf->top__DOT__src1_data 
                                                       & vlSelf->top__DOT__src2_data) 
                                                      >> 0xeU)));
        __Vtemp_h834000df__0[0xdU] = (0x3000000U | 
                                      (((vlSelf->top__DOT__src1_data 
                                         ^ vlSelf->top__DOT__src2_data) 
                                        << 0x1cU) | 
                                       ((vlSelf->top__DOT__src1_data 
                                         | vlSelf->top__DOT__src2_data) 
                                        >> 9U)));
        __Vtemp_h834000df__0[0xeU] = (0x50000000U | 
                                      ((vlSelf->top__DOT__src1_data 
                                        ^ vlSelf->top__DOT__src2_data) 
                                       >> 4U));
        __Vtemp_h834000df__0[0xfU] = ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                      << 1U);
        __Vtemp_h834000df__0[0x10U] = (8U | ((0xffffff80U 
                                              & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                 << 6U)) 
                                             | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                >> 0x1fU)));
        __Vtemp_h834000df__0[0x11U] = (0xc0U | (((vlSelf->top__DOT__src1_data 
                                                  - vlSelf->top__DOT__src2_data) 
                                                 << 0xbU) 
                                                | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                   >> 0x1aU)));
        __Vtemp_h834000df__0[0x12U] = (0x1000U | ((vlSelf->top__DOT__src2_data 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__src1_data 
                                                      - vlSelf->top__DOT__src2_data) 
                                                     >> 0x15U)));
        __Vtemp_h834000df__0[0x13U] = (0x10000U | (
                                                   (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                    << 0x15U) 
                                                   | (vlSelf->top__DOT__src2_data 
                                                      >> 0x10U)));
        __Vtemp_h834000df__0[0x14U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                       >> 0xbU);
        bufp->chgWData(oldp+179,(__Vtemp_h834000df__0),666);
        bufp->chgQData(oldp+200,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+202,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+204,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+206,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+208,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+210,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+214,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+216,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+218,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgQData(oldp+220,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),37);
        bufp->chgQData(oldp+222,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),37);
        bufp->chgQData(oldp+224,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[12]),37);
        bufp->chgQData(oldp+226,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[13]),37);
        bufp->chgQData(oldp+228,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[14]),37);
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[15]),37);
        bufp->chgQData(oldp+232,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[16]),37);
        bufp->chgQData(oldp+234,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[17]),37);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[16]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[17]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+255,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
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
        bufp->chgWData(oldp+257,(__Vtemp_h392ba67f__0),210);
        bufp->chgQData(oldp+264,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
        bufp->chgQData(oldp+266,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
        bufp->chgQData(oldp+268,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
        bufp->chgQData(oldp+270,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
        bufp->chgQData(oldp+272,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+280,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+281,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+283,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+288,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
        __Vtemp_h020a3be6__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
        __Vtemp_h020a3be6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                       >> 0x20U)));
        __Vtemp_h020a3be6__0[2U] = (vlSelf->top__DOT__ext_imm 
                                    >> 0x1fU);
        bufp->chgWData(oldp+289,(__Vtemp_h020a3be6__0),66);
        bufp->chgQData(oldp+292,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+294,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+299,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+318,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+320,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+321,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+322,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+323,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+328,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+329,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+330,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+331,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+332,(vlSelf->clk));
    bufp->chgBit(oldp+333,(vlSelf->rst));
    bufp->chgBit(oldp+334,(vlSelf->wen));
    bufp->chgIData(oldp+335,(vlSelf->pc),32);
    bufp->chgIData(oldp+336,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+337,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+338,(vlSelf->alu_result),32);
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
    bufp->chgWData(oldp+339,(__Vtemp_h1b997cca__0),136);
    __Vtemp_hce3a3f54__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->pc 
                                                           + vlSelf->top__DOT__ext_imm)))));
    __Vtemp_hce3a3f54__0[1U] = ((vlSelf->alu_result 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->pc 
                                                                       + vlSelf->top__DOT__ext_imm)))) 
                                                   >> 0x20U)));
    __Vtemp_hce3a3f54__0[2U] = (8U | (((vlSelf->alu_result 
                                        + vlSelf->pc) 
                                       << 4U) | (vlSelf->alu_result 
                                                 >> 0x1eU)));
    __Vtemp_hce3a3f54__0[3U] = (0x10U | ((((IData)(4U) 
                                           + vlSelf->pc) 
                                          << 6U) | 
                                         ((vlSelf->alu_result 
                                           + vlSelf->pc) 
                                          >> 0x1cU)));
    __Vtemp_hce3a3f54__0[4U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x1aU);
    bufp->chgWData(oldp+344,(__Vtemp_hce3a3f54__0),136);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->chgWData(oldp+349,(__Vtemp_h2ea4f700__0),66);
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
