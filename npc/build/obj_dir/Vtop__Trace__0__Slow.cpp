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
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBit(c+334,"rst", false,-1);
    tracep->declBit(c+335,"wen", false,-1);
    tracep->declBus(c+336,"pc", false,-1, 31,0);
    tracep->declBus(c+337,"rd_data", false,-1, 31,0);
    tracep->declBus(c+338,"next_pc", false,-1, 31,0);
    tracep->declBus(c+339,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBit(c+334,"rst", false,-1);
    tracep->declBit(c+335,"wen", false,-1);
    tracep->declBus(c+336,"pc", false,-1, 31,0);
    tracep->declBus(c+337,"rd_data", false,-1, 31,0);
    tracep->declBus(c+338,"next_pc", false,-1, 31,0);
    tracep->declBus(c+339,"alu_result", false,-1, 31,0);
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+99,"rd_add", false,-1, 4,0);
    tracep->declBus(c+100,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+146,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+101,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+147,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+102,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+103,"Ext_type", false,-1, 2,0);
    tracep->declBit(c+104,"ALU_src", false,-1);
    tracep->declBus(c+148,"src1_data", false,-1, 31,0);
    tracep->declBus(c+149,"src2_data", false,-1, 31,0);
    tracep->declBus(c+105,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+106,"PC_src", false,-1, 1,0);
    tracep->declBus(c+107,"RegWrite", false,-1, 1,0);
    tracep->declBit(c+353,"vaild", false,-1);
    tracep->declBus(c+108,"instruction", false,-1, 31,0);
    tracep->declBus(c+150,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+109,"rs2_valid", false,-1);
    tracep->declBit(c+110,"memory_valid", false,-1);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+354,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+337,"out", false,-1, 31,0);
    tracep->declBus(c+107,"key", false,-1, 1,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+354,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+337,"out", false,-1, 31,0);
    tracep->declBus(c+107,"key", false,-1, 1,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 135,0);
    tracep->declBus(c+359,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+151+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+159+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+163,"lut_out", false,-1, 31,0);
    tracep->declBit(c+164,"hit", false,-1);
    tracep->declBus(c+360,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBit(c+334,"rst", false,-1);
    tracep->declBus(c+106,"PC_src", false,-1, 1,0);
    tracep->declBus(c+339,"alu_result", false,-1, 31,0);
    tracep->declBus(c+336,"pc", false,-1, 31,0);
    tracep->declBus(c+102,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+338,"next_pc", false,-1, 31,0);
    tracep->declBus(c+165,"next_pc_type", false,-1, 1,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+354,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+338,"out", false,-1, 31,0);
    tracep->declBus(c+165,"key", false,-1, 1,0);
    tracep->declBus(c+361,"default_out", false,-1, 31,0);
    tracep->declArray(c+345,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+354,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+338,"out", false,-1, 31,0);
    tracep->declBus(c+165,"key", false,-1, 1,0);
    tracep->declBus(c+361,"default_out", false,-1, 31,0);
    tracep->declArray(c+345,"lut", false,-1, 135,0);
    tracep->declBus(c+359,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+166+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+174+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+178,"lut_out", false,-1, 31,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+360,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+148,"src1", false,-1, 31,0);
    tracep->declBus(c+149,"src2", false,-1, 31,0);
    tracep->declBus(c+105,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+339,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+339,"out", false,-1, 31,0);
    tracep->declBus(c+105,"key", false,-1, 4,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+180,"lut", false,-1, 665,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+362,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+363,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+339,"out", false,-1, 31,0);
    tracep->declBus(c+105,"key", false,-1, 4,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+180,"lut", false,-1, 665,0);
    tracep->declBus(c+364,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 18; ++i) {
        tracep->declQuad(c+201+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 18; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 18; ++i) {
        tracep->declBus(c+237+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+255,"lut_out", false,-1, 31,0);
    tracep->declBit(c+256,"hit", false,-1);
    tracep->declBus(c+365,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBus(c+108,"instruction", false,-1, 31,0);
    tracep->declBus(c+103,"Ext_type", false,-1, 2,0);
    tracep->declBit(c+104,"ALU_src", false,-1);
    tracep->declBus(c+107,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+106,"PC_src", false,-1, 1,0);
    tracep->declBus(c+99,"rd_add", false,-1, 4,0);
    tracep->declBus(c+100,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+105,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+101,"rs2_add", false,-1, 4,0);
    tracep->declBit(c+110,"memory_valid", false,-1);
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBit(c+111,"slli_cond", false,-1);
    tracep->declBit(c+112,"srli_cond", false,-1);
    tracep->declBit(c+113,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+106,"PC_src", false,-1, 1,0);
    tracep->declBus(c+366,"pc_plus", false,-1, 1,0);
    tracep->declBus(c+367,"pc_ALUresult", false,-1, 1,0);
    tracep->declBus(c+368,"ALU_result", false,-1, 1,0);
    tracep->declBus(c+369,"branch", false,-1, 1,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+106,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 1,0);
    tracep->declQuad(c+371,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+106,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 1,0);
    tracep->declQuad(c+371,"lut", false,-1, 44,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+32+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+37+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+114,"lut_out", false,-1, 1,0);
    tracep->declBit(c+115,"hit", false,-1);
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBus(c+108,"instruction", false,-1, 31,0);
    tracep->declBus(c+105,"alu_ctrl", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+103,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+375,"IMM_I", false,-1, 2,0);
    tracep->declBus(c+376,"IMM_U", false,-1, 2,0);
    tracep->declBus(c+377,"IMM_Jal", false,-1, 2,0);
    tracep->declBus(c+378,"IMM_S", false,-1, 2,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+370,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 2,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+378,"default_out", false,-1, 2,0);
    tracep->declArray(c+380,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+370,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 2,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+378,"default_out", false,-1, 2,0);
    tracep->declArray(c+380,"lut", false,-1, 69,0);
    tracep->declBus(c+383,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+42+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+49+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+116,"lut_out", false,-1, 2,0);
    tracep->declBit(c+117,"hit", false,-1);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+107,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+367,"pc_plus4", false,-1, 1,0);
    tracep->declBus(c+368,"ALU_result", false,-1, 1,0);
    tracep->declBus(c+369,"EXT_IMM", false,-1, 1,0);
    tracep->declBus(c+366,"MEMORY_DATA", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+370,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 1,0);
    tracep->declQuad(c+385,"lut", false,-1, 62,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+370,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+370,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 1,0);
    tracep->declQuad(c+385,"lut", false,-1, 62,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+63+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+70+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+77+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+118,"lut_out", false,-1, 1,0);
    tracep->declBit(c+119,"hit", false,-1);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+336,"pc", false,-1, 31,0);
    tracep->declBus(c+108,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+103,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+108,"inst", false,-1, 31,0);
    tracep->declBus(c+102,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->declBus(c+103,"key", false,-1, 2,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+120,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->declBus(c+103,"key", false,-1, 2,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+120,"lut", false,-1, 174,0);
    tracep->declBus(c+387,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+126+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+84+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+136+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+141,"lut_out", false,-1, 31,0);
    tracep->declBit(c+142,"hit", false,-1);
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBus(c+108,"instruction", false,-1, 31,0);
    tracep->declBus(c+339,"addr", false,-1, 31,0);
    tracep->declBus(c+147,"write_data", false,-1, 31,0);
    tracep->declBus(c+150,"mout_data", false,-1, 31,0);
    tracep->declBus(c+143,"extend_src", false,-1, 9,0);
    tracep->declBit(c+110,"read_valid", false,-1);
    tracep->declBit(c+144,"write_valid", false,-1);
    tracep->declBus(c+145,"wmask", false,-1, 7,0);
    tracep->declBus(c+257,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+383,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+150,"out", false,-1, 31,0);
    tracep->declBus(c+143,"key", false,-1, 9,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+258,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+383,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+150,"out", false,-1, 31,0);
    tracep->declBus(c+143,"key", false,-1, 9,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+258,"lut", false,-1, 209,0);
    tracep->declBus(c+388,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+265+i*2,"pair_list", true,(i+0), 41,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+89+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+275+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+280,"lut_out", false,-1, 31,0);
    tracep->declBit(c+281,"hit", false,-1);
    tracep->declBus(c+374,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+363,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+333,"clk", false,-1);
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+337,"wdata", false,-1, 31,0);
    tracep->declBus(c+99,"waddr", false,-1, 4,0);
    tracep->declBit(c+335,"wen", false,-1);
    tracep->declBus(c+100,"Addr1", false,-1, 4,0);
    tracep->declBus(c+146,"RData1", false,-1, 31,0);
    tracep->declBus(c+101,"Addr2", false,-1, 4,0);
    tracep->declBus(c+147,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+301+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+148,"out", false,-1, 31,0);
    tracep->declBus(c+104,"key", false,-1, 0,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+350,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+148,"out", false,-1, 31,0);
    tracep->declBus(c+104,"key", false,-1, 0,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+350,"lut", false,-1, 65,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+282+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+94+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+286+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+288,"lut_out", false,-1, 31,0);
    tracep->declBit(c+289,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 0,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+290,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+356,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+149,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 0,0);
    tracep->declBus(c+357,"default_out", false,-1, 31,0);
    tracep->declArray(c+290,"lut", false,-1, 65,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+293+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+96+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+297+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+299,"lut_out", false,-1, 31,0);
    tracep->declBit(c+300,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_haedb7302__0;
    VlWide<21>/*671:0*/ __Vtemp_h834000df__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
    VlWide<3>/*95:0*/ __Vtemp_h020a3be6__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b997cca__0;
    VlWide<5>/*159:0*/ __Vtemp_hce3a3f54__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b0d0cfb__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),5);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[12]),5);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[13]),5);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[14]),5);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[15]),5);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[16]),5);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[17]),5);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),2);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),9);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),2);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+89,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+90,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+91,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+92,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+93,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+98,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->top__DOT__instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+101,((0x1fU & (vlSelf->top__DOT__instruction 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__Ext_type),3);
    bufp->fullBit(oldp+104,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__PC_src),2);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__rs2_valid));
    bufp->fullBit(oldp+110,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+111,((IData)((0x2001013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+112,((IData)((0x2005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+113,((IData)((0x82005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
    __Vtemp_haedb7302__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (vlSelf->top__DOT__instruction 
                                                             >> 0x1fU))) 
                                                 << 0xfU) 
                                                | (0x7ff8U 
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
                                         | (0x3fU & 
                                            ((- (IData)(
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
    bufp->fullWData(oldp+120,(__Vtemp_haedb7302__0),175);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+143,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
    bufp->fullBit(oldp+144,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+145,(((0U == (7U & (vlSelf->top__DOT__instruction 
                                             >> 0xcU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelf->top__DOT__instruction 
                                                   >> 0xcU)))
                                         ? 3U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 0xcU)))
                                                  ? 0xfU
                                                  : 0U)))),8);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__src2_data),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__memory_out_data),32);
    bufp->fullQData(oldp+151,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+153,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+155,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+157,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),2);
    bufp->fullQData(oldp+166,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+168,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+170,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_h834000df__0[0U] = (IData)((0x1200000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_ha493ef8e__0))));
    __Vtemp_h834000df__0[1U] = (((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                 << 5U) | (IData)((
                                                   (0x1200000000ULL 
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
    __Vtemp_h834000df__0[8U] = (3U | (((0x1fU >= (0x3fU 
                                                  & vlSelf->top__DOT__src2_data))
                                        ? (vlSelf->top__DOT__src1_data 
                                           >> (0x3fU 
                                               & vlSelf->top__DOT__src2_data))
                                        : 0U) << 3U));
    __Vtemp_h834000df__0[9U] = (0x50U | ((((0x1fU >= 
                                            (0x3fU 
                                             & vlSelf->top__DOT__src2_data))
                                            ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__src1_data, 
                                                             (0x3fU 
                                                              & vlSelf->top__DOT__src2_data))
                                            : (- (vlSelf->top__DOT__src1_data 
                                                  >> 0x1fU))) 
                                          << 8U) | 
                                         (((0x1fU >= 
                                            (0x3fU 
                                             & vlSelf->top__DOT__src2_data))
                                            ? (vlSelf->top__DOT__src1_data 
                                               >> (0x3fU 
                                                   & vlSelf->top__DOT__src2_data))
                                            : 0U) >> 0x1dU)));
    __Vtemp_h834000df__0[0xaU] = (0x900U | ((((0x1fU 
                                               >= (0x3fU 
                                                   & vlSelf->top__DOT__src2_data))
                                               ? (vlSelf->top__DOT__src1_data 
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
    __Vtemp_h834000df__0[0xbU] = (0x10000U | (((vlSelf->top__DOT__src1_data 
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
    __Vtemp_h834000df__0[0xcU] = (0x1c0000U | (((vlSelf->top__DOT__src1_data 
                                                 | vlSelf->top__DOT__src2_data) 
                                                << 0x17U) 
                                               | ((vlSelf->top__DOT__src1_data 
                                                   & vlSelf->top__DOT__src2_data) 
                                                  >> 0xeU)));
    __Vtemp_h834000df__0[0xdU] = (0x3000000U | (((vlSelf->top__DOT__src1_data 
                                                  ^ vlSelf->top__DOT__src2_data) 
                                                 << 0x1cU) 
                                                | ((vlSelf->top__DOT__src1_data 
                                                    | vlSelf->top__DOT__src2_data) 
                                                   >> 9U)));
    __Vtemp_h834000df__0[0xeU] = (0x50000000U | ((vlSelf->top__DOT__src1_data 
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
    __Vtemp_h834000df__0[0x13U] = (0x10000U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                << 0x15U) 
                                               | (vlSelf->top__DOT__src2_data 
                                                  >> 0x10U)));
    __Vtemp_h834000df__0[0x14U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                   >> 0xbU);
    bufp->fullWData(oldp+180,(__Vtemp_h834000df__0),666);
    bufp->fullQData(oldp+201,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+203,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+205,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+207,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+209,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+211,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+215,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+217,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+219,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+221,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullQData(oldp+223,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),37);
    bufp->fullQData(oldp+225,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[12]),37);
    bufp->fullQData(oldp+227,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[13]),37);
    bufp->fullQData(oldp+229,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[14]),37);
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[15]),37);
    bufp->fullQData(oldp+233,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[16]),37);
    bufp->fullQData(oldp+235,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[17]),37);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[16]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[17]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
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
    __Vtemp_h392ba67f__0[6U] = (0x300U | (0xffU & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__memory_1__DOT__rdata 
                                                                  >> 7U)))) 
                                                   >> 0x10U)));
    bufp->fullWData(oldp+258,(__Vtemp_h392ba67f__0),210);
    bufp->fullQData(oldp+265,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
    bufp->fullQData(oldp+267,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
    bufp->fullQData(oldp+269,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
    bufp->fullQData(oldp+271,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
    bufp->fullQData(oldp+273,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+282,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+284,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    __Vtemp_h020a3be6__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
    __Vtemp_h020a3be6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                   >> 0x20U)));
    __Vtemp_h020a3be6__0[2U] = (vlSelf->top__DOT__ext_imm 
                                >> 0x1fU);
    bufp->fullWData(oldp+290,(__Vtemp_h020a3be6__0),66);
    bufp->fullQData(oldp+293,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+295,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+328,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+333,(vlSelf->clk));
    bufp->fullBit(oldp+334,(vlSelf->rst));
    bufp->fullBit(oldp+335,(vlSelf->wen));
    bufp->fullIData(oldp+336,(vlSelf->pc),32);
    bufp->fullIData(oldp+337,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+338,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+339,(vlSelf->alu_result),32);
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
    bufp->fullWData(oldp+340,(__Vtemp_h1b997cca__0),136);
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
    bufp->fullWData(oldp+345,(__Vtemp_hce3a3f54__0),136);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+350,(__Vtemp_h2ea4f700__0),66);
    bufp->fullBit(oldp+353,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+354,(4U),32);
    bufp->fullIData(oldp+355,(2U),32);
    bufp->fullIData(oldp+356,(0x20U),32);
    bufp->fullIData(oldp+357,(0U),32);
    bufp->fullIData(oldp+358,(1U),32);
    bufp->fullIData(oldp+359,(0x22U),32);
    bufp->fullIData(oldp+360,(4U),32);
    bufp->fullIData(oldp+361,(0x80000000U),32);
    bufp->fullIData(oldp+362,(0x12U),32);
    bufp->fullIData(oldp+363,(5U),32);
    bufp->fullIData(oldp+364,(0x25U),32);
    bufp->fullIData(oldp+365,(0x12U),32);
    bufp->fullCData(oldp+366,(0U),2);
    bufp->fullCData(oldp+367,(1U),2);
    bufp->fullCData(oldp+368,(2U),2);
    bufp->fullCData(oldp+369,(3U),2);
    bufp->fullIData(oldp+370,(7U),32);
    bufp->fullQData(oldp+371,(0x5c6e6f73d8fULL),45);
    bufp->fullIData(oldp+373,(9U),32);
    bufp->fullIData(oldp+374,(5U),32);
    bufp->fullCData(oldp+375,(3U),3);
    bufp->fullCData(oldp+376,(1U),3);
    bufp->fullCData(oldp+377,(2U),3);
    bufp->fullCData(oldp+378,(0U),3);
    bufp->fullIData(oldp+379,(3U),32);
    __Vtemp_h3b0d0cfb__0[0U] = 0x77aced18U;
    __Vtemp_h3b0d0cfb__0[1U] = 0xb06db92eU;
    __Vtemp_h3b0d0cfb__0[2U] = 9U;
    bufp->fullWData(oldp+380,(__Vtemp_h3b0d0cfb__0),70);
    bufp->fullIData(oldp+383,(0xaU),32);
    bufp->fullIData(oldp+384,(7U),32);
    bufp->fullQData(oldp+385,(0x1789cdfdee7418ceULL),63);
    bufp->fullIData(oldp+387,(0x23U),32);
    bufp->fullIData(oldp+388,(0x2aU),32);
    bufp->fullIData(oldp+389,(0x21U),32);
    bufp->fullIData(oldp+390,(2U),32);
}
