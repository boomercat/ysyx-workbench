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
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBit(c+283,"rst", false,-1);
    tracep->declBit(c+284,"wen", false,-1);
    tracep->declBus(c+285,"pc", false,-1, 31,0);
    tracep->declBus(c+286,"rd_data", false,-1, 31,0);
    tracep->declBus(c+287,"next_pc", false,-1, 31,0);
    tracep->declBus(c+288,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBit(c+283,"rst", false,-1);
    tracep->declBit(c+284,"wen", false,-1);
    tracep->declBus(c+285,"pc", false,-1, 31,0);
    tracep->declBus(c+286,"rd_data", false,-1, 31,0);
    tracep->declBus(c+287,"next_pc", false,-1, 31,0);
    tracep->declBus(c+288,"alu_result", false,-1, 31,0);
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBus(c+82,"rd_add", false,-1, 4,0);
    tracep->declBus(c+83,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+124,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+301,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+125,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+84,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+85,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+86,"ALU_src", false,-1);
    tracep->declBus(c+126,"src1_data", false,-1, 31,0);
    tracep->declBus(c+127,"src2_data", false,-1, 31,0);
    tracep->declBus(c+87,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+88,"PC_src", false,-1, 1,0);
    tracep->declBus(c+89,"RegWrite", false,-1, 1,0);
    tracep->declBit(c+302,"vaild", false,-1);
    tracep->declBus(c+90,"instruction", false,-1, 31,0);
    tracep->declBus(c+128,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+91,"rs2_valid", false,-1);
    tracep->declBit(c+92,"memory_valid", false,-1);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+286,"out", false,-1, 31,0);
    tracep->declBus(c+89,"key", false,-1, 1,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+289,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+286,"out", false,-1, 31,0);
    tracep->declBus(c+89,"key", false,-1, 1,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+289,"lut", false,-1, 135,0);
    tracep->declBus(c+308,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+129+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+137+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+141,"lut_out", false,-1, 31,0);
    tracep->declBit(c+142,"hit", false,-1);
    tracep->declBus(c+309,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBit(c+283,"rst", false,-1);
    tracep->declBus(c+88,"PC_src", false,-1, 1,0);
    tracep->declBus(c+288,"alu_result", false,-1, 31,0);
    tracep->declBus(c+285,"pc", false,-1, 31,0);
    tracep->declBus(c+287,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+310,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+287,"out", false,-1, 31,0);
    tracep->declBus(c+88,"key", false,-1, 1,0);
    tracep->declBus(c+311,"default_out", false,-1, 31,0);
    tracep->declArray(c+294,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+310,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+287,"out", false,-1, 31,0);
    tracep->declBus(c+88,"key", false,-1, 1,0);
    tracep->declBus(c+311,"default_out", false,-1, 31,0);
    tracep->declArray(c+294,"lut", false,-1, 101,0);
    tracep->declBus(c+308,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+143+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+149+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+152,"lut_out", false,-1, 31,0);
    tracep->declBit(c+153,"hit", false,-1);
    tracep->declBus(c+312,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+126,"src1", false,-1, 31,0);
    tracep->declBus(c+127,"src2", false,-1, 31,0);
    tracep->declBus(c+87,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+288,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+313,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+303,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+288,"out", false,-1, 31,0);
    tracep->declBus(c+87,"key", false,-1, 3,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 431,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+313,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+303,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+288,"out", false,-1, 31,0);
    tracep->declBus(c+87,"key", false,-1, 3,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 431,0);
    tracep->declBus(c+314,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declQuad(c+168+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+192+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+204,"lut_out", false,-1, 31,0);
    tracep->declBit(c+205,"hit", false,-1);
    tracep->declBus(c+315,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBus(c+90,"instruction", false,-1, 31,0);
    tracep->declBus(c+85,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+86,"ALU_src", false,-1);
    tracep->declBus(c+89,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+88,"PC_src", false,-1, 1,0);
    tracep->declBus(c+82,"rd_add", false,-1, 4,0);
    tracep->declBus(c+83,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+87,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+92,"memory_valid", false,-1);
    tracep->declBit(c+91,"rs2_valid", false,-1);
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBit(c+93,"slli_cond", false,-1);
    tracep->declBit(c+94,"srli_cond", false,-1);
    tracep->declBit(c+95,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBus(c+88,"PC_src", false,-1, 1,0);
    tracep->declBus(c+316,"pc_plus", false,-1, 1,0);
    tracep->declBus(c+317,"pc_ALUresult", false,-1, 1,0);
    tracep->declBus(c+318,"ALU_result", false,-1, 1,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+88,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+320,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+88,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+320,"lut", false,-1, 35,0);
    tracep->declBus(c+322,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+96,"lut_out", false,-1, 1,0);
    tracep->declBit(c+97,"hit", false,-1);
    tracep->declBus(c+309,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBus(c+90,"instruction", false,-1, 31,0);
    tracep->declBus(c+87,"alu_ctrl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBus(c+85,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+323,"IMM_I", false,-1, 1,0);
    tracep->declBus(c+317,"IMM_U", false,-1, 1,0);
    tracep->declBus(c+318,"IMM_Jal", false,-1, 1,0);
    tracep->declBus(c+316,"IMM_S", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+324,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+325,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+324,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+325,"lut", false,-1, 53,0);
    tracep->declBus(c+322,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+32+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+38+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+44+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+98,"lut_out", false,-1, 1,0);
    tracep->declBit(c+99,"hit", false,-1);
    tracep->declBus(c+327,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBus(c+89,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+317,"pc_plus4", false,-1, 1,0);
    tracep->declBus(c+318,"ALU_result", false,-1, 1,0);
    tracep->declBus(c+323,"EXT_IMM", false,-1, 1,0);
    tracep->declBus(c+316,"MEMORY_DATA", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+324,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+328,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+324,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+89,"out", false,-1, 1,0);
    tracep->declBus(c+81,"key", false,-1, 6,0);
    tracep->declBus(c+316,"default_out", false,-1, 1,0);
    tracep->declQuad(c+328,"lut", false,-1, 53,0);
    tracep->declBus(c+322,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+50+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+56+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+100,"lut_out", false,-1, 1,0);
    tracep->declBit(c+101,"hit", false,-1);
    tracep->declBus(c+327,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+285,"pc", false,-1, 31,0);
    tracep->declBus(c+90,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+85,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+90,"inst", false,-1, 31,0);
    tracep->declBus(c+84,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+85,"key", false,-1, 1,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+102,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+304,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+85,"key", false,-1, 1,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+102,"lut", false,-1, 135,0);
    tracep->declBus(c+308,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+107+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+119,"lut_out", false,-1, 31,0);
    tracep->declBit(c+120,"hit", false,-1);
    tracep->declBus(c+309,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBus(c+90,"instruction", false,-1, 31,0);
    tracep->declBus(c+288,"addr", false,-1, 31,0);
    tracep->declBus(c+125,"write_data", false,-1, 31,0);
    tracep->declBus(c+128,"mout_data", false,-1, 31,0);
    tracep->declBus(c+121,"extend_src", false,-1, 9,0);
    tracep->declBit(c+92,"read_valid", false,-1);
    tracep->declBit(c+122,"write_valid", false,-1);
    tracep->declBus(c+123,"wmask", false,-1, 7,0);
    tracep->declBus(c+206,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+330,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+331,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 31,0);
    tracep->declBus(c+121,"key", false,-1, 9,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+207,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+330,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+331,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 31,0);
    tracep->declBus(c+121,"key", false,-1, 9,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+207,"lut", false,-1, 209,0);
    tracep->declBus(c+332,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+214+i*2,"pair_list", true,(i+0), 41,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+224+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+229,"lut_out", false,-1, 31,0);
    tracep->declBit(c+230,"hit", false,-1);
    tracep->declBus(c+333,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+330,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+282,"clk", false,-1);
    tracep->declBit(c+91,"rs2_valid", false,-1);
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBus(c+286,"wdata", false,-1, 31,0);
    tracep->declBus(c+82,"waddr", false,-1, 4,0);
    tracep->declBit(c+284,"wen", false,-1);
    tracep->declBus(c+83,"Addr1", false,-1, 4,0);
    tracep->declBus(c+124,"RData1", false,-1, 31,0);
    tracep->declBus(c+301,"Addr2", false,-1, 4,0);
    tracep->declBus(c+125,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+250+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+304,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+307,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+126,"out", false,-1, 31,0);
    tracep->declBus(c+86,"key", false,-1, 0,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+298,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+304,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+307,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+126,"out", false,-1, 31,0);
    tracep->declBus(c+86,"key", false,-1, 0,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+298,"lut", false,-1, 65,0);
    tracep->declBus(c+334,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+231+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+77+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+235+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+237,"lut_out", false,-1, 31,0);
    tracep->declBit(c+238,"hit", false,-1);
    tracep->declBus(c+335,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+304,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+307,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+91,"key", false,-1, 0,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+239,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+304,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+307,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+307,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+91,"key", false,-1, 0,0);
    tracep->declBus(c+306,"default_out", false,-1, 31,0);
    tracep->declArray(c+239,"lut", false,-1, 65,0);
    tracep->declBus(c+334,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+242+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+79+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+246+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+248,"lut_out", false,-1, 31,0);
    tracep->declBit(c+249,"hit", false,-1);
    tracep->declBus(c+335,"i", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h5515d294__0;
    VlWide<14>/*447:0*/ __Vtemp_h8a74ccf4__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
    VlWide<3>/*95:0*/ __Vtemp_h020a3be6__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b997cca__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdeed6a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ea4f700__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),4);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),2);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),2);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+81,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullBit(oldp+86,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__PC_src),2);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__rs2_valid));
    bufp->fullBit(oldp+92,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+93,((IData)((0x2001013U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+94,((IData)((0x2005013U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+95,((IData)((0x82005013U == 
                                    (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    __Vtemp_h5515d294__0[0U] = (IData)((0x300000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (vlSelf->top__DOT__instruction 
                                                                >> 0xcU)))) 
                                            << 0x2eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__instruction 
                                                                   >> 0x14U)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (vlSelf->top__DOT__instruction 
                                                                      >> 0x15U)))) 
                                                  << 0x23U) 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->top__DOT__instruction 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | (vlSelf->top__DOT__instruction 
                                                                       >> 0x14U)))))))));
    __Vtemp_h5515d294__0[1U] = (((- (IData)((vlSelf->top__DOT__instruction 
                                             >> 0x1fU))) 
                                 << 0x16U) | (IData)(
                                                     ((0x300000000ULL 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (vlSelf->top__DOT__instruction 
                                                                               >> 0xcU)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT__instruction 
                                                                                >> 0x14U)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT__instruction 
                                                                                >> 0x15U)))) 
                                                                 << 0x23U) 
                                                                | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->top__DOT__instruction 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top__DOT__instruction 
                                                                                >> 0x14U)))))))) 
                                                      >> 0x20U)));
    __Vtemp_h5515d294__0[2U] = (8U | ((0xffff0000U 
                                       & (vlSelf->top__DOT__instruction 
                                          << 4U)) | 
                                      (3U & ((- (IData)(
                                                        (vlSelf->top__DOT__instruction 
                                                         >> 0x1fU))) 
                                             >> 0xaU))));
    __Vtemp_h5515d294__0[3U] = (0x10U | (((- (IData)(
                                                     (vlSelf->top__DOT__instruction 
                                                      >> 0x1fU))) 
                                          << 0x12U) 
                                         | ((0x3f800U 
                                             & (vlSelf->top__DOT__instruction 
                                                >> 0xeU)) 
                                            | ((0x7c0U 
                                                & (vlSelf->top__DOT__instruction 
                                                   >> 1U)) 
                                               | (0xffffU 
                                                  & (vlSelf->top__DOT__instruction 
                                                     >> 0x1cU))))));
    __Vtemp_h5515d294__0[4U] = (0x3fU & ((- (IData)(
                                                    (vlSelf->top__DOT__instruction 
                                                     >> 0x1fU))) 
                                         >> 0xeU));
    bufp->fullWData(oldp+102,(__Vtemp_h5515d294__0),136);
    bufp->fullQData(oldp+107,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+109,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+111,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+121,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
    bufp->fullBit(oldp+122,((0x23U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+123,(((0U == (7U & (vlSelf->top__DOT__instruction 
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
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__src2_data),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__memory_out_data),32);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+135,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+153,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_h8a74ccf4__0[0U] = (IData)((0xc00000000ULL 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0))));
    __Vtemp_h8a74ccf4__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                 << 4U) | (IData)((
                                                   (0xc00000000ULL 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_ha62228bd__0))) 
                                                   >> 0x20U)));
    __Vtemp_h8a74ccf4__0[2U] = (0xa0U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                          << 8U) | 
                                         (vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                          >> 0x1cU)));
    __Vtemp_h8a74ccf4__0[3U] = (0x900U | ((((0x1fU 
                                             >= (0x3fU 
                                                 & vlSelf->top__DOT__src2_data))
                                             ? (vlSelf->top__DOT__src1_data 
                                                << 
                                                (0x3fU 
                                                 & vlSelf->top__DOT__src2_data))
                                             : 0U) 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__alu__DOT____VdfgTmp_hf3906072__0 
                                             >> 0x18U)));
    __Vtemp_h8a74ccf4__0[4U] = (0x8000U | (((vlSelf->top__DOT__src1_data 
                                             & vlSelf->top__DOT__src2_data) 
                                            << 0x10U) 
                                           | (((0x1fU 
                                                >= 
                                                (0x3fU 
                                                 & vlSelf->top__DOT__src2_data))
                                                ? (vlSelf->top__DOT__src1_data 
                                                   << 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__src2_data))
                                                : 0U) 
                                              >> 0x14U)));
    __Vtemp_h8a74ccf4__0[5U] = (0x70000U | (((vlSelf->top__DOT__src1_data 
                                              | vlSelf->top__DOT__src2_data) 
                                             << 0x14U) 
                                            | ((vlSelf->top__DOT__src1_data 
                                                & vlSelf->top__DOT__src2_data) 
                                               >> 0x10U)));
    __Vtemp_h8a74ccf4__0[6U] = (0x600000U | (((vlSelf->top__DOT__src1_data 
                                               ^ vlSelf->top__DOT__src2_data) 
                                              << 0x18U) 
                                             | ((vlSelf->top__DOT__src1_data 
                                                 | vlSelf->top__DOT__src2_data) 
                                                >> 0xcU)));
    __Vtemp_h8a74ccf4__0[7U] = (0x5000000U | (((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                               << 0x1cU) 
                                              | ((vlSelf->top__DOT__src1_data 
                                                  ^ vlSelf->top__DOT__src2_data) 
                                                 >> 8U)));
    __Vtemp_h8a74ccf4__0[8U] = 0x40000000U;
    __Vtemp_h8a74ccf4__0[9U] = (0xfffffffeU & vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0);
    __Vtemp_h8a74ccf4__0[0xaU] = (3U | ((vlSelf->top__DOT__src1_data 
                                         - vlSelf->top__DOT__src2_data) 
                                        << 4U));
    __Vtemp_h8a74ccf4__0[0xbU] = (0x20U | ((vlSelf->top__DOT__src2_data 
                                            << 8U) 
                                           | ((vlSelf->top__DOT__src1_data 
                                               - vlSelf->top__DOT__src2_data) 
                                              >> 0x1cU)));
    __Vtemp_h8a74ccf4__0[0xcU] = (0x100U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__src2_data 
                                               >> 0x18U)));
    __Vtemp_h8a74ccf4__0[0xdU] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                  >> 0x14U);
    bufp->fullWData(oldp+154,(__Vtemp_h8a74ccf4__0),432);
    bufp->fullQData(oldp+168,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+170,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+174,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+176,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+178,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+180,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+182,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+184,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+186,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+188,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+190,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
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
    bufp->fullWData(oldp+207,(__Vtemp_h392ba67f__0),210);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
    bufp->fullQData(oldp+216,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
    bufp->fullQData(oldp+218,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+231,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+233,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    __Vtemp_h020a3be6__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
    __Vtemp_h020a3be6__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__rs2_data))) 
                                                   >> 0x20U)));
    __Vtemp_h020a3be6__0[2U] = (vlSelf->top__DOT__ext_imm 
                                >> 0x1fU);
    bufp->fullWData(oldp+239,(__Vtemp_h020a3be6__0),66);
    bufp->fullQData(oldp+242,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+244,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+282,(vlSelf->clk));
    bufp->fullBit(oldp+283,(vlSelf->rst));
    bufp->fullBit(oldp+284,(vlSelf->wen));
    bufp->fullIData(oldp+285,(vlSelf->pc),32);
    bufp->fullIData(oldp+286,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+287,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+288,(vlSelf->alu_result),32);
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
    bufp->fullWData(oldp+289,(__Vtemp_h1b997cca__0),136);
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
    bufp->fullWData(oldp+294,(__Vtemp_hbdeed6a0__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+298,(__Vtemp_h2ea4f700__0),66);
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__rs2_add),5);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+303,(4U),32);
    bufp->fullIData(oldp+304,(2U),32);
    bufp->fullIData(oldp+305,(0x20U),32);
    bufp->fullIData(oldp+306,(0U),32);
    bufp->fullIData(oldp+307,(1U),32);
    bufp->fullIData(oldp+308,(0x22U),32);
    bufp->fullIData(oldp+309,(4U),32);
    bufp->fullIData(oldp+310,(3U),32);
    bufp->fullIData(oldp+311,(0x80000000U),32);
    bufp->fullIData(oldp+312,(3U),32);
    bufp->fullIData(oldp+313,(0xcU),32);
    bufp->fullIData(oldp+314,(0x24U),32);
    bufp->fullIData(oldp+315,(0xcU),32);
    bufp->fullCData(oldp+316,(0U),2);
    bufp->fullCData(oldp+317,(1U),2);
    bufp->fullCData(oldp+318,(2U),2);
    bufp->fullIData(oldp+319,(7U),32);
    bufp->fullQData(oldp+320,(0x2e3737b9eULL),36);
    bufp->fullIData(oldp+322,(9U),32);
    bufp->fullCData(oldp+323,(3U),2);
    bufp->fullIData(oldp+324,(6U),32);
    bufp->fullQData(oldp+325,(0x9edd2eefb3e8cULL),54);
    bufp->fullIData(oldp+327,(6U),32);
    bufp->fullQData(oldp+328,(0xbc4e6fef73a0cULL),54);
    bufp->fullIData(oldp+330,(5U),32);
    bufp->fullIData(oldp+331,(0xaU),32);
    bufp->fullIData(oldp+332,(0x2aU),32);
    bufp->fullIData(oldp+333,(5U),32);
    bufp->fullIData(oldp+334,(0x21U),32);
    bufp->fullIData(oldp+335,(2U),32);
}
