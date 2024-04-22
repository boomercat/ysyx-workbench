// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+60,"wen", false,-1);
    tracep->declBus(c+61,"instruction", false,-1, 31,0);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+63,"rd_data", false,-1, 31,0);
    tracep->declBus(c+64,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+60,"wen", false,-1);
    tracep->declBus(c+61,"instruction", false,-1, 31,0);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+63,"rd_data", false,-1, 31,0);
    tracep->declBus(c+64,"next_pc", false,-1, 31,0);
    tracep->declBus(c+65,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+66,"rd_add", false,-1, 4,0);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+15,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+16,"alu_result", false,-1, 31,0);
    tracep->declBus(c+5,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+6,"Ext_type", false,-1);
    tracep->declBit(c+67,"ALU_src", false,-1);
    tracep->declBus(c+17,"out_data1", false,-1, 31,0);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+62,"pc", false,-1, 31,0);
    tracep->declBus(c+64,"next_pc", false,-1, 31,0);
    tracep->declBus(c+68,"pc_plus_4", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+77,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+68,"din", false,-1, 31,0);
    tracep->declBus(c+64,"dout", false,-1, 31,0);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+17,"src1", false,-1, 31,0);
    tracep->declBus(c+5,"imm", false,-1, 31,0);
    tracep->declBus(c+16,"alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+61,"instruction", false,-1, 31,0);
    tracep->declBit(c+6,"Ext_type", false,-1);
    tracep->declBit(c+67,"ALU_src", false,-1);
    tracep->declBus(c+66,"rd_add", false,-1, 4,0);
    tracep->declBus(c+65,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+69,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBit(c+6,"Ext_type", false,-1);
    tracep->declBus(c+61,"inst", false,-1, 31,0);
    tracep->declBus(c+5,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 31,0);
    tracep->declBus(c+6,"key", false,-1, 0,0);
    tracep->declBus(c+82,"default_out", false,-1, 31,0);
    tracep->declArray(c+70,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 31,0);
    tracep->declBus(c+6,"key", false,-1, 0,0);
    tracep->declBus(c+82,"default_out", false,-1, 31,0);
    tracep->declArray(c+70,"lut", false,-1, 65,0);
    tracep->declBus(c+83,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+7+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+13,"lut_out", false,-1, 31,0);
    tracep->declBit(c+14,"hit", false,-1);
    tracep->declBus(c+84,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+85,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBus(c+16,"wdata", false,-1, 31,0);
    tracep->declBus(c+66,"waddr", false,-1, 4,0);
    tracep->declBit(c+60,"wen", false,-1);
    tracep->declBus(c+65,"Addr1", false,-1, 4,0);
    tracep->declBus(c+15,"RData1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+26+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 0,0);
    tracep->declBus(c+82,"default_out", false,-1, 31,0);
    tracep->declArray(c+73,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+80,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+81,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 0,0);
    tracep->declBus(c+82,"default_out", false,-1, 31,0);
    tracep->declArray(c+73,"lut", false,-1, 65,0);
    tracep->declBus(c+83,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+18+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+22+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+24,"lut_out", false,-1, 31,0);
    tracep->declBit(c+25,"hit", false,-1);
    tracep->declBus(c+84,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3498ed0f__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__Ext_type));
    bufp->fullQData(oldp+7,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+9,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+16,((vlSelf->top__DOT__ext_imm 
                              + vlSelf->top__DOT__out_data1)),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__out_data1),32);
    bufp->fullQData(oldp+18,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+20,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->rst));
    bufp->fullBit(oldp+60,(vlSelf->wen));
    bufp->fullIData(oldp+61,(vlSelf->instruction),32);
    bufp->fullIData(oldp+62,(vlSelf->pc),32);
    bufp->fullIData(oldp+63,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+64,(vlSelf->next_pc),32);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->instruction 
                                       >> 7U))),5);
    bufp->fullBit(oldp+67,((0x17U == (0x7fU & vlSelf->instruction))));
    bufp->fullIData(oldp+68,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->instruction)),7);
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
    bufp->fullWData(oldp+70,(__Vtemp_h3498ed0f__0),66);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+73,(__Vtemp_h2ea4f700__0),66);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__opcode),7);
    bufp->fullIData(oldp+77,(0x20U),32);
    bufp->fullIData(oldp+78,(0x80000000U),32);
    bufp->fullBit(oldp+79,(1U));
    bufp->fullIData(oldp+80,(2U),32);
    bufp->fullIData(oldp+81,(1U),32);
    bufp->fullIData(oldp+82,(0U),32);
    bufp->fullIData(oldp+83,(0x21U),32);
    bufp->fullIData(oldp+84,(2U),32);
    bufp->fullIData(oldp+85,(5U),32);
}
