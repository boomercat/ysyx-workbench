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
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBit(c+385,"rst", false,-1);
    tracep->declBit(c+386,"wen", false,-1);
    tracep->declBus(c+387,"pc", false,-1, 31,0);
    tracep->declBus(c+388,"rd_data", false,-1, 31,0);
    tracep->declBus(c+389,"next_pc", false,-1, 31,0);
    tracep->declBus(c+390,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBit(c+385,"rst", false,-1);
    tracep->declBit(c+386,"wen", false,-1);
    tracep->declBus(c+387,"pc", false,-1, 31,0);
    tracep->declBus(c+388,"rd_data", false,-1, 31,0);
    tracep->declBus(c+389,"next_pc", false,-1, 31,0);
    tracep->declBus(c+390,"alu_result", false,-1, 31,0);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+115,"rd_add", false,-1, 4,0);
    tracep->declBus(c+116,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+171,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+117,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+172,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+118,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+119,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+173,"src1_data", false,-1, 31,0);
    tracep->declBus(c+174,"src2_data", false,-1, 31,0);
    tracep->declBus(c+120,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+121,"PC_src", false,-1, 2,0);
    tracep->declBus(c+122,"RegWrite", false,-1, 2,0);
    tracep->declBit(c+417,"vaild", false,-1);
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->declBus(c+391,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+124,"memory_valid", false,-1);
    tracep->declBus(c+125,"opcode_plus", false,-1, 9,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+418,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+388,"out", false,-1, 31,0);
    tracep->declBus(c+122,"key", false,-1, 2,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+392,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+418,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+388,"out", false,-1, 31,0);
    tracep->declBus(c+122,"key", false,-1, 2,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+392,"lut", false,-1, 139,0);
    tracep->declBus(c+423,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+159+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+167+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+397,"lut_out", false,-1, 31,0);
    tracep->declBit(c+398,"hit", false,-1);
    tracep->declBus(c+424,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBit(c+385,"rst", false,-1);
    tracep->declBus(c+121,"PC_src", false,-1, 2,0);
    tracep->declBus(c+390,"alu_result", false,-1, 31,0);
    tracep->declBus(c+387,"pc", false,-1, 31,0);
    tracep->declBus(c+118,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+389,"next_pc", false,-1, 31,0);
    tracep->declBus(c+175,"next_pc_type", false,-1, 2,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+389,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 2,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+399,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+389,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 2,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+399,"lut", false,-1, 174,0);
    tracep->declBus(c+423,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+176+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+186+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+191,"lut_out", false,-1, 31,0);
    tracep->declBit(c+192,"hit", false,-1);
    tracep->declBus(c+427,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->declBus(c+173,"src1", false,-1, 31,0);
    tracep->declBus(c+174,"src2", false,-1, 31,0);
    tracep->declBus(c+120,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+390,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+428,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+425,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+390,"out", false,-1, 31,0);
    tracep->declBus(c+120,"key", false,-1, 4,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 776,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+428,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+425,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+390,"out", false,-1, 31,0);
    tracep->declBus(c+120,"key", false,-1, 4,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+193,"lut", false,-1, 776,0);
    tracep->declBus(c+429,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 21; ++i) {
        tracep->declQuad(c+218+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+260+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+281,"lut_out", false,-1, 31,0);
    tracep->declBit(c+282,"hit", false,-1);
    tracep->declBus(c+430,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->declBus(c+119,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+122,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+121,"PC_src", false,-1, 2,0);
    tracep->declBus(c+115,"rd_add", false,-1, 4,0);
    tracep->declBus(c+116,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+120,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+117,"rs2_add", false,-1, 4,0);
    tracep->declBit(c+124,"memory_valid", false,-1);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBit(c+126,"slli_cond", false,-1);
    tracep->declBit(c+127,"srli_cond", false,-1);
    tracep->declBit(c+128,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+121,"PC_src", false,-1, 2,0);
    tracep->declBus(c+431,"pc_plus", false,-1, 2,0);
    tracep->declBus(c+432,"pc_ALUresult", false,-1, 2,0);
    tracep->declBus(c+433,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+434,"branch", false,-1, 2,0);
    tracep->declBus(c+435,"pc_jal", false,-1, 2,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+121,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 2,0);
    tracep->declQuad(c+437,"lut", false,-1, 49,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+121,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 2,0);
    tracep->declQuad(c+437,"lut", false,-1, 49,0);
    tracep->declBus(c+439,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+31+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+41+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+129,"lut_out", false,-1, 2,0);
    tracep->declBit(c+130,"hit", false,-1);
    tracep->declBus(c+427,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->declBus(c+120,"alu_ctrl", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+119,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+434,"IMM_I", false,-1, 2,0);
    tracep->declBus(c+432,"IMM_U", false,-1, 2,0);
    tracep->declBus(c+433,"IMM_Jal", false,-1, 2,0);
    tracep->declBus(c+431,"IMM_S", false,-1, 2,0);
    tracep->declBus(c+435,"IMM_B", false,-1, 2,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+440,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 2,0);
    tracep->declArray(c+441,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+440,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 2,0);
    tracep->declArray(c+441,"lut", false,-1, 79,0);
    tracep->declBus(c+439,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+46+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+131,"lut_out", false,-1, 2,0);
    tracep->declBit(c+132,"hit", false,-1);
    tracep->declBus(c+444,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+122,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+432,"pc_plus4", false,-1, 2,0);
    tracep->declBus(c+433,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+434,"EXT_IMM", false,-1, 2,0);
    tracep->declBus(c+431,"MEMORY_DATA", false,-1, 2,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+436,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+122,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+445,"default_out", false,-1, 2,0);
    tracep->declArray(c+446,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+436,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+419,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+122,"out", false,-1, 2,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+445,"default_out", false,-1, 2,0);
    tracep->declArray(c+446,"lut", false,-1, 69,0);
    tracep->declBus(c+439,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+70+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+77+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+84+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+133,"lut_out", false,-1, 2,0);
    tracep->declBit(c+134,"hit", false,-1);
    tracep->declBus(c+449,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+387,"pc", false,-1, 31,0);
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+119,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+123,"inst", false,-1, 31,0);
    tracep->declBus(c+118,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+119,"key", false,-1, 2,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+135,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+425,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+419,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+119,"key", false,-1, 2,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+135,"lut", false,-1, 174,0);
    tracep->declBus(c+423,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+141+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+91+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+151+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+156,"lut_out", false,-1, 31,0);
    tracep->declBit(c+157,"hit", false,-1);
    tracep->declBus(c+427,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBus(c+123,"instruction", false,-1, 31,0);
    tracep->declBus(c+390,"addr", false,-1, 31,0);
    tracep->declBus(c+172,"write_data", false,-1, 31,0);
    tracep->declBus(c+391,"mout_data", false,-1, 31,0);
    tracep->declBit(c+124,"read_valid", false,-1);
    tracep->declBit(c+158,"write_valid", false,-1);
    tracep->declBus(c+405,"mem_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+425,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+384,"clk", false,-1);
    tracep->declBus(c+114,"opcode", false,-1, 6,0);
    tracep->declBus(c+388,"wdata", false,-1, 31,0);
    tracep->declBus(c+115,"waddr", false,-1, 4,0);
    tracep->declBit(c+386,"wen", false,-1);
    tracep->declBus(c+116,"Addr1", false,-1, 4,0);
    tracep->declBus(c+171,"RData1", false,-1, 31,0);
    tracep->declBus(c+117,"Addr2", false,-1, 4,0);
    tracep->declBus(c+172,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+352+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+450,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+406,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+450,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+406,"lut", false,-1, 350,0);
    tracep->declBus(c+451,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+283+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+96+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+301+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+310,"lut_out", false,-1, 31,0);
    tracep->declBit(c+311,"hit", false,-1);
    tracep->declBus(c+452,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+450,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 31,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+312,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+450,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+436,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+420,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+422,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 31,0);
    tracep->declBus(c+114,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 31,0);
    tracep->declArray(c+312,"lut", false,-1, 350,0);
    tracep->declBus(c+451,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+323+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+341+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+350,"lut_out", false,-1, 31,0);
    tracep->declBit(c+351,"hit", false,-1);
    tracep->declBus(c+452,"i", false,-1, 31,0);
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
    VlWide<25>/*799:0*/ __Vtemp_h5e6337af__0;
    VlWide<11>/*351:0*/ __Vtemp_h9a8dcb8c__0;
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
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[11]),5);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[12]),5);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[13]),5);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[14]),5);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[15]),5);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[16]),5);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[17]),5);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[18]),5);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[19]),5);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[20]),5);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+114,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__rd_add),5);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__rs1_add),5);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__rs2_add),5);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__Ext_type),3);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__PC_src),3);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__RegWrite),3);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__memory_valid));
    bufp->fullSData(oldp+125,(((0x380U & (vlSelf->top__DOT__instruction 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->top__DOT__instruction))),10);
    bufp->fullBit(oldp+126,((IData)((0x2001013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+127,((IData)((0x2005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+128,((IData)((0x82005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+135,(__Vtemp_haedb7302__0),175);
    bufp->fullQData(oldp+141,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+149,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__src2_data),32);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
    bufp->fullQData(oldp+176,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+178,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+180,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+182,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+184,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_h5e6337af__0[0U] = (IData)((0x1500000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0))));
    __Vtemp_h5e6337af__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0 
                                 << 5U) | (IData)((
                                                   (0x1500000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h3cf79d7e__0))) 
                                                   >> 0x20U)));
    __Vtemp_h5e6337af__0[2U] = (0x280U | ((((0x1fU 
                                             >= (0x3fU 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x14U)))
                                             ? (vlSelf->top__DOT__src1_data 
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
                                                ? (vlSelf->top__DOT__src1_data 
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
    __Vtemp_h5e6337af__0[6U] = (0x20000000U | (((IData)(vlSelf->__VdfgTmp_ha73a0501__0) 
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
    __Vtemp_h5e6337af__0[0xbU] = (0x18000U | (((vlSelf->top__DOT__src1_data 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__src2_data)) 
                                               << 0x12U) 
                                              | ((IData)(vlSelf->__VdfgTmp_ha62228bd__0) 
                                                 >> 0x13U)));
    __Vtemp_h5e6337af__0[0xcU] = (0x280000U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__src2_data)) 
                                                << 0x17U) 
                                               | ((vlSelf->top__DOT__src1_data 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__src2_data)) 
                                                  >> 0xeU)));
    __Vtemp_h5e6337af__0[0xdU] = (0x4800000U | (((vlSelf->top__DOT__src1_data 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__src2_data)) 
                                                 << 0x1cU) 
                                                | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__src1_data, 
                                                                  (0x1fU 
                                                                   & vlSelf->top__DOT__src2_data)) 
                                                   >> 9U)));
    __Vtemp_h5e6337af__0[0xeU] = (0x80000000U | ((vlSelf->top__DOT__src1_data 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__src2_data)) 
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
    __Vtemp_h5e6337af__0[0x13U] = (0x40000U | ((0xffc00000U 
                                                & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                   << 0x15U)) 
                                               | ((IData)(vlSelf->__VdfgTmp_ha626693d__0) 
                                                  >> 0x10U)));
    __Vtemp_h5e6337af__0[0x14U] = (0x600000U | (((vlSelf->top__DOT__src1_data 
                                                  - vlSelf->top__DOT__src2_data) 
                                                 << 0x1aU) 
                                                | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                                   >> 0xbU)));
    __Vtemp_h5e6337af__0[0x15U] = (0x8000000U | ((vlSelf->top__DOT__src2_data 
                                                  << 0x1fU) 
                                                 | ((vlSelf->top__DOT__src1_data 
                                                     - vlSelf->top__DOT__src2_data) 
                                                    >> 6U)));
    __Vtemp_h5e6337af__0[0x16U] = (0x80000000U | (vlSelf->top__DOT__src2_data 
                                                  >> 1U));
    __Vtemp_h5e6337af__0[0x17U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                   << 4U);
    __Vtemp_h5e6337af__0[0x18U] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 
                                   >> 0x1cU);
    bufp->fullWData(oldp+193,(__Vtemp_h5e6337af__0),777);
    bufp->fullQData(oldp+218,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+224,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+226,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+228,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+230,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+232,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+234,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+236,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullQData(oldp+238,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),37);
    bufp->fullQData(oldp+240,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[11]),37);
    bufp->fullQData(oldp+242,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[12]),37);
    bufp->fullQData(oldp+244,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[13]),37);
    bufp->fullQData(oldp+246,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[14]),37);
    bufp->fullQData(oldp+248,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[15]),37);
    bufp->fullQData(oldp+250,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[16]),37);
    bufp->fullQData(oldp+252,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[17]),37);
    bufp->fullQData(oldp+254,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[18]),37);
    bufp->fullQData(oldp+256,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[19]),37);
    bufp->fullQData(oldp+258,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[20]),37);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[16]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[17]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[18]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[19]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[20]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+283,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+285,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+287,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+289,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+291,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+293,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+295,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+297,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+299,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    __Vtemp_h9a8dcb8c__0[0U] = (IData)((0x3300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs2_data))));
    __Vtemp_h9a8dcb8c__0[1U] = ((vlSelf->top__DOT__ext_imm 
                                 << 7U) | (IData)((
                                                   (0x3300000000ULL 
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
    __Vtemp_h9a8dcb8c__0[0xaU] = (0x37000000U | (vlSelf->top__DOT__ext_imm 
                                                 >> 8U));
    bufp->fullWData(oldp+312,(__Vtemp_h9a8dcb8c__0),351);
    bufp->fullQData(oldp+323,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+325,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+327,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+329,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+331,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+333,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+335,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+337,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+339,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+341,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+342,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+346,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+351,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+353,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+354,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+360,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+361,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+362,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+363,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+364,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+365,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+366,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+367,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+368,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+369,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+370,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+371,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+374,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+375,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+377,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+378,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+380,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+382,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+383,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+384,(vlSelf->clk));
    bufp->fullBit(oldp+385,(vlSelf->rst));
    bufp->fullBit(oldp+386,(vlSelf->wen));
    bufp->fullIData(oldp+387,(vlSelf->pc),32);
    bufp->fullIData(oldp+388,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+389,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+390,(vlSelf->alu_result),32);
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__memory_out_data),32);
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
    bufp->fullWData(oldp+392,(__Vtemp_h872f0984__0),140);
    bufp->fullIData(oldp+397,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+398,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+399,(__Vtemp_he940a371__0),175);
    bufp->fullIData(oldp+405,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
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
    bufp->fullWData(oldp+406,(__Vtemp_h8641cd22__0),351);
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+418,(4U),32);
    bufp->fullIData(oldp+419,(3U),32);
    bufp->fullIData(oldp+420,(0x20U),32);
    bufp->fullIData(oldp+421,(0U),32);
    bufp->fullIData(oldp+422,(1U),32);
    bufp->fullIData(oldp+423,(0x23U),32);
    bufp->fullIData(oldp+424,(4U),32);
    bufp->fullIData(oldp+425,(5U),32);
    bufp->fullIData(oldp+426,(0x80000000U),32);
    bufp->fullIData(oldp+427,(5U),32);
    bufp->fullIData(oldp+428,(0x15U),32);
    bufp->fullIData(oldp+429,(0x25U),32);
    bufp->fullIData(oldp+430,(0x15U),32);
    bufp->fullCData(oldp+431,(0U),3);
    bufp->fullCData(oldp+432,(1U),3);
    bufp->fullCData(oldp+433,(2U),3);
    bufp->fullCData(oldp+434,(3U),3);
    bufp->fullCData(oldp+435,(4U),3);
    bufp->fullIData(oldp+436,(7U),32);
    bufp->fullQData(oldp+437,(0xb86e33ac6f7cULL),50);
    bufp->fullIData(oldp+439,(0xaU),32);
    bufp->fullIData(oldp+440,(8U),32);
    __Vtemp_hf97a663a__0[0U] = 0xb3b4631cU;
    __Vtemp_hf97a663a__0[1U] = 0xb6e4b9deU;
    __Vtemp_hf97a663a__0[2U] = 0x26c1U;
    bufp->fullWData(oldp+441,(__Vtemp_hf97a663a__0),80);
    bufp->fullIData(oldp+444,(8U),32);
    bufp->fullCData(oldp+445,(7U),3);
    __Vtemp_hae5859c1__0[0U] = 0x7390619aU;
    __Vtemp_hae5859c1__0[1U] = 0xa269bbdeU;
    __Vtemp_hae5859c1__0[2U] = 0xbU;
    bufp->fullWData(oldp+446,(__Vtemp_hae5859c1__0),70);
    bufp->fullIData(oldp+449,(7U),32);
    bufp->fullIData(oldp+450,(9U),32);
    bufp->fullIData(oldp+451,(0x27U),32);
    bufp->fullIData(oldp+452,(9U),32);
}
