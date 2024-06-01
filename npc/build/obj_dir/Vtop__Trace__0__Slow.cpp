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
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBit(c+272,"rst", false,-1);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->declBus(c+274,"pc", false,-1, 31,0);
    tracep->declBus(c+275,"rd_data", false,-1, 31,0);
    tracep->declBus(c+276,"next_pc", false,-1, 31,0);
    tracep->declBus(c+277,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBit(c+272,"rst", false,-1);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->declBus(c+274,"pc", false,-1, 31,0);
    tracep->declBus(c+275,"rd_data", false,-1, 31,0);
    tracep->declBus(c+276,"next_pc", false,-1, 31,0);
    tracep->declBus(c+277,"alu_result", false,-1, 31,0);
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+278,"rd_add", false,-1, 4,0);
    tracep->declBus(c+94,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+166,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+95,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+167,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+96,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+97,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+168,"src1_data", false,-1, 31,0);
    tracep->declBus(c+169,"src2_data", false,-1, 31,0);
    tracep->declBus(c+279,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+98,"PC_src", false,-1, 2,0);
    tracep->declBus(c+99,"RegWrite", false,-1, 2,0);
    tracep->declBit(c+306,"vaild", false,-1);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->declBus(c+280,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+101,"memory_valid", false,-1);
    tracep->declBus(c+102,"opcode_plus", false,-1, 9,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+307,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"out", false,-1, 31,0);
    tracep->declBus(c+99,"key", false,-1, 2,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+281,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+307,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+275,"out", false,-1, 31,0);
    tracep->declBus(c+99,"key", false,-1, 2,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+281,"lut", false,-1, 139,0);
    tracep->declBus(c+312,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+154+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+162+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+286,"lut_out", false,-1, 31,0);
    tracep->declBit(c+287,"hit", false,-1);
    tracep->declBus(c+313,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBit(c+272,"rst", false,-1);
    tracep->declBus(c+98,"PC_src", false,-1, 2,0);
    tracep->declBus(c+277,"alu_result", false,-1, 31,0);
    tracep->declBus(c+274,"pc", false,-1, 31,0);
    tracep->declBus(c+96,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+276,"next_pc", false,-1, 31,0);
    tracep->declBus(c+136,"next_pc_type", false,-1, 2,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+276,"out", false,-1, 31,0);
    tracep->declBus(c+136,"key", false,-1, 2,0);
    tracep->declBus(c+315,"default_out", false,-1, 31,0);
    tracep->declArray(c+288,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+276,"out", false,-1, 31,0);
    tracep->declBus(c+136,"key", false,-1, 2,0);
    tracep->declBus(c+315,"default_out", false,-1, 31,0);
    tracep->declArray(c+288,"lut", false,-1, 174,0);
    tracep->declBus(c+312,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+137+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+147+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+152,"lut_out", false,-1, 31,0);
    tracep->declBit(c+153,"hit", false,-1);
    tracep->declBus(c+316,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->declBus(c+168,"src1", false,-1, 31,0);
    tracep->declBus(c+169,"src2", false,-1, 31,0);
    tracep->declBus(c+279,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+277,"alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->declBus(c+97,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+99,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+98,"PC_src", false,-1, 2,0);
    tracep->declBus(c+278,"rd_add", false,-1, 4,0);
    tracep->declBus(c+94,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+279,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+95,"rs2_add", false,-1, 4,0);
    tracep->declBit(c+101,"memory_valid", false,-1);
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBit(c+103,"slli_cond", false,-1);
    tracep->declBit(c+104,"srli_cond", false,-1);
    tracep->declBit(c+105,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+98,"PC_src", false,-1, 2,0);
    tracep->declBus(c+317,"pc_plus", false,-1, 2,0);
    tracep->declBus(c+318,"pc_ALUresult", false,-1, 2,0);
    tracep->declBus(c+319,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+320,"branch", false,-1, 2,0);
    tracep->declBus(c+321,"pc_jal", false,-1, 2,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+317,"default_out", false,-1, 2,0);
    tracep->declQuad(c+323,"lut", false,-1, 49,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+98,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+317,"default_out", false,-1, 2,0);
    tracep->declQuad(c+323,"lut", false,-1, 49,0);
    tracep->declBus(c+325,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+10+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+20+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+106,"lut_out", false,-1, 2,0);
    tracep->declBit(c+107,"hit", false,-1);
    tracep->declBus(c+316,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->declBus(c+279,"alu_ctrl", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+320,"IMM_I", false,-1, 2,0);
    tracep->declBus(c+318,"IMM_U", false,-1, 2,0);
    tracep->declBus(c+319,"IMM_Jal", false,-1, 2,0);
    tracep->declBus(c+317,"IMM_S", false,-1, 2,0);
    tracep->declBus(c+321,"IMM_B", false,-1, 2,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+326,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+97,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+317,"default_out", false,-1, 2,0);
    tracep->declArray(c+327,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+326,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+97,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+317,"default_out", false,-1, 2,0);
    tracep->declArray(c+327,"lut", false,-1, 79,0);
    tracep->declBus(c+325,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+25+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+33+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+41+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+108,"lut_out", false,-1, 2,0);
    tracep->declBit(c+109,"hit", false,-1);
    tracep->declBus(c+330,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+99,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+318,"pc_plus4", false,-1, 2,0);
    tracep->declBus(c+319,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+320,"EXT_IMM", false,-1, 2,0);
    tracep->declBus(c+317,"MEMORY_DATA", false,-1, 2,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+331,"default_out", false,-1, 2,0);
    tracep->declArray(c+332,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+322,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 2,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+331,"default_out", false,-1, 2,0);
    tracep->declArray(c+332,"lut", false,-1, 69,0);
    tracep->declBus(c+325,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+49+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+56+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+63+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+110,"lut_out", false,-1, 2,0);
    tracep->declBit(c+111,"hit", false,-1);
    tracep->declBus(c+335,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+274,"pc", false,-1, 31,0);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+97,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+100,"inst", false,-1, 31,0);
    tracep->declBus(c+96,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 2,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+112,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+314,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+308,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 2,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+112,"lut", false,-1, 174,0);
    tracep->declBus(c+312,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+118+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+70+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+128+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+133,"lut_out", false,-1, 31,0);
    tracep->declBit(c+134,"hit", false,-1);
    tracep->declBus(c+316,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBus(c+100,"instruction", false,-1, 31,0);
    tracep->declBus(c+277,"addr", false,-1, 31,0);
    tracep->declBus(c+167,"write_data", false,-1, 31,0);
    tracep->declBus(c+280,"mout_data", false,-1, 31,0);
    tracep->declBit(c+101,"read_valid", false,-1);
    tracep->declBit(c+135,"write_valid", false,-1);
    tracep->declBus(c+294,"mem_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+314,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+271,"clk", false,-1);
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->declBus(c+275,"wdata", false,-1, 31,0);
    tracep->declBus(c+278,"waddr", false,-1, 4,0);
    tracep->declBit(c+273,"wen", false,-1);
    tracep->declBus(c+94,"Addr1", false,-1, 4,0);
    tracep->declBus(c+166,"RData1", false,-1, 31,0);
    tracep->declBus(c+95,"Addr2", false,-1, 4,0);
    tracep->declBus(c+167,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+239+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+336,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+168,"out", false,-1, 31,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+295,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+336,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+168,"out", false,-1, 31,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+295,"lut", false,-1, 350,0);
    tracep->declBus(c+337,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+170+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+188+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+197,"lut_out", false,-1, 31,0);
    tracep->declBit(c+198,"hit", false,-1);
    tracep->declBus(c+338,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+336,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+199,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+336,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+322,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+309,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+311,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->declBus(c+93,"key", false,-1, 6,0);
    tracep->declBus(c+310,"default_out", false,-1, 31,0);
    tracep->declArray(c+199,"lut", false,-1, 350,0);
    tracep->declBus(c+337,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+210+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+84+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+228+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+237,"lut_out", false,-1, 31,0);
    tracep->declBit(c+238,"hit", false,-1);
    tracep->declBus(c+338,"i", false,-1, 31,0);
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
    VlWide<11>/*351:0*/ __Vtemp_h4bdcbac6__0;
    VlWide<5>/*159:0*/ __Vtemp_h872f0984__0;
    VlWide<6>/*191:0*/ __Vtemp_he940a371__0;
    VlWide<11>/*351:0*/ __Vtemp_h8641cd22__0;
    VlWide<3>/*95:0*/ __Vtemp_hf97a663a__0;
    VlWide<3>/*95:0*/ __Vtemp_hae5859c1__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+93,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__rs1_add),5);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__rs2_add),5);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__Ext_type),3);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__PC_src),3);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__RegWrite),3);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__memory_valid));
    bufp->fullSData(oldp+102,(((0x380U & (vlSelf->top__DOT__instruction 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->top__DOT__instruction))),10);
    bufp->fullBit(oldp+103,((IData)((0x2001013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+104,((IData)((0x2005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+105,((IData)((0x82005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+112,(__Vtemp_haedb7302__0),175);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
    bufp->fullQData(oldp+137,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+139,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+141,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+153,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__src2_data),32);
    bufp->fullQData(oldp+170,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+174,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+176,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+178,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+180,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+182,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+184,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+186,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    __Vtemp_h4bdcbac6__0[0U] = (IData)((0x3300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
    __Vtemp_h4bdcbac6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 7U) | (IData)((
                                                   (0x3300000000ULL 
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
    __Vtemp_h4bdcbac6__0[0xaU] = (0x37000000U | (vlSelf->top__DOT__ext_imm 
                                                 >> 8U));
    bufp->fullWData(oldp+199,(__Vtemp_h4bdcbac6__0),351);
    bufp->fullQData(oldp+210,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+212,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+216,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+218,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+224,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+226,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+271,(vlSelf->clk));
    bufp->fullBit(oldp+272,(vlSelf->rst));
    bufp->fullBit(oldp+273,(vlSelf->wen));
    bufp->fullIData(oldp+274,(vlSelf->pc),32);
    bufp->fullIData(oldp+275,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+276,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+277,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+278,(vlSelf->top__DOT__rd_add),5);
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__memory_out_data),32);
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
    bufp->fullWData(oldp+281,(__Vtemp_h872f0984__0),140);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+288,(__Vtemp_he940a371__0),175);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
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
    bufp->fullWData(oldp+295,(__Vtemp_h8641cd22__0),351);
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+307,(4U),32);
    bufp->fullIData(oldp+308,(3U),32);
    bufp->fullIData(oldp+309,(0x20U),32);
    bufp->fullIData(oldp+310,(0U),32);
    bufp->fullIData(oldp+311,(1U),32);
    bufp->fullIData(oldp+312,(0x23U),32);
    bufp->fullIData(oldp+313,(4U),32);
    bufp->fullIData(oldp+314,(5U),32);
    bufp->fullIData(oldp+315,(0x80000000U),32);
    bufp->fullIData(oldp+316,(5U),32);
    bufp->fullCData(oldp+317,(0U),3);
    bufp->fullCData(oldp+318,(1U),3);
    bufp->fullCData(oldp+319,(2U),3);
    bufp->fullCData(oldp+320,(3U),3);
    bufp->fullCData(oldp+321,(4U),3);
    bufp->fullIData(oldp+322,(7U),32);
    bufp->fullQData(oldp+323,(0xb86e33ac6f7cULL),50);
    bufp->fullIData(oldp+325,(0xaU),32);
    bufp->fullIData(oldp+326,(8U),32);
    __Vtemp_hf97a663a__0[0U] = 0xb3b4631cU;
    __Vtemp_hf97a663a__0[1U] = 0xb6e4b9deU;
    __Vtemp_hf97a663a__0[2U] = 0x26c1U;
    bufp->fullWData(oldp+327,(__Vtemp_hf97a663a__0),80);
    bufp->fullIData(oldp+330,(8U),32);
    bufp->fullCData(oldp+331,(7U),3);
    __Vtemp_hae5859c1__0[0U] = 0x7390619aU;
    __Vtemp_hae5859c1__0[1U] = 0xa269bbdeU;
    __Vtemp_hae5859c1__0[2U] = 0xbU;
    bufp->fullWData(oldp+332,(__Vtemp_hae5859c1__0),70);
    bufp->fullIData(oldp+335,(7U),32);
    bufp->fullIData(oldp+336,(9U),32);
    bufp->fullIData(oldp+337,(0x27U),32);
    bufp->fullIData(oldp+338,(9U),32);
}
