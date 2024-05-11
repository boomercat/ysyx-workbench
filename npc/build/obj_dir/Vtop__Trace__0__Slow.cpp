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
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBit(c+173,"wen", false,-1);
    tracep->declBus(c+174,"instruction", false,-1, 31,0);
    tracep->declBus(c+175,"pc", false,-1, 31,0);
    tracep->declBus(c+176,"rd_data", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc", false,-1, 31,0);
    tracep->declBus(c+178,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBit(c+173,"wen", false,-1);
    tracep->declBus(c+174,"instruction", false,-1, 31,0);
    tracep->declBus(c+175,"pc", false,-1, 31,0);
    tracep->declBus(c+176,"rd_data", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc", false,-1, 31,0);
    tracep->declBus(c+178,"alu_result", false,-1, 31,0);
    tracep->declBus(c+179,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+180,"rd_add", false,-1, 4,0);
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->declBus(c+88,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+64,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+65,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+182,"ALU_src", false,-1);
    tracep->declBus(c+89,"out_data1", false,-1, 31,0);
    tracep->declBus(c+66,"alu_ctrl", false,-1, 1,0);
    tracep->declBus(c+67,"PC_src", false,-1, 1,0);
    tracep->declBus(c+68,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+183,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+183,"lut", false,-1, 101,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+90+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+96+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+99,"lut_out", false,-1, 31,0);
    tracep->declBit(c+100,"hit", false,-1);
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBit(c+172,"rst", false,-1);
    tracep->declBus(c+67,"PC_src", false,-1, 1,0);
    tracep->declBus(c+178,"alu_result", false,-1, 31,0);
    tracep->declBus(c+175,"pc", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 1,0);
    tracep->declBus(c+205,"default_out", false,-1, 31,0);
    tracep->declArray(c+187,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 1,0);
    tracep->declBus(c+205,"default_out", false,-1, 31,0);
    tracep->declArray(c+187,"lut", false,-1, 101,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+101+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+107+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+110,"lut_out", false,-1, 31,0);
    tracep->declBit(c+111,"hit", false,-1);
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+89,"src1", false,-1, 31,0);
    tracep->declBus(c+64,"imm", false,-1, 31,0);
    tracep->declBus(c+66,"alu_ctrl", false,-1, 1,0);
    tracep->declBus(c+178,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 31,0);
    tracep->declBus(c+66,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+112,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 31,0);
    tracep->declBus(c+66,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+112,"lut", false,-1, 135,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+117+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+125+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+129,"lut_out", false,-1, 31,0);
    tracep->declBit(c+130,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+174,"instruction", false,-1, 31,0);
    tracep->declBus(c+65,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+182,"ALU_src", false,-1);
    tracep->declBus(c+68,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+67,"PC_src", false,-1, 1,0);
    tracep->declBus(c+180,"rd_add", false,-1, 4,0);
    tracep->declBus(c+179,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+66,"alu_ctrl", false,-1, 1,0);
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->declBus(c+67,"PC_src", false,-1, 1,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+210,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+210,"lut", false,-1, 35,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+69,"lut_out", false,-1, 1,0);
    tracep->declBit(c+70,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->declBus(c+66,"alu_ctrl", false,-1, 1,0);
    tracep->pushNamePrefix("i_test ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+213,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+213,"lut", false,-1, 35,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+71,"lut_out", false,-1, 1,0);
    tracep->declBit(c+72,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->declBus(c+65,"Ext_type", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+215,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+65,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+215,"lut", false,-1, 35,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+73,"lut_out", false,-1, 1,0);
    tracep->declBit(c+74,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+181,"opcode", false,-1, 6,0);
    tracep->declBus(c+68,"RegWrite", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+217,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 1,0);
    tracep->declBus(c+181,"key", false,-1, 6,0);
    tracep->declBus(c+209,"default_out", false,-1, 1,0);
    tracep->declQuad(c+217,"lut", false,-1, 35,0);
    tracep->declBus(c+212,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+51+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+55+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+75,"lut_out", false,-1, 1,0);
    tracep->declBit(c+76,"hit", false,-1);
    tracep->declBus(c+207,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+65,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+174,"inst", false,-1, 31,0);
    tracep->declBus(c+64,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+191,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+198,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+199,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->declBus(c+65,"key", false,-1, 1,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+191,"lut", false,-1, 101,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+77+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+59+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+83+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+86,"lut_out", false,-1, 31,0);
    tracep->declBit(c+87,"hit", false,-1);
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+219,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+171,"clk", false,-1);
    tracep->declBus(c+176,"wdata", false,-1, 31,0);
    tracep->declBus(c+180,"waddr", false,-1, 4,0);
    tracep->declBit(c+173,"wen", false,-1);
    tracep->declBus(c+179,"Addr1", false,-1, 4,0);
    tracep->declBus(c+88,"RData1", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+139+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+182,"key", false,-1, 0,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+195,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->declBus(c+182,"key", false,-1, 0,0);
    tracep->declBus(c+201,"default_out", false,-1, 31,0);
    tracep->declArray(c+195,"lut", false,-1, 65,0);
    tracep->declBus(c+220,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+131+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+62+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+135+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+137,"lut_out", false,-1, 31,0);
    tracep->declBit(c+138,"hit", false,-1);
    tracep->declBus(c+221,"i", false,-1, 31,0);
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
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__alu_ctrl),2);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__PC_src),2);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__idu__DOT__ctrl_num_type__DOT__i_test__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+77,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+79,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__out_data1),32);
    bufp->fullQData(oldp+90,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+92,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+94,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+105,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+112,(__Vtemp_hd68abb91__0),136);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+121,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+123,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+171,(vlSelf->clk));
    bufp->fullBit(oldp+172,(vlSelf->rst));
    bufp->fullBit(oldp+173,(vlSelf->wen));
    bufp->fullIData(oldp+174,(vlSelf->instruction),32);
    bufp->fullIData(oldp+175,(vlSelf->pc),32);
    bufp->fullIData(oldp+176,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+177,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+178,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+179,((0x1fU & (vlSelf->instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+180,((0x1fU & (vlSelf->instruction 
                                        >> 7U))),5);
    bufp->fullCData(oldp+181,((0x7fU & vlSelf->instruction)),7);
    bufp->fullBit(oldp+182,((0x17U == (0x7fU & vlSelf->instruction))));
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
    bufp->fullWData(oldp+183,(__Vtemp_h9046d7e5__0),102);
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
    bufp->fullWData(oldp+187,(__Vtemp_hbdeed6a0__0),102);
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
    bufp->fullWData(oldp+191,(__Vtemp_hfd265232__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+195,(__Vtemp_h2ea4f700__0),66);
    bufp->fullIData(oldp+198,(3U),32);
    bufp->fullIData(oldp+199,(2U),32);
    bufp->fullIData(oldp+200,(0x20U),32);
    bufp->fullIData(oldp+201,(0U),32);
    bufp->fullIData(oldp+202,(1U),32);
    bufp->fullIData(oldp+203,(0x22U),32);
    bufp->fullIData(oldp+204,(3U),32);
    bufp->fullIData(oldp+205,(0x80000000U),32);
    bufp->fullIData(oldp+206,(4U),32);
    bufp->fullIData(oldp+207,(4U),32);
    bufp->fullIData(oldp+208,(7U),32);
    bufp->fullCData(oldp+209,(0U),2);
    bufp->fullQData(oldp+210,(0x2e3737b9eULL),36);
    bufp->fullIData(oldp+212,(9U),32);
    bufp->fullQData(oldp+213,(0x2e3777d9fULL),36);
    bufp->fullQData(oldp+215,(0x6e9777d9cULL),36);
    bufp->fullQData(oldp+217,(0x2f37f7b9dULL),36);
    bufp->fullIData(oldp+219,(5U),32);
    bufp->fullIData(oldp+220,(0x21U),32);
    bufp->fullIData(oldp+221,(2U),32);
}
