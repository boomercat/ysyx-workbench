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
    VlWide<11>/*351:0*/ __Vtemp_h4bdcbac6__0;
    VlWide<5>/*159:0*/ __Vtemp_h872f0984__0;
    VlWide<6>/*191:0*/ __Vtemp_he940a371__0;
    VlWide<11>/*351:0*/ __Vtemp_h8641cd22__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+92,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__rs1_add),5);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__rs2_add),5);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__Ext_type),3);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__PC_src),3);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__RegWrite),3);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__memory_valid));
        bufp->chgSData(oldp+101,(((0x380U & (vlSelf->top__DOT__instruction 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->top__DOT__instruction))),10);
        bufp->chgBit(oldp+102,((IData)((0x2001013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+103,((IData)((0x2005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+104,((IData)((0x82005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+111,(__Vtemp_haedb7302__0),175);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
        bufp->chgQData(oldp+136,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+138,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+152,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+157,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+159,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__src1_data),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__src2_data),32);
        bufp->chgQData(oldp+169,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+171,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+173,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+175,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+177,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+179,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+181,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+183,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+185,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+197,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
        __Vtemp_h4bdcbac6__0[0U] = (IData)((0x3300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
        __Vtemp_h4bdcbac6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                     << 7U) | (IData)(
                                                      ((0x3300000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                       >> 0x20U)));
        __Vtemp_h4bdcbac6__0[2U] = (0x980U | ((vlSelf->top__DOT__ext_imm 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__ext_imm 
                                                 >> 0x19U)));
        __Vtemp_h4bdcbac6__0[3U] = (0x8c000U | ((vlSelf->top__DOT__ext_imm 
                                                 << 0x15U) 
                                                | (vlSelf->top__DOT__ext_imm 
                                                   >> 0x12U)));
        __Vtemp_h4bdcbac6__0[4U] = (0x600000U | ((vlSelf->top__DOT__rs2_data 
                                                  << 0x1cU) 
                                                 | (vlSelf->top__DOT__ext_imm 
                                                    >> 0xbU)));
        __Vtemp_h4bdcbac6__0[5U] = (0x30000000U | (vlSelf->top__DOT__rs2_data 
                                                   >> 4U));
        __Vtemp_h4bdcbac6__0[6U] = (6U | (vlSelf->top__DOT__ext_imm 
                                          << 3U));
        __Vtemp_h4bdcbac6__0[7U] = (0x1338U | (vlSelf->top__DOT__ext_imm 
                                               >> 0x1dU));
        __Vtemp_h4bdcbac6__0[8U] = (0x1bc00U | (vlSelf->top__DOT__ext_imm 
                                                << 0x11U));
        __Vtemp_h4bdcbac6__0[9U] = (0x2e0000U | ((vlSelf->top__DOT__ext_imm 
                                                  << 0x18U) 
                                                 | (vlSelf->top__DOT__ext_imm 
                                                    >> 0xfU)));
        __Vtemp_h4bdcbac6__0[0xaU] = (0x37000000U | 
                                      (vlSelf->top__DOT__ext_imm 
                                       >> 8U));
        bufp->chgWData(oldp+198,(__Vtemp_h4bdcbac6__0),351);
        bufp->chgQData(oldp+209,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+211,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+213,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+215,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+217,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+219,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+221,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+223,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+225,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+270,(vlSelf->clk));
    bufp->chgBit(oldp+271,(vlSelf->rst));
    bufp->chgBit(oldp+272,(vlSelf->wen));
    bufp->chgIData(oldp+273,(vlSelf->pc),32);
    bufp->chgIData(oldp+274,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+275,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+276,(vlSelf->alu_result),32);
    bufp->chgCData(oldp+277,(vlSelf->top__DOT__rd_add),5);
    bufp->chgCData(oldp+278,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->chgIData(oldp+279,(vlSelf->top__DOT__memory_out_data),32);
    __Vtemp_h872f0984__0[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__memory_out_data)));
    __Vtemp_h872f0984__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 3U) | (IData)(((QData)((IData)(vlSelf->top__DOT__memory_out_data)) 
                                                   >> 0x20U)));
    __Vtemp_h872f0984__0[2U] = (0x18U | ((vlSelf->alu_result 
                                          << 6U) | 
                                         (vlSelf->top__DOT__ext_imm 
                                          >> 0x1dU)));
    __Vtemp_h872f0984__0[3U] = (0x80U | ((((IData)(4U) 
                                           + vlSelf->pc) 
                                          << 9U) | 
                                         (vlSelf->alu_result 
                                          >> 0x1aU)));
    __Vtemp_h872f0984__0[4U] = (0x200U | (((IData)(4U) 
                                           + vlSelf->pc) 
                                          >> 0x17U));
    bufp->chgWData(oldp+280,(__Vtemp_h872f0984__0),140);
    bufp->chgIData(oldp+285,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+286,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    __Vtemp_he940a371__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0))));
    __Vtemp_he940a371__0[1U] = ((vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                 << 3U) | (IData)((
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0))) 
                                                   >> 0x20U)));
    __Vtemp_he940a371__0[2U] = (0x18U | ((vlSelf->alu_result 
                                          << 6U) | 
                                         (vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                          >> 0x1dU)));
    __Vtemp_he940a371__0[3U] = (0x80U | (((vlSelf->alu_result 
                                           + vlSelf->pc) 
                                          << 9U) | 
                                         (vlSelf->alu_result 
                                          >> 0x1aU)));
    __Vtemp_he940a371__0[4U] = (0x200U | ((((IData)(4U) 
                                            + vlSelf->pc) 
                                           << 0xcU) 
                                          | ((vlSelf->alu_result 
                                              + vlSelf->pc) 
                                             >> 0x17U)));
    __Vtemp_he940a371__0[5U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x14U);
    bufp->chgWData(oldp+287,(__Vtemp_he940a371__0),175);
    bufp->chgIData(oldp+293,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
    __Vtemp_h8641cd22__0[0U] = (IData)((0x3300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs1_data))));
    __Vtemp_h8641cd22__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 7U) | (IData)((
                                                   (0x3300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__rs1_data))) 
                                                   >> 0x20U)));
    __Vtemp_h8641cd22__0[2U] = (0x980U | ((vlSelf->top__DOT__rs1_data 
                                           << 0xeU) 
                                          | (vlSelf->top__DOT__rs1_data 
                                             >> 0x19U)));
    __Vtemp_h8641cd22__0[3U] = (0x8c000U | ((vlSelf->top__DOT__rs1_data 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__rs1_data 
                                               >> 0x12U)));
    __Vtemp_h8641cd22__0[4U] = (0x600000U | ((vlSelf->top__DOT__rs1_data 
                                              << 0x1cU) 
                                             | (vlSelf->top__DOT__rs1_data 
                                                >> 0xbU)));
    __Vtemp_h8641cd22__0[5U] = (0x30000000U | (vlSelf->top__DOT__rs1_data 
                                               >> 4U));
    __Vtemp_h8641cd22__0[6U] = (6U | (vlSelf->pc << 3U));
    __Vtemp_h8641cd22__0[7U] = (0xb8U | ((vlSelf->top__DOT__rs1_data 
                                          << 0xaU) 
                                         | (vlSelf->pc 
                                            >> 0x1dU)));
    __Vtemp_h8641cd22__0[8U] = (0x19c00U | ((vlSelf->pc 
                                             << 0x11U) 
                                            | (vlSelf->top__DOT__rs1_data 
                                               >> 0x16U)));
    __Vtemp_h8641cd22__0[9U] = (0xde0000U | (vlSelf->pc 
                                             >> 0xfU));
    __Vtemp_h8641cd22__0[0xaU] = 0x37000000U;
    bufp->chgWData(oldp+294,(__Vtemp_h8641cd22__0),351);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
