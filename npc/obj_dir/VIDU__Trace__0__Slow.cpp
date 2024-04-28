// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIDU__Syms.h"


VL_ATTR_COLD void VIDU___024root__trace_init_sub__TOP__0(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+160,"Reg.clk", false,-1);
    tracep->declBit(c+161,"Reg.rst", false,-1);
    tracep->declBus(c+162,"din", false,-1, 0,0);
    tracep->declBus(c+163,"dout", false,-1, 0,0);
    tracep->declBit(c+164,"Reg.wen", false,-1);
    tracep->declBit(c+165,"top.clk", false,-1);
    tracep->declBit(c+166,"top.rst", false,-1);
    tracep->declBit(c+167,"top.wen", false,-1);
    tracep->declBus(c+168,"instruction", false,-1, 31,0);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->declBus(c+170,"rd_data", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc", false,-1, 31,0);
    tracep->declBus(c+172,"alu_result", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 0,0);
    tracep->declBus(c+174,"key", false,-1, 0,0);
    tracep->declBus(c+175,"lut", false,-1, 3,0);
    tracep->declBus(c+176,"opcode", false,-1, 6,0);
    tracep->declBus(c+177,"alu_ctrl", false,-1, 1,0);
    tracep->pushNamePrefix("MuxKey ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 0,0);
    tracep->declBus(c+174,"key", false,-1, 0,0);
    tracep->declBus(c+175,"lut", false,-1, 3,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 0,0);
    tracep->declBus(c+174,"key", false,-1, 0,0);
    tracep->declBus(c+199,"default_out", false,-1, 0,0);
    tracep->declBus(c+175,"lut", false,-1, 3,0);
    tracep->declBus(c+196,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+51+i*1,"pair_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+53+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+55+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+57,"lut_out", false,-1, 0,0);
    tracep->declBit(c+58,"hit", false,-1);
    tracep->declBus(c+200,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBus(c+197,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+160,"clk", false,-1);
    tracep->declBit(c+161,"rst", false,-1);
    tracep->declBus(c+162,"din", false,-1, 0,0);
    tracep->declBus(c+163,"dout", false,-1, 0,0);
    tracep->declBit(c+164,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_ctrl_num ");
    tracep->declBus(c+176,"opcode", false,-1, 6,0);
    tracep->declBus(c+177,"alu_ctrl", false,-1, 1,0);
    tracep->pushNamePrefix("i_test ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 1,0);
    tracep->declBus(c+176,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+204,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 1,0);
    tracep->declBus(c+176,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+204,"lut", false,-1, 35,0);
    tracep->declBus(c+206,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+59,"lut_out", false,-1, 1,0);
    tracep->declBit(c+60,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBit(c+167,"wen", false,-1);
    tracep->declBus(c+168,"instruction", false,-1, 31,0);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->declBus(c+170,"rd_data", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc", false,-1, 31,0);
    tracep->declBus(c+172,"alu_result", false,-1, 31,0);
    tracep->declBus(c+178,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+179,"rd_add", false,-1, 4,0);
    tracep->declBus(c+180,"opcode", false,-1, 6,0);
    tracep->declBus(c+80,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+61,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+62,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+181,"ALU_src", false,-1);
    tracep->declBus(c+87,"out_data1", false,-1, 31,0);
    tracep->declBus(c+208,"alu_ctrl", false,-1, 1,0);
    tracep->declBit(c+63,"PC_src", false,-1);
    tracep->declBus(c+64,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+170,"out", false,-1, 31,0);
    tracep->declBus(c+64,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+182,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+170,"out", false,-1, 31,0);
    tracep->declBus(c+64,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+182,"lut", false,-1, 101,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+88+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+94+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+97,"lut_out", false,-1, 31,0);
    tracep->declBit(c+98,"hit", false,-1);
    tracep->declBus(c+213,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBit(c+63,"PC_src", false,-1);
    tracep->declBus(c+172,"alu_result", false,-1, 31,0);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 31,0);
    tracep->declBus(c+63,"key", false,-1, 0,0);
    tracep->declBus(c+214,"default_out", false,-1, 31,0);
    tracep->declArray(c+186,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 31,0);
    tracep->declBus(c+63,"key", false,-1, 0,0);
    tracep->declBus(c+214,"default_out", false,-1, 31,0);
    tracep->declArray(c+186,"lut", false,-1, 65,0);
    tracep->declBus(c+215,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+99+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+103+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+105,"lut_out", false,-1, 31,0);
    tracep->declBit(c+106,"hit", false,-1);
    tracep->declBus(c+200,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+87,"src1", false,-1, 31,0);
    tracep->declBus(c+61,"imm", false,-1, 31,0);
    tracep->declBus(c+208,"alu_ctrl", false,-1, 1,0);
    tracep->declBus(c+172,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+172,"out", false,-1, 31,0);
    tracep->declBus(c+208,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+107,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+172,"out", false,-1, 31,0);
    tracep->declBus(c+208,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+107,"lut", false,-1, 135,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+112+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+120+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+124,"lut_out", false,-1, 31,0);
    tracep->declBit(c+125,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+168,"instruction", false,-1, 31,0);
    tracep->declBus(c+62,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+181,"ALU_src", false,-1);
    tracep->declBus(c+64,"RegWrite", false,-1, 1,0);
    tracep->declBit(c+63,"PC_src", false,-1);
    tracep->declBus(c+179,"rd_add", false,-1, 4,0);
    tracep->declBus(c+178,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+180,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+180,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"Ext_type", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 1,0);
    tracep->declBus(c+180,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+216,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 1,0);
    tracep->declBus(c+180,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+216,"lut", false,-1, 35,0);
    tracep->declBus(c+206,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+65,"lut_out", false,-1, 1,0);
    tracep->declBit(c+66,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+180,"opcode", false,-1, 6,0);
    tracep->declBus(c+64,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 1,0);
    tracep->declBus(c+180,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+218,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+196,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 1,0);
    tracep->declBus(c+180,"key", false,-1, 6,0);
    tracep->declBus(c+203,"default_out", false,-1, 1,0);
    tracep->declQuad(c+218,"lut", false,-1, 35,0);
    tracep->declBus(c+206,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+38+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+42+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+67,"lut_out", false,-1, 1,0);
    tracep->declBit(c+68,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+62,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+168,"inst", false,-1, 31,0);
    tracep->declBus(c+61,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->declBus(c+62,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+189,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->declBus(c+62,"key", false,-1, 1,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+189,"lut", false,-1, 101,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+69+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+46+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+75+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+78,"lut_out", false,-1, 31,0);
    tracep->declBit(c+79,"hit", false,-1);
    tracep->declBus(c+213,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+220,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBus(c+170,"wdata", false,-1, 31,0);
    tracep->declBus(c+179,"waddr", false,-1, 4,0);
    tracep->declBit(c+167,"wen", false,-1);
    tracep->declBus(c+178,"Addr1", false,-1, 4,0);
    tracep->declBus(c+80,"RData1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+128+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->declBus(c+181,"key", false,-1, 0,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+196,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+197,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->declBus(c+181,"key", false,-1, 0,0);
    tracep->declBus(c+211,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 65,0);
    tracep->declBus(c+215,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+81+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+126,"lut_out", false,-1, 31,0);
    tracep->declBit(c+127,"hit", false,-1);
    tracep->declBus(c+200,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VIDU___024root__trace_init_top(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root__trace_init_top\n"); );
    // Body
    VIDU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIDU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VIDU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VIDU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIDU___024root__trace_register(VIDU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VIDU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VIDU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VIDU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIDU___024root__trace_full_sub_0(VIDU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VIDU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root__trace_full_top_0\n"); );
    // Init
    VIDU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIDU___024root*>(voidSelf);
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIDU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VIDU___024root__trace_full_sub_0(VIDU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_hd68abb91__0;
    VlWide<4>/*127:0*/ __Vtemp_h9046d7e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h0aba8026__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd265232__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+2,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+3,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+4,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+5,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+6,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+7,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+8,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+9,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+11,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+12,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+51,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[0]),2);
    bufp->fullCData(oldp+52,(vlSelf->MuxKey__DOT__i0__DOT__pair_list[1]),2);
    bufp->fullBit(oldp+53,(vlSelf->MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+54,(vlSelf->MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+55,(vlSelf->MuxKey__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+56,(vlSelf->MuxKey__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+57,(vlSelf->MuxKey__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+58,(vlSelf->MuxKey__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+59,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+60,(vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__PC_src));
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__RegWrite),2);
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
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__out_data1),32);
    bufp->fullQData(oldp+88,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+90,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+92,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+107,(__Vtemp_hd68abb91__0),136);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+160,(vlSelf->Reg__02Eclk));
    bufp->fullBit(oldp+161,(vlSelf->Reg__02Erst));
    bufp->fullBit(oldp+162,(vlSelf->din));
    bufp->fullBit(oldp+163,(vlSelf->dout));
    bufp->fullBit(oldp+164,(vlSelf->Reg__02Ewen));
    bufp->fullBit(oldp+165,(vlSelf->top__02Eclk));
    bufp->fullBit(oldp+166,(vlSelf->top__02Erst));
    bufp->fullBit(oldp+167,(vlSelf->top__02Ewen));
    bufp->fullIData(oldp+168,(vlSelf->instruction),32);
    bufp->fullIData(oldp+169,(vlSelf->pc),32);
    bufp->fullIData(oldp+170,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+171,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+172,(vlSelf->alu_result),32);
    bufp->fullBit(oldp+173,(vlSelf->out));
    bufp->fullBit(oldp+174,(vlSelf->key));
    bufp->fullCData(oldp+175,(vlSelf->lut),4);
    bufp->fullCData(oldp+176,(vlSelf->opcode),7);
    bufp->fullCData(oldp+177,(vlSelf->alu_ctrl),2);
    bufp->fullCData(oldp+178,((0x1fU & (vlSelf->instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+179,((0x1fU & (vlSelf->instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+180,((0x7fU & vlSelf->instruction)),7);
    bufp->fullBit(oldp+181,((0x17U == (0x7fU & vlSelf->instruction))));
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
    bufp->fullWData(oldp+182,(__Vtemp_h9046d7e5__0),102);
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
    bufp->fullWData(oldp+186,(__Vtemp_h0aba8026__0),66);
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
    bufp->fullIData(oldp+196,(2U),32);
    bufp->fullIData(oldp+197,(1U),32);
    bufp->fullIData(oldp+198,(0U),32);
    bufp->fullBit(oldp+199,(0U));
    bufp->fullIData(oldp+200,(2U),32);
    bufp->fullIData(oldp+201,(4U),32);
    bufp->fullIData(oldp+202,(7U),32);
    bufp->fullCData(oldp+203,(0U),2);
    bufp->fullQData(oldp+204,(0x2e3777d9fULL),36);
    bufp->fullIData(oldp+206,(9U),32);
    bufp->fullIData(oldp+207,(4U),32);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__alu_ctrl),2);
    bufp->fullIData(oldp+209,(3U),32);
    bufp->fullIData(oldp+210,(0x20U),32);
    bufp->fullIData(oldp+211,(0U),32);
    bufp->fullIData(oldp+212,(0x22U),32);
    bufp->fullIData(oldp+213,(3U),32);
    bufp->fullIData(oldp+214,(0x80000000U),32);
    bufp->fullIData(oldp+215,(0x21U),32);
    bufp->fullQData(oldp+216,(0x6e9777d9cULL),36);
    bufp->fullQData(oldp+218,(0x2f37f7b9dULL),36);
    bufp->fullIData(oldp+220,(5U),32);
}
