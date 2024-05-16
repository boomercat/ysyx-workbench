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
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"rst", false,-1);
    tracep->declBit(c+170,"wen", false,-1);
    tracep->declBus(c+171,"instruction", false,-1, 31,0);
    tracep->declBus(c+172,"pc", false,-1, 31,0);
    tracep->declBus(c+173,"rd_data", false,-1, 31,0);
    tracep->declBus(c+174,"next_pc", false,-1, 31,0);
    tracep->declBus(c+175,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"rst", false,-1);
    tracep->declBit(c+170,"wen", false,-1);
    tracep->declBus(c+171,"instruction", false,-1, 31,0);
    tracep->declBus(c+172,"pc", false,-1, 31,0);
    tracep->declBus(c+173,"rd_data", false,-1, 31,0);
    tracep->declBus(c+174,"next_pc", false,-1, 31,0);
    tracep->declBus(c+175,"alu_result", false,-1, 31,0);
    tracep->declBus(c+176,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+177,"rd_add", false,-1, 4,0);
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+80,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+59,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+60,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+179,"ALU_src", false,-1);
    tracep->declBus(c+81,"out_data1", false,-1, 31,0);
    tracep->declBus(c+135,"alu_ctrl", false,-1, 2,0);
    tracep->declBus(c+61,"PC_src", false,-1, 1,0);
    tracep->declBus(c+62,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+62,"key", false,-1, 1,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+180,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+62,"key", false,-1, 1,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+180,"lut", false,-1, 101,0);
    tracep->declBus(c+201,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+82+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+88+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+91,"lut_out", false,-1, 31,0);
    tracep->declBit(c+92,"hit", false,-1);
    tracep->declBus(c+202,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"rst", false,-1);
    tracep->declBus(c+61,"PC_src", false,-1, 1,0);
    tracep->declBus(c+175,"alu_result", false,-1, 31,0);
    tracep->declBus(c+172,"pc", false,-1, 31,0);
    tracep->declBus(c+174,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 31,0);
    tracep->declBus(c+61,"key", false,-1, 1,0);
    tracep->declBus(c+203,"default_out", false,-1, 31,0);
    tracep->declArray(c+184,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 31,0);
    tracep->declBus(c+61,"key", false,-1, 1,0);
    tracep->declBus(c+203,"default_out", false,-1, 31,0);
    tracep->declArray(c+184,"lut", false,-1, 101,0);
    tracep->declBus(c+201,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+93+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+99+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+102,"lut_out", false,-1, 31,0);
    tracep->declBit(c+103,"hit", false,-1);
    tracep->declBus(c+202,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+81,"src1", false,-1, 31,0);
    tracep->declBus(c+59,"imm", false,-1, 31,0);
    tracep->declBus(c+135,"alu_ctrl", false,-1, 2,0);
    tracep->declBus(c+175,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 2,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+104,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+175,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 2,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+104,"lut", false,-1, 174,0);
    tracep->declBus(c+205,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+110+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+120+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+125,"lut_out", false,-1, 31,0);
    tracep->declBit(c+126,"hit", false,-1);
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBus(c+171,"instruction", false,-1, 31,0);
    tracep->declBus(c+60,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+179,"ALU_src", false,-1);
    tracep->declBus(c+62,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+61,"PC_src", false,-1, 1,0);
    tracep->declBus(c+177,"rd_add", false,-1, 4,0);
    tracep->declBus(c+176,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+135,"alu_ctrl", false,-1, 2,0);
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+61,"PC_src", false,-1, 1,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+210,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+210,"lut", false,-1, 35,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+63,"lut_out", false,-1, 1,0);
    tracep->declBit(c+64,"hit", false,-1);
    tracep->declBus(c+213,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBus(c+171,"instruction", false,-1, 31,0);
    tracep->declBus(c+135,"alu_ctrl", false,-1, 2,0);
    tracep->declBus(c+188,"right_inst", false,-1, 14,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+60,"Ext_type", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+214,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+214,"lut", false,-1, 44,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+24+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+34+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+65,"lut_out", false,-1, 1,0);
    tracep->declBit(c+66,"hit", false,-1);
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+216,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+204,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 1,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+216,"lut", false,-1, 44,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+39+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+44+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+49+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+67,"lut_out", false,-1, 1,0);
    tracep->declBit(c+68,"hit", false,-1);
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+60,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+171,"inst", false,-1, 31,0);
    tracep->declBus(c+59,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+60,"key", false,-1, 1,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+189,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+60,"key", false,-1, 1,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+189,"lut", false,-1, 101,0);
    tracep->declBus(c+201,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+69+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+75+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+78,"lut_out", false,-1, 31,0);
    tracep->declBit(c+79,"hit", false,-1);
    tracep->declBus(c+202,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+204,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+173,"wdata", false,-1, 31,0);
    tracep->declBus(c+177,"waddr", false,-1, 4,0);
    tracep->declBit(c+170,"wen", false,-1);
    tracep->declBus(c+176,"Addr1", false,-1, 4,0);
    tracep->declBus(c+80,"RData1", false,-1, 31,0);
    tracep->declBus(c+218,"j", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+136+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+197,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->declBus(c+179,"key", false,-1, 0,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+197,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->declBus(c+179,"key", false,-1, 0,0);
    tracep->declBus(c+199,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 65,0);
    tracep->declBus(c+219,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+127+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+131+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+133,"lut_out", false,-1, 31,0);
    tracep->declBit(c+134,"hit", false,-1);
    tracep->declBus(c+220,"i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_h44beaa69__0;
    VlWide<4>/*127:0*/ __Vtemp_h9046d7e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdeed6a0__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd265232__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),2);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__PC_src),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__out_data1),32);
    bufp->fullQData(oldp+82,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+84,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+86,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+95,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_h44beaa69__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(
                                                          ((vlSelf->top__DOT__out_data1 
                                                            < vlSelf->top__DOT__ext_imm)
                                                            ? 1U
                                                            : 0U)))));
    __Vtemp_h44beaa69__0[1U] = ((0xfffffff0U & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                << 3U)) 
                                | (IData)(((0x400000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->top__DOT__out_data1 
                                                                < vlSelf->top__DOT__ext_imm)
                                                                ? 1U
                                                                : 0U)))) 
                                           >> 0x20U)));
    __Vtemp_h44beaa69__0[2U] = (0x18U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                          << 6U) | 
                                         (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                          >> 0x1dU)));
    __Vtemp_h44beaa69__0[3U] = (0x80U | ((vlSelf->top__DOT__ext_imm 
                                          << 9U) | 
                                         (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                          >> 0x1aU)));
    __Vtemp_h44beaa69__0[4U] = (0x200U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__ext_imm 
                                             >> 0x17U)));
    __Vtemp_h44beaa69__0[5U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                >> 0x14U);
    bufp->fullWData(oldp+104,(__Vtemp_h44beaa69__0),175);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+127,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__alu_ctrl),3);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+168,(vlSelf->clk));
    bufp->fullBit(oldp+169,(vlSelf->rst));
    bufp->fullBit(oldp+170,(vlSelf->wen));
    bufp->fullIData(oldp+171,(vlSelf->instruction),32);
    bufp->fullIData(oldp+172,(vlSelf->pc),32);
    bufp->fullIData(oldp+173,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+174,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+175,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+176,((0x1fU & (vlSelf->instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+177,((0x1fU & (vlSelf->instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+178,((0x7fU & vlSelf->instruction)),7);
    bufp->fullBit(oldp+179,((0x17U == (0x7fU & vlSelf->instruction))));
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
    bufp->fullWData(oldp+180,(__Vtemp_h9046d7e5__0),102);
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
    bufp->fullWData(oldp+184,(__Vtemp_hbdeed6a0__0),102);
    bufp->fullSData(oldp+188,((0x7fffU & vlSelf->instruction)),15);
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
    bufp->fullWData(oldp+189,(__Vtemp_hfd265232__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+193,(__Vtemp_h2ea4f700__0),66);
    bufp->fullIData(oldp+196,(3U),32);
    bufp->fullIData(oldp+197,(2U),32);
    bufp->fullIData(oldp+198,(0x20U),32);
    bufp->fullIData(oldp+199,(0U),32);
    bufp->fullIData(oldp+200,(1U),32);
    bufp->fullIData(oldp+201,(0x22U),32);
    bufp->fullIData(oldp+202,(3U),32);
    bufp->fullIData(oldp+203,(0x80000000U),32);
    bufp->fullIData(oldp+204,(5U),32);
    bufp->fullIData(oldp+205,(0x23U),32);
    bufp->fullIData(oldp+206,(5U),32);
    bufp->fullIData(oldp+207,(4U),32);
    bufp->fullIData(oldp+208,(7U),32);
    bufp->fullCData(oldp+209,(0U),2);
    bufp->fullQData(oldp+210,(0x2e3737b9eULL),36);
    bufp->fullIData(oldp+212,(9U),32);
    bufp->fullIData(oldp+213,(4U),32);
    bufp->fullQData(oldp+214,(0x4f6e9777d9cULL),45);
    bufp->fullQData(oldp+216,(0x5e2737f7b9dULL),45);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__reg_file__DOT__j),32);
    bufp->fullIData(oldp+219,(0x21U),32);
    bufp->fullIData(oldp+220,(2U),32);
}
