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
    VlWide<25>/*799:0*/ __Vtemp_h5e6337af__0;
    VlWide<11>/*351:0*/ __Vtemp_h9a8dcb8c__0;
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
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),5);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[12]),5);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[13]),5);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[14]),5);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[15]),5);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[16]),5);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[17]),5);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[18]),5);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[19]),5);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[20]),5);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgSData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+49,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+50,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+51,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+113,((0x7fU & vlSelf->top__DOT__instruction)),7);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__rd_add),5);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__rs1_add),5);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__rs2_add),5);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__ext_imm),32);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__Ext_type),3);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__alu_ctrl),5);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__PC_src),3);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__RegWrite),3);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__instruction),32);
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__memory_valid));
        bufp->chgSData(oldp+124,(((0x380U & (vlSelf->top__DOT__instruction 
                                             >> 5U)) 
                                  | (0x7fU & vlSelf->top__DOT__instruction))),10);
        bufp->chgBit(oldp+125,((IData)((0x2001013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+126,((IData)((0x2005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgBit(oldp+127,((IData)((0x82005013U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__instruction)))));
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+131,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+134,(__Vtemp_haedb7302__0),175);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+148,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+158,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+160,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__src1_data),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__src2_data),32);
        bufp->chgCData(oldp+174,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
        bufp->chgQData(oldp+175,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+177,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+179,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+181,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+183,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+191,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
        __Vtemp_h5e6337af__0[0U] = (IData)((0x1500000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0))));
        __Vtemp_h5e6337af__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0 
                                     << 5U) | (IData)(
                                                      ((0x1500000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0))) 
                                                       >> 0x20U)));
        __Vtemp_h5e6337af__0[2U] = (0x280U | ((((0x1fU 
                                                 >= 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__instruction 
                                                     >> 0x14U)))
                                                 ? 
                                                (vlSelf->top__DOT__src1_data 
                                                 << 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__instruction 
                                                     >> 0x14U)))
                                                 : 0U) 
                                               << 0xaU) 
                                              | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0 
                                                 >> 0x1bU)));
        __Vtemp_h5e6337af__0[3U] = (0x4c00U | (((IData)(vlSelf->__VdfgTmp_ha493ef8e__0) 
                                                << 0xfU) 
                                               | (((0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & (vlSelf->top__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? 
                                                   (vlSelf->top__DOT__src1_data 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->top__DOT__instruction 
                                                        >> 0x14U)))
                                                    : 0U) 
                                                  >> 0x16U)));
        __Vtemp_h5e6337af__0[4U] = (0x90000U | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                << 0x14U));
        __Vtemp_h5e6337af__0[5U] = (0x1100000U | (((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                   << 0x19U) 
                                                  | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                     >> 0xcU)));
        __Vtemp_h5e6337af__0[6U] = (0x20000000U | (
                                                   ((IData)(vlSelf->__VdfgTmp_ha73a0501__0) 
                                                    << 0x1eU) 
                                                   | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                      >> 7U)));
        __Vtemp_h5e6337af__0[7U] = 0xc0000000U;
        __Vtemp_h5e6337af__0[8U] = (3U | ((IData)(vlSelf->__VdfgTmp_ha706d132__0) 
                                          << 3U));
        __Vtemp_h5e6337af__0[9U] = (0x70U | ((IData)(vlSelf->__VdfgTmp_ha4dc0392__0) 
                                             << 8U));
        __Vtemp_h5e6337af__0[0xaU] = (0xd00U | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                << 0xdU));
        __Vtemp_h5e6337af__0[0xbU] = (0x18000U | ((
                                                   (vlSelf->top__DOT__src1_data 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__src2_data)) 
                                                   << 0x12U) 
                                                  | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                     >> 0x13U)));
        __Vtemp_h5e6337af__0[0xcU] = (0x280000U | (
                                                   (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__src2_data)) 
                                                    << 0x17U) 
                                                   | ((vlSelf->top__DOT__src1_data 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__src2_data)) 
                                                      >> 0xeU)));
        __Vtemp_h5e6337af__0[0xdU] = (0x4800000U | 
                                      (((vlSelf->top__DOT__src1_data 
                                         << (0x1fU 
                                             & vlSelf->top__DOT__src2_data)) 
                                        << 0x1cU) | 
                                       (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__src2_data)) 
                                        >> 9U)));
        __Vtemp_h5e6337af__0[0xeU] = (0x80000000U | 
                                      ((vlSelf->top__DOT__src1_data 
                                        << (0x1fU & vlSelf->top__DOT__src2_data)) 
                                       >> 4U));
        __Vtemp_h5e6337af__0[0xfU] = ((vlSelf->top__DOT__src1_data 
                                       & vlSelf->top__DOT__src2_data) 
                                      << 1U);
        __Vtemp_h5e6337af__0[0x10U] = (0xeU | (((vlSelf->top__DOT__src1_data 
                                                 | vlSelf->top__DOT__src2_data) 
                                                << 6U) 
                                               | ((vlSelf->top__DOT__src1_data 
                                                   & vlSelf->top__DOT__src2_data) 
                                                  >> 0x1fU)));
        __Vtemp_h5e6337af__0[0x11U] = (0x180U | (((vlSelf->top__DOT__src1_data 
                                                   ^ vlSelf->top__DOT__src2_data) 
                                                  << 0xbU) 
                                                 | ((vlSelf->top__DOT__src1_data 
                                                     | vlSelf->top__DOT__src2_data) 
                                                    >> 0x1aU)));
        __Vtemp_h5e6337af__0[0x12U] = (0x2800U | (((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__src1_data 
                                                      ^ vlSelf->top__DOT__src2_data) 
                                                     >> 0x15U)));
        __Vtemp_h5e6337af__0[0x13U] = (0x40000U | (
                                                   (0xffc00000U 
                                                    & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                       << 0x15U)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                      >> 0x10U)));
        __Vtemp_h5e6337af__0[0x14U] = (0x600000U | 
                                       (((vlSelf->top__DOT__src1_data 
                                          - vlSelf->top__DOT__src2_data) 
                                         << 0x1aU) 
                                        | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                           >> 0xbU)));
        __Vtemp_h5e6337af__0[0x15U] = (0x8000000U | 
                                       ((vlSelf->top__DOT__src2_data 
                                         << 0x1fU) 
                                        | ((vlSelf->top__DOT__src1_data 
                                            - vlSelf->top__DOT__src2_data) 
                                           >> 6U)));
        __Vtemp_h5e6337af__0[0x16U] = (0x80000000U 
                                       | (vlSelf->top__DOT__src2_data 
                                          >> 1U));
        __Vtemp_h5e6337af__0[0x17U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                       << 4U);
        __Vtemp_h5e6337af__0[0x18U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                       >> 0x1cU);
        bufp->chgWData(oldp+192,(__Vtemp_h5e6337af__0),777);
        bufp->chgQData(oldp+217,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+219,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+221,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+223,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+225,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+227,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+229,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+231,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+233,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+235,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgQData(oldp+237,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),37);
        bufp->chgQData(oldp+239,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),37);
        bufp->chgQData(oldp+241,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[12]),37);
        bufp->chgQData(oldp+243,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[13]),37);
        bufp->chgQData(oldp+245,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[14]),37);
        bufp->chgQData(oldp+247,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[15]),37);
        bufp->chgQData(oldp+249,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[16]),37);
        bufp->chgQData(oldp+251,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[17]),37);
        bufp->chgQData(oldp+253,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[18]),37);
        bufp->chgQData(oldp+255,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[19]),37);
        bufp->chgQData(oldp+257,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[20]),37);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[16]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[17]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[18]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[19]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[20]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+281,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+282,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+284,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+286,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+288,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+290,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+292,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+294,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+296,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+298,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+310,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
        __Vtemp_h9a8dcb8c__0[0U] = (IData)((0x3300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
        __Vtemp_h9a8dcb8c__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                     << 7U) | (IData)(
                                                      ((0x3300000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                       >> 0x20U)));
        __Vtemp_h9a8dcb8c__0[2U] = (0x980U | ((vlSelf->top__DOT__ext_imm 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__ext_imm 
                                                 >> 0x19U)));
        __Vtemp_h9a8dcb8c__0[3U] = (0x8c000U | ((vlSelf->top__DOT__ext_imm 
                                                 << 0x15U) 
                                                | (vlSelf->top__DOT__ext_imm 
                                                   >> 0x12U)));
        __Vtemp_h9a8dcb8c__0[4U] = (0x600000U | ((vlSelf->top__DOT__rs2_data 
                                                  << 0x1cU) 
                                                 | (vlSelf->top__DOT__ext_imm 
                                                    >> 0xbU)));
        __Vtemp_h9a8dcb8c__0[5U] = (0x30000000U | (vlSelf->top__DOT__rs2_data 
                                                   >> 4U));
        __Vtemp_h9a8dcb8c__0[6U] = 0x26U;
        __Vtemp_h9a8dcb8c__0[7U] = 0x1338U;
        __Vtemp_h9a8dcb8c__0[8U] = (0x1bc00U | (vlSelf->top__DOT__ext_imm 
                                                << 0x11U));
        __Vtemp_h9a8dcb8c__0[9U] = (0x2e0000U | ((vlSelf->top__DOT__ext_imm 
                                                  << 0x18U) 
                                                 | (vlSelf->top__DOT__ext_imm 
                                                    >> 0xfU)));
        __Vtemp_h9a8dcb8c__0[0xaU] = (0x37000000U | 
                                      (vlSelf->top__DOT__ext_imm 
                                       >> 8U));
        bufp->chgWData(oldp+311,(__Vtemp_h9a8dcb8c__0),351);
        bufp->chgQData(oldp+322,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+324,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+326,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+328,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+330,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+332,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+334,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+336,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+338,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+340,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+341,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+342,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+343,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+344,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+345,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+346,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+347,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+348,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+349,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+350,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+351,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+352,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+353,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+354,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+355,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+356,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+365,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+366,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+367,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+368,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+369,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+370,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+371,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+372,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+374,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+375,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+380,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+382,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+383,(vlSelf->clk));
    bufp->chgBit(oldp+384,(vlSelf->rst));
    bufp->chgBit(oldp+385,(vlSelf->wen));
    bufp->chgIData(oldp+386,(vlSelf->pc),32);
    bufp->chgIData(oldp+387,(vlSelf->rd_data),32);
    bufp->chgIData(oldp+388,(vlSelf->next_pc),32);
    bufp->chgIData(oldp+389,(vlSelf->alu_result),32);
    bufp->chgIData(oldp+390,(vlSelf->top__DOT__memory_out_data),32);
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
    bufp->chgWData(oldp+391,(__Vtemp_h872f0984__0),140);
    bufp->chgIData(oldp+396,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+397,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
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
    bufp->chgWData(oldp+398,(__Vtemp_he940a371__0),175);
    bufp->chgIData(oldp+404,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
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
    bufp->chgWData(oldp+405,(__Vtemp_h8641cd22__0),351);
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
}
