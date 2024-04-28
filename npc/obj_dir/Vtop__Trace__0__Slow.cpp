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
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+140,"wen", false,-1);
    tracep->declBus(c+141,"instruction", false,-1, 31,0);
    tracep->declBus(c+142,"pc", false,-1, 31,0);
    tracep->declBus(c+143,"rd_data", false,-1, 31,0);
    tracep->declBus(c+144,"next_pc", false,-1, 31,0);
    tracep->declBus(c+145,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+140,"wen", false,-1);
    tracep->declBus(c+141,"instruction", false,-1, 31,0);
    tracep->declBus(c+142,"pc", false,-1, 31,0);
    tracep->declBus(c+143,"rd_data", false,-1, 31,0);
    tracep->declBus(c+144,"next_pc", false,-1, 31,0);
    tracep->declBus(c+145,"alu_result", false,-1, 31,0);
    tracep->declBus(c+146,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+147,"rd_add", false,-1, 4,0);
    tracep->declBus(c+148,"opcode", false,-1, 6,0);
    tracep->declBus(c+58,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+39,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+40,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+149,"ALU_src", false,-1);
    tracep->declBus(c+59,"out_data1", false,-1, 31,0);
    tracep->declBus(c+164,"alu_ctrl", false,-1, 1,0);
    tracep->declBit(c+41,"PC_src", false,-1);
    tracep->declBus(c+42,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->declBus(c+42,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+150,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->declBus(c+42,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+150,"lut", false,-1, 101,0);
    tracep->declBus(c+170,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+60+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+66+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+69,"lut_out", false,-1, 31,0);
    tracep->declBit(c+70,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+41,"PC_src", false,-1);
    tracep->declBus(c+145,"alu_result", false,-1, 31,0);
    tracep->declBus(c+142,"pc", false,-1, 31,0);
    tracep->declBus(c+144,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+144,"out", false,-1, 31,0);
    tracep->declBus(c+41,"key", false,-1, 0,0);
    tracep->declBus(c+172,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+144,"out", false,-1, 31,0);
    tracep->declBus(c+41,"key", false,-1, 0,0);
    tracep->declBus(c+172,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 65,0);
    tracep->declBus(c+173,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+71+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+4+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+75+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+77,"lut_out", false,-1, 31,0);
    tracep->declBit(c+78,"hit", false,-1);
    tracep->declBus(c+174,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"src1", false,-1, 31,0);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+164,"alu_ctrl", false,-1, 1,0);
    tracep->declBus(c+145,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+145,"out", false,-1, 31,0);
    tracep->declBus(c+164,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+79,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+145,"out", false,-1, 31,0);
    tracep->declBus(c+164,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+79,"lut", false,-1, 135,0);
    tracep->declBus(c+170,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+84+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+92+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+96,"lut_out", false,-1, 31,0);
    tracep->declBit(c+97,"hit", false,-1);
    tracep->declBus(c+176,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+141,"instruction", false,-1, 31,0);
    tracep->declBus(c+40,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+149,"ALU_src", false,-1);
    tracep->declBus(c+42,"RegWrite", false,-1, 1,0);
    tracep->declBit(c+41,"PC_src", false,-1);
    tracep->declBus(c+147,"rd_add", false,-1, 4,0);
    tracep->declBus(c+146,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+148,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+148,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"Ext_type", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+177,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 1,0);
    tracep->declBus(c+148,"key", false,-1, 6,0);
    tracep->declBus(c+178,"default_out", false,-1, 1,0);
    tracep->declQuad(c+179,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+177,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 1,0);
    tracep->declBus(c+148,"key", false,-1, 6,0);
    tracep->declBus(c+178,"default_out", false,-1, 1,0);
    tracep->declQuad(c+179,"lut", false,-1, 35,0);
    tracep->declBus(c+181,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+10+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+14+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+43,"lut_out", false,-1, 1,0);
    tracep->declBit(c+44,"hit", false,-1);
    tracep->declBus(c+176,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+148,"opcode", false,-1, 6,0);
    tracep->declBus(c+42,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+177,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+42,"out", false,-1, 1,0);
    tracep->declBus(c+148,"key", false,-1, 6,0);
    tracep->declBus(c+178,"default_out", false,-1, 1,0);
    tracep->declQuad(c+182,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+175,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+177,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+42,"out", false,-1, 1,0);
    tracep->declBus(c+148,"key", false,-1, 6,0);
    tracep->declBus(c+178,"default_out", false,-1, 1,0);
    tracep->declQuad(c+182,"lut", false,-1, 35,0);
    tracep->declBus(c+181,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+45,"lut_out", false,-1, 1,0);
    tracep->declBit(c+46,"hit", false,-1);
    tracep->declBus(c+176,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+40,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+141,"inst", false,-1, 31,0);
    tracep->declBus(c+39,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+40,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+157,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+165,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+166,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+40,"key", false,-1, 1,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+157,"lut", false,-1, 101,0);
    tracep->declBus(c+170,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+47+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+34+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+53+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+56,"lut_out", false,-1, 31,0);
    tracep->declBit(c+57,"hit", false,-1);
    tracep->declBus(c+171,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+184,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBus(c+143,"wdata", false,-1, 31,0);
    tracep->declBus(c+147,"waddr", false,-1, 4,0);
    tracep->declBit(c+140,"wen", false,-1);
    tracep->declBus(c+146,"Addr1", false,-1, 4,0);
    tracep->declBus(c+58,"RData1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+106+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+149,"key", false,-1, 0,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+161,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+166,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+169,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+149,"key", false,-1, 0,0);
    tracep->declBus(c+168,"default_out", false,-1, 31,0);
    tracep->declArray(c+161,"lut", false,-1, 65,0);
    tracep->declBus(c+173,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+98+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+37+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+102+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+104,"lut_out", false,-1, 31,0);
    tracep->declBit(c+105,"hit", false,-1);
    tracep->declBus(c+174,"i", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_hd68abb91__0;
    VlWide<4>/*127:0*/ __Vtemp_h9046d7e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h0aba8026__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd265232__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__PC_src));
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+47,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+49,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+51,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__out_data1),32);
    bufp->fullQData(oldp+60,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+62,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_hd68abb91__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffffffeU 
                                                           & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)))));
    __Vtemp_hd68abb91__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                 << 2U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffffffeU 
                                                                       & vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0)))) 
                                                   >> 0x20U)));
    __Vtemp_hd68abb91__0[2U] = (8U | ((vlSelf->top__DOT__ext_imm 
                                       << 4U) | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                 >> 0x1eU)));
    __Vtemp_hd68abb91__0[3U] = (0x10U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                          << 6U) | 
                                         (vlSelf->top__DOT__ext_imm 
                                          >> 0x1cU)));
    __Vtemp_hd68abb91__0[4U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                >> 0x1aU);
    bufp->fullWData(oldp+79,(__Vtemp_hd68abb91__0),136);
    bufp->fullQData(oldp+84,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+86,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+88,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+90,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+98,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+138,(vlSelf->clk));
    bufp->fullBit(oldp+139,(vlSelf->rst));
    bufp->fullBit(oldp+140,(vlSelf->wen));
    bufp->fullIData(oldp+141,(vlSelf->instruction),32);
    bufp->fullIData(oldp+142,(vlSelf->pc),32);
    bufp->fullIData(oldp+143,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+144,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+145,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+148,((0x7fU & vlSelf->instruction)),7);
    bufp->fullBit(oldp+149,((0x17U == (0x7fU & vlSelf->instruction))));
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
    bufp->fullWData(oldp+150,(__Vtemp_h9046d7e5__0),102);
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
    bufp->fullWData(oldp+154,(__Vtemp_h0aba8026__0),66);
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
    bufp->fullWData(oldp+157,(__Vtemp_hfd265232__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+161,(__Vtemp_h2ea4f700__0),66);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__alu_ctrl),2);
    bufp->fullIData(oldp+165,(3U),32);
    bufp->fullIData(oldp+166,(2U),32);
    bufp->fullIData(oldp+167,(0x20U),32);
    bufp->fullIData(oldp+168,(0U),32);
    bufp->fullIData(oldp+169,(1U),32);
    bufp->fullIData(oldp+170,(0x22U),32);
    bufp->fullIData(oldp+171,(3U),32);
    bufp->fullIData(oldp+172,(0x80000000U),32);
    bufp->fullIData(oldp+173,(0x21U),32);
    bufp->fullIData(oldp+174,(2U),32);
    bufp->fullIData(oldp+175,(4U),32);
    bufp->fullIData(oldp+176,(4U),32);
    bufp->fullIData(oldp+177,(7U),32);
    bufp->fullCData(oldp+178,(0U),2);
    bufp->fullQData(oldp+179,(0x6e9777d9cULL),36);
    bufp->fullIData(oldp+181,(9U),32);
    bufp->fullQData(oldp+182,(0x2f37f7b9dULL),36);
    bufp->fullIData(oldp+184,(5U),32);
}
