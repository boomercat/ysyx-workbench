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
    VlWide<6>/*191:0*/ __Vtemp_h2d8840b3__0;
    VlWide<8>/*255:0*/ __Vtemp_h5eaeca2d__0;
    VlWide<13>/*415:0*/ __Vtemp_hc779d515__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[6]),3);
        bufp->chgSData(oldp+12,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[0]),14);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[1]),14);
        bufp->chgSData(oldp+14,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[2]),14);
        bufp->chgSData(oldp+15,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[3]),14);
        bufp->chgSData(oldp+16,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+18,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[3]),12);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[0]),14);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[1]),14);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[2]),14);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[3]),14);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[0]),12);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[1]),12);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[2]),12);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[3]),12);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[3]),2);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[9]),7);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [3U]) | vlSelf->__Vm_traceActivity
                     [4U]))) {
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[6]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__src1_data),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+157,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+159,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+161,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+163,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgQData(oldp+165,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[9]),39);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__csrregister__DOT__csr_register
                                 [1U]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__csrregister__DOT__csr_register
                                 [3U]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__csrregister__DOT__csr_register[0]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__csrregister__DOT__csr_register[1]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__csrregister__DOT__csr_register[2]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__csrregister__DOT__csr_register[3]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+217,(vlSelf->top__DOT__opcode),7);
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__rd_add),5);
        bufp->chgCData(oldp+219,(vlSelf->top__DOT__rs1_add),5);
        bufp->chgCData(oldp+220,(vlSelf->top__DOT__rs2_add),5);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+222,(vlSelf->top__DOT__Ext_type),3);
        bufp->chgCData(oldp+223,(vlSelf->top__DOT__PC_src),3);
        bufp->chgCData(oldp+224,(vlSelf->top__DOT__RegWrite),3);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+226,((3U == (IData)(vlSelf->top__DOT__opcode))));
        bufp->chgSData(oldp+227,(((0x380U & (vlSelf->top__DOT__instruction 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->top__DOT__instruction))),10);
        bufp->chgIData(oldp+228,(((0x73U == vlSelf->top__DOT__instruction)
                                   ? 0xbU : 0U)),32);
        bufp->chgSData(oldp+229,(vlSelf->top__DOT__csr_imm),12);
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__IFU_done));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__IDU_done));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__ALU_done));
        bufp->chgCData(oldp+233,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
        bufp->chgCData(oldp+234,(vlSelf->top__DOT__csrregister__DOT__waddr_in),2);
        bufp->chgCData(oldp+235,(vlSelf->top__DOT__csrregister__DOT__raddr_in),2);
        bufp->chgBit(oldp+236,(((0x73U == (0x7fU & vlSelf->top__DOT__instruction)) 
                                & ((2U == (7U & (vlSelf->top__DOT__instruction 
                                                 >> 0xcU))) 
                                   | (1U == (7U & (vlSelf->top__DOT__instruction 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+237,((0x73U == vlSelf->top__DOT__instruction)));
        bufp->chgCData(oldp+238,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+240,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+241,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+242,(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                                & (IData)((0x2001000U 
                                           == (0xfe007000U 
                                               & vlSelf->top__DOT__instruction))))));
        bufp->chgBit(oldp+243,((IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                                        & (0x2005000U 
                                           == (0xfe007000U 
                                               & vlSelf->top__DOT__instruction))))));
        bufp->chgBit(oldp+244,((IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                                        & (0x82005000U 
                                           == (0xfe007000U 
                                               & vlSelf->top__DOT__instruction))))));
        bufp->chgCData(oldp+245,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+246,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+247,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+249,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__inst__DOT__count));
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
        bufp->chgWData(oldp+252,(__Vtemp_haedb7302__0),175);
        bufp->chgQData(oldp+258,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+260,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+262,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+264,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+266,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__memory_1__DOT__read_valid));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
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
        bufp->chgWData(oldp+277,(__Vtemp_h4bdcbac6__0),351);
        bufp->chgQData(oldp+288,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+290,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+292,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+294,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+296,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+298,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+300,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+302,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+304,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__src2_data),32);
        bufp->chgIData(oldp+318,(vlSelf->top__DOT__odata),32);
        bufp->chgIData(oldp+319,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+320,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+321,(vlSelf->clk));
    bufp->chgBit(oldp+322,(vlSelf->rst));
    bufp->chgBit(oldp+323,(vlSelf->wen));
    bufp->chgIData(oldp+324,(vlSelf->pc),32);
    bufp->chgIData(oldp+325,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+326,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+327,(vlSelf->alu_result),32);
    bufp->chgCData(oldp+328,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->chgIData(oldp+329,(vlSelf->top__DOT__memory_out_data),32);
    __Vtemp_h2d8840b3__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__odata))));
    __Vtemp_h2d8840b3__0[1U] = ((vlSelf->top__DOT__memory_out_data 
                                 << 3U) | (IData)((
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__odata))) 
                                                   >> 0x20U)));
    __Vtemp_h2d8840b3__0[2U] = ((vlSelf->top__DOT__ext_imm 
                                 << 6U) | (vlSelf->top__DOT__memory_out_data 
                                           >> 0x1dU));
    __Vtemp_h2d8840b3__0[3U] = (0xc0U | ((vlSelf->alu_result 
                                          << 9U) | 
                                         (vlSelf->top__DOT__ext_imm 
                                          >> 0x1aU)));
    __Vtemp_h2d8840b3__0[4U] = (0x400U | ((((IData)(4U) 
                                            + vlSelf->pc) 
                                           << 0xcU) 
                                          | (vlSelf->alu_result 
                                             >> 0x17U)));
    __Vtemp_h2d8840b3__0[5U] = (0x1000U | (((IData)(4U) 
                                            + vlSelf->pc) 
                                           >> 0x14U));
    bufp->chgWData(oldp+330,(__Vtemp_h2d8840b3__0),175);
    bufp->chgQData(oldp+336,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
    bufp->chgQData(oldp+338,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
    bufp->chgQData(oldp+340,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
    bufp->chgQData(oldp+342,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
    bufp->chgQData(oldp+344,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[4]),35);
    bufp->chgIData(oldp+346,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+347,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+348,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->chgIData(oldp+349,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->chgIData(oldp+350,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[4]),32);
    bufp->chgIData(oldp+351,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+352,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    __Vtemp_h5eaeca2d__0[0U] = (IData)((0x600000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__csrregister__DOT__csr_register
                                                          [3U]))));
    __Vtemp_h5eaeca2d__0[1U] = ((vlSelf->top__DOT__csrregister__DOT__csr_register
                                 [1U] << 3U) | (IData)(
                                                       ((0x600000000ULL 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__csrregister__DOT__csr_register
                                                                           [3U]))) 
                                                        >> 0x20U)));
    __Vtemp_h5eaeca2d__0[2U] = (0x28U | ((vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                          << 6U) | 
                                         (vlSelf->top__DOT__csrregister__DOT__csr_register
                                          [1U] >> 0x1dU)));
    __Vtemp_h5eaeca2d__0[3U] = (0x100U | ((vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                           << 9U) | 
                                          (vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                           >> 0x1aU)));
    __Vtemp_h5eaeca2d__0[4U] = (0x600U | ((vlSelf->alu_result 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                             >> 0x17U)));
    __Vtemp_h5eaeca2d__0[5U] = (0x2000U | (((vlSelf->alu_result 
                                             + vlSelf->pc) 
                                            << 0xfU) 
                                           | (vlSelf->alu_result 
                                              >> 0x14U)));
    __Vtemp_h5eaeca2d__0[6U] = (0x8000U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0x12U) 
                                           | ((vlSelf->alu_result 
                                               + vlSelf->pc) 
                                              >> 0x11U)));
    __Vtemp_h5eaeca2d__0[7U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0xeU);
    bufp->chgWData(oldp+353,(__Vtemp_h5eaeca2d__0),245);
    bufp->chgIData(oldp+361,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
    __Vtemp_hc779d515__0[0U] = (IData)((0x7300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs1_data))));
    __Vtemp_hc779d515__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 7U) | (IData)((
                                                   (0x7300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__rs1_data))) 
                                                   >> 0x20U)));
    __Vtemp_hc779d515__0[2U] = (0x1980U | ((vlSelf->top__DOT__rs1_data 
                                            << 0xeU) 
                                           | (vlSelf->top__DOT__rs1_data 
                                              >> 0x19U)));
    __Vtemp_hc779d515__0[3U] = (0x4c000U | ((vlSelf->top__DOT__rs1_data 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__rs1_data 
                                               >> 0x12U)));
    __Vtemp_hc779d515__0[4U] = (0x4600000U | ((vlSelf->top__DOT__rs1_data 
                                               << 0x1cU) 
                                              | (vlSelf->top__DOT__rs1_data 
                                                 >> 0xbU)));
    __Vtemp_hc779d515__0[5U] = (0x30000000U | (vlSelf->top__DOT__rs1_data 
                                               >> 4U));
    __Vtemp_hc779d515__0[6U] = (vlSelf->top__DOT__rs1_data 
                                << 3U);
    __Vtemp_hc779d515__0[7U] = (0x318U | ((vlSelf->pc 
                                           << 0xaU) 
                                          | (vlSelf->top__DOT__rs1_data 
                                             >> 0x1dU)));
    __Vtemp_hc779d515__0[8U] = (0x5c00U | ((vlSelf->top__DOT__rs1_data 
                                            << 0x11U) 
                                           | (vlSelf->pc 
                                              >> 0x16U)));
    __Vtemp_hc779d515__0[9U] = (0xce0000U | ((vlSelf->pc 
                                              << 0x18U) 
                                             | (vlSelf->top__DOT__rs1_data 
                                                >> 0xfU)));
    __Vtemp_hc779d515__0[0xaU] = (0x6f000000U | (vlSelf->pc 
                                                 >> 8U));
    __Vtemp_hc779d515__0[0xbU] = 0x80000000U;
    __Vtemp_hc779d515__0[0xcU] = 0x1bU;
    bufp->chgWData(oldp+362,(__Vtemp_hc779d515__0),390);
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
