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
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBit(c+329,"rst", false,-1);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declBus(c+331,"pc", false,-1, 31,0);
    tracep->declBus(c+332,"rd_data", false,-1, 31,0);
    tracep->declBus(c+333,"next_pc", false,-1, 31,0);
    tracep->declBus(c+334,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBit(c+329,"rst", false,-1);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declBus(c+331,"pc", false,-1, 31,0);
    tracep->declBus(c+332,"rd_data", false,-1, 31,0);
    tracep->declBus(c+333,"next_pc", false,-1, 31,0);
    tracep->declBus(c+334,"alu_result", false,-1, 31,0);
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBus(c+335,"rd_add", false,-1, 4,0);
    tracep->declBus(c+125,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+213,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+126,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+214,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+127,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+128,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+215,"src1_data", false,-1, 31,0);
    tracep->declBus(c+216,"src2_data", false,-1, 31,0);
    tracep->declBus(c+336,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+129,"PC_src", false,-1, 2,0);
    tracep->declBus(c+130,"RegWrite", false,-1, 2,0);
    tracep->declBit(c+371,"vaild", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+337,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+132,"memory_valid", false,-1);
    tracep->declBus(c+133,"opcode_plus", false,-1, 9,0);
    tracep->declBus(c+217,"odata", false,-1, 31,0);
    tracep->declBus(c+134,"irq_no", false,-1, 31,0);
    tracep->declBus(c+135,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+372,"w_data", false,-1, 31,0);
    tracep->declBus(c+290,"mtvec", false,-1, 31,0);
    tracep->declBus(c+291,"mepc", false,-1, 31,0);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+332,"out", false,-1, 31,0);
    tracep->declBus(c+130,"key", false,-1, 2,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+338,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+332,"out", false,-1, 31,0);
    tracep->declBus(c+130,"key", false,-1, 2,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+338,"lut", false,-1, 174,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+198+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+208+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+344,"lut_out", false,-1, 31,0);
    tracep->declBit(c+345,"hit", false,-1);
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBit(c+329,"rst", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+129,"PC_src", false,-1, 2,0);
    tracep->declBus(c+334,"alu_result", false,-1, 31,0);
    tracep->declBus(c+331,"pc", false,-1, 31,0);
    tracep->declBus(c+127,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+290,"mtvec", false,-1, 31,0);
    tracep->declBus(c+291,"mepc", false,-1, 31,0);
    tracep->declBus(c+333,"next_pc", false,-1, 31,0);
    tracep->declBus(c+346,"next_pc_type", false,-1, 2,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"out", false,-1, 31,0);
    tracep->declBus(c+346,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+347,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+333,"out", false,-1, 31,0);
    tracep->declBus(c+346,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+347,"lut", false,-1, 244,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+177+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+6+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+191+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+355,"lut_out", false,-1, 31,0);
    tracep->declBit(c+356,"hit", false,-1);
    tracep->declBus(c+382,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+215,"src1", false,-1, 31,0);
    tracep->declBus(c+216,"src2", false,-1, 31,0);
    tracep->declBus(c+217,"csr_input", false,-1, 31,0);
    tracep->declBus(c+336,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+334,"alu_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrregister ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+134,"irq_no", false,-1, 31,0);
    tracep->declBus(c+135,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+334,"w_data", false,-1, 31,0);
    tracep->declBus(c+331,"pc", false,-1, 31,0);
    tracep->declBus(c+217,"odata", false,-1, 31,0);
    tracep->declBus(c+290,"mtvec", false,-1, 31,0);
    tracep->declBus(c+291,"mepc", false,-1, 31,0);
    tracep->declBus(c+136,"waddr_in", false,-1, 1,0);
    tracep->declBus(c+137,"raddr_in", false,-1, 1,0);
    tracep->declBit(c+138,"csr_wen", false,-1);
    tracep->declBit(c+139,"irq", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+292+i*1,"csr_register", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("raddr_mux ");
    tracep->declBus(c+383,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 1,0);
    tracep->declBus(c+135,"key", false,-1, 11,0);
    tracep->declBus(c+386,"default_out", false,-1, 1,0);
    tracep->declQuad(c+387,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+383,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 1,0);
    tracep->declBus(c+135,"key", false,-1, 11,0);
    tracep->declBus(c+386,"default_out", false,-1, 1,0);
    tracep->declQuad(c+387,"lut", false,-1, 55,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+13+i*1,"pair_list", true,(i+0), 13,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+140,"lut_out", false,-1, 1,0);
    tracep->declBit(c+141,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("waddr_mux ");
    tracep->declBus(c+383,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 1,0);
    tracep->declBus(c+135,"key", false,-1, 11,0);
    tracep->declBus(c+386,"default_out", false,-1, 1,0);
    tracep->declQuad(c+387,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+383,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+385,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 1,0);
    tracep->declBus(c+135,"key", false,-1, 11,0);
    tracep->declBus(c+386,"default_out", false,-1, 1,0);
    tracep->declQuad(c+387,"lut", false,-1, 55,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,"pair_list", true,(i+0), 13,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+142,"lut_out", false,-1, 1,0);
    tracep->declBit(c+143,"hit", false,-1);
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+128,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+130,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+129,"PC_src", false,-1, 2,0);
    tracep->declBus(c+335,"rd_add", false,-1, 4,0);
    tracep->declBus(c+125,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+336,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+126,"rs2_add", false,-1, 4,0);
    tracep->declBit(c+132,"memory_valid", false,-1);
    tracep->declBus(c+135,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+134,"irq_no", false,-1, 31,0);
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBit(c+144,"slli_cond", false,-1);
    tracep->declBit(c+145,"srli_cond", false,-1);
    tracep->declBit(c+146,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBus(c+129,"PC_src", false,-1, 2,0);
    tracep->declBus(c+391,"pc_plus", false,-1, 2,0);
    tracep->declBus(c+392,"pc_ALUresult", false,-1, 2,0);
    tracep->declBus(c+393,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+394,"branch", false,-1, 2,0);
    tracep->declBus(c+395,"pc_jal", false,-1, 2,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declQuad(c+396,"lut", false,-1, 49,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declQuad(c+396,"lut", false,-1, 49,0);
    tracep->declBus(c+398,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+37+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+147,"lut_out", false,-1, 2,0);
    tracep->declBit(c+148,"hit", false,-1);
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+336,"alu_ctrl", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBus(c+128,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+394,"IMM_I", false,-1, 2,0);
    tracep->declBus(c+392,"IMM_U", false,-1, 2,0);
    tracep->declBus(c+393,"IMM_Jal", false,-1, 2,0);
    tracep->declBus(c+391,"IMM_S", false,-1, 2,0);
    tracep->declBus(c+395,"IMM_B", false,-1, 2,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declArray(c+400,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declArray(c+400,"lut", false,-1, 79,0);
    tracep->declBus(c+398,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+60+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+68+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+149,"lut_out", false,-1, 2,0);
    tracep->declBit(c+150,"hit", false,-1);
    tracep->declBus(c+403,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBus(c+130,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+392,"pc_plus4", false,-1, 2,0);
    tracep->declBus(c+393,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+394,"EXT_IMM", false,-1, 2,0);
    tracep->declBus(c+391,"MEMORY_DATA", false,-1, 2,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+404,"default_out", false,-1, 2,0);
    tracep->declArray(c+405,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+399,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+374,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 2,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+404,"default_out", false,-1, 2,0);
    tracep->declArray(c+405,"lut", false,-1, 79,0);
    tracep->declBus(c+398,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+76+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+84+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+151,"lut_out", false,-1, 2,0);
    tracep->declBit(c+152,"hit", false,-1);
    tracep->declBus(c+403,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+331,"pc", false,-1, 31,0);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+128,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+127,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+128,"key", false,-1, 2,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+153,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+374,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+128,"key", false,-1, 2,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+153,"lut", false,-1, 174,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+159+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+100+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+169+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+174,"lut_out", false,-1, 31,0);
    tracep->declBit(c+175,"hit", false,-1);
    tracep->declBus(c+379,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+131,"instruction", false,-1, 31,0);
    tracep->declBus(c+334,"addr", false,-1, 31,0);
    tracep->declBus(c+214,"write_data", false,-1, 31,0);
    tracep->declBus(c+337,"mout_data", false,-1, 31,0);
    tracep->declBit(c+132,"read_valid", false,-1);
    tracep->declBit(c+176,"write_valid", false,-1);
    tracep->declBus(c+357,"mem_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+373,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+328,"clk", false,-1);
    tracep->declBus(c+124,"opcode", false,-1, 6,0);
    tracep->declBus(c+332,"wdata", false,-1, 31,0);
    tracep->declBus(c+335,"waddr", false,-1, 4,0);
    tracep->declBit(c+330,"wen", false,-1);
    tracep->declBus(c+125,"Addr1", false,-1, 4,0);
    tracep->declBus(c+213,"RData1", false,-1, 31,0);
    tracep->declBus(c+126,"Addr2", false,-1, 4,0);
    tracep->declBus(c+214,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+296+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+398,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+358,"lut", false,-1, 389,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+398,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+215,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+358,"lut", false,-1, 389,0);
    tracep->declBus(c+408,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+218+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+238+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+248,"lut_out", false,-1, 31,0);
    tracep->declBit(c+249,"hit", false,-1);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+216,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+380,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+375,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+216,"out", false,-1, 31,0);
    tracep->declBus(c+124,"key", false,-1, 6,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+250,"lut", false,-1, 350,0);
    tracep->declBus(c+408,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+261+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+115+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+279+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+288,"lut_out", false,-1, 31,0);
    tracep->declBit(c+289,"hit", false,-1);
    tracep->declBus(c+411,"i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_h2d8840b3__0;
    VlWide<8>/*255:0*/ __Vtemp_h5eaeca2d__0;
    VlWide<13>/*415:0*/ __Vtemp_hc779d515__0;
    VlWide<3>/*95:0*/ __Vtemp_hf97a663a__0;
    VlWide<3>/*95:0*/ __Vtemp_hcef49f09__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[6]),3);
    bufp->fullSData(oldp+13,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[0]),14);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[1]),14);
    bufp->fullSData(oldp+15,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[2]),14);
    bufp->fullSData(oldp+16,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[3]),14);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[3]),12);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[0]),14);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[1]),14);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[2]),14);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[3]),14);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[0]),12);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[1]),12);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[2]),12);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[3]),12);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+80,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+81,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+82,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+83,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[9]),7);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+124,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__rs1_add),5);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__rs2_add),5);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__Ext_type),3);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__PC_src),3);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__RegWrite),3);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__memory_valid));
    bufp->fullSData(oldp+133,(((0x380U & (vlSelf->top__DOT__instruction 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->top__DOT__instruction))),10);
    bufp->fullIData(oldp+134,(((0x73U == vlSelf->top__DOT__instruction)
                                ? 0xbU : 0U)),32);
    bufp->fullSData(oldp+135,(vlSelf->top__DOT__csr_imm),12);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__csrregister__DOT__waddr_in),2);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__csrregister__DOT__raddr_in),2);
    bufp->fullBit(oldp+138,(((0x73U == (0x7fU & vlSelf->top__DOT__instruction)) 
                             & ((2U == (7U & (vlSelf->top__DOT__instruction 
                                              >> 0xcU))) 
                                | (1U == (7U & (vlSelf->top__DOT__instruction 
                                                >> 0xcU)))))));
    bufp->fullBit(oldp+139,((0x73U == vlSelf->top__DOT__instruction)));
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+144,((IData)((0x2001013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+145,((IData)((0x2005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+146,((IData)((0x82005013U == 
                                     (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+153,(__Vtemp_haedb7302__0),175);
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__memory_1__DOT__write_valid));
    bufp->fullQData(oldp+177,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+179,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+181,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+183,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+185,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+187,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+189,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[6]),32);
    bufp->fullQData(oldp+198,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+200,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+202,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+204,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+206,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__src2_data),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__odata),32);
    bufp->fullQData(oldp+218,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+224,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+226,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+228,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+230,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+232,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+234,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullQData(oldp+236,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[9]),39);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+250,(__Vtemp_h4bdcbac6__0),351);
    bufp->fullQData(oldp+261,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+263,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+265,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+267,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+269,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+271,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+273,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+275,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+277,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__csrregister__DOT__csr_register
                              [1U]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__csrregister__DOT__csr_register
                              [3U]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__csrregister__DOT__csr_register[0]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__csrregister__DOT__csr_register[1]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__csrregister__DOT__csr_register[2]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__csrregister__DOT__csr_register[3]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+328,(vlSelf->clk));
    bufp->fullBit(oldp+329,(vlSelf->rst));
    bufp->fullBit(oldp+330,(vlSelf->wen));
    bufp->fullIData(oldp+331,(vlSelf->pc),32);
    bufp->fullIData(oldp+332,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+333,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+334,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+335,(vlSelf->top__DOT__rd_add),5);
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__memory_out_data),32);
    __Vtemp_h2d8840b3__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__odata))));
    __Vtemp_h2d8840b3__0[1U] = ((vlSelf->top__DOT__memory_out_data 
                                 << 3U) | (IData)((
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__odata))) 
                                                   >> 0x20U)));
    __Vtemp_h2d8840b3__0[2U] = ((vlSelf->top__DOT__ext_imm 
                                 << 6U) | (vlSelf->top__DOT__memory_out_data 
                                           >> 0x1dU));
    __Vtemp_h2d8840b3__0[3U] = (0xc0U | ((vlSelf->alu_result 
                                          << 9U) | 
                                         (vlSelf->top__DOT__ext_imm 
                                          >> 0x1aU)));
    __Vtemp_h2d8840b3__0[4U] = (0x400U | ((((IData)(4U) 
                                            + vlSelf->pc) 
                                           << 0xcU) 
                                          | (vlSelf->alu_result 
                                             >> 0x17U)));
    __Vtemp_h2d8840b3__0[5U] = (0x1000U | (((IData)(4U) 
                                            + vlSelf->pc) 
                                           >> 0x14U));
    bufp->fullWData(oldp+338,(__Vtemp_h2d8840b3__0),175);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+345,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
    __Vtemp_h5eaeca2d__0[0U] = (IData)((0x600000000ULL 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__csrregister__DOT__csr_register
                                                          [3U]))));
    __Vtemp_h5eaeca2d__0[1U] = ((vlSelf->top__DOT__csrregister__DOT__csr_register
                                 [1U] << 3U) | (IData)(
                                                       ((0x600000000ULL 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__csrregister__DOT__csr_register
                                                                           [3U]))) 
                                                        >> 0x20U)));
    __Vtemp_h5eaeca2d__0[2U] = (0x28U | ((vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                          << 6U) | 
                                         (vlSelf->top__DOT__csrregister__DOT__csr_register
                                          [1U] >> 0x1dU)));
    __Vtemp_h5eaeca2d__0[3U] = (0x100U | ((vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                           << 9U) | 
                                          (vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                           >> 0x1aU)));
    __Vtemp_h5eaeca2d__0[4U] = (0x600U | ((vlSelf->alu_result 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
                                             >> 0x17U)));
    __Vtemp_h5eaeca2d__0[5U] = (0x2000U | (((vlSelf->alu_result 
                                             + vlSelf->pc) 
                                            << 0xfU) 
                                           | (vlSelf->alu_result 
                                              >> 0x14U)));
    __Vtemp_h5eaeca2d__0[6U] = (0x8000U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0x12U) 
                                           | ((vlSelf->alu_result 
                                               + vlSelf->pc) 
                                              >> 0x11U)));
    __Vtemp_h5eaeca2d__0[7U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0xeU);
    bufp->fullWData(oldp+347,(__Vtemp_h5eaeca2d__0),245);
    bufp->fullIData(oldp+355,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
    __Vtemp_hc779d515__0[0U] = (IData)((0x7300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__rs1_data))));
    __Vtemp_hc779d515__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 7U) | (IData)((
                                                   (0x7300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__rs1_data))) 
                                                   >> 0x20U)));
    __Vtemp_hc779d515__0[2U] = (0x1980U | ((vlSelf->top__DOT__rs1_data 
                                            << 0xeU) 
                                           | (vlSelf->top__DOT__rs1_data 
                                              >> 0x19U)));
    __Vtemp_hc779d515__0[3U] = (0x4c000U | ((vlSelf->top__DOT__rs1_data 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__rs1_data 
                                               >> 0x12U)));
    __Vtemp_hc779d515__0[4U] = (0x4600000U | ((vlSelf->top__DOT__rs1_data 
                                               << 0x1cU) 
                                              | (vlSelf->top__DOT__rs1_data 
                                                 >> 0xbU)));
    __Vtemp_hc779d515__0[5U] = (0x30000000U | (vlSelf->top__DOT__rs1_data 
                                               >> 4U));
    __Vtemp_hc779d515__0[6U] = (vlSelf->top__DOT__rs1_data 
                                << 3U);
    __Vtemp_hc779d515__0[7U] = (0x318U | ((vlSelf->pc 
                                           << 0xaU) 
                                          | (vlSelf->top__DOT__rs1_data 
                                             >> 0x1dU)));
    __Vtemp_hc779d515__0[8U] = (0x5c00U | ((vlSelf->top__DOT__rs1_data 
                                            << 0x11U) 
                                           | (vlSelf->pc 
                                              >> 0x16U)));
    __Vtemp_hc779d515__0[9U] = (0xce0000U | ((vlSelf->pc 
                                              << 0x18U) 
                                             | (vlSelf->top__DOT__rs1_data 
                                                >> 0xfU)));
    __Vtemp_hc779d515__0[0xaU] = (0x6f000000U | (vlSelf->pc 
                                                 >> 8U));
    __Vtemp_hc779d515__0[0xbU] = 0x80000000U;
    __Vtemp_hc779d515__0[0xcU] = 0x1bU;
    bufp->fullWData(oldp+358,(__Vtemp_hc779d515__0),390);
    bufp->fullBit(oldp+371,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+372,(vlSelf->top__DOT__w_data),32);
    bufp->fullIData(oldp+373,(5U),32);
    bufp->fullIData(oldp+374,(3U),32);
    bufp->fullIData(oldp+375,(0x20U),32);
    bufp->fullIData(oldp+376,(0U),32);
    bufp->fullIData(oldp+377,(1U),32);
    bufp->fullIData(oldp+378,(0x23U),32);
    bufp->fullIData(oldp+379,(5U),32);
    bufp->fullIData(oldp+380,(7U),32);
    bufp->fullIData(oldp+381,(0x80000000U),32);
    bufp->fullIData(oldp+382,(7U),32);
    bufp->fullIData(oldp+383,(4U),32);
    bufp->fullIData(oldp+384,(0xcU),32);
    bufp->fullIData(oldp+385,(2U),32);
    bufp->fullCData(oldp+386,(0U),2);
    bufp->fullQData(oldp+387,(0x3000c153428d07ULL),56);
    bufp->fullIData(oldp+389,(0xeU),32);
    bufp->fullIData(oldp+390,(4U),32);
    bufp->fullCData(oldp+391,(0U),3);
    bufp->fullCData(oldp+392,(1U),3);
    bufp->fullCData(oldp+393,(2U),3);
    bufp->fullCData(oldp+394,(3U),3);
    bufp->fullCData(oldp+395,(4U),3);
    bufp->fullQData(oldp+396,(0xb86e33ac6f7cULL),50);
    bufp->fullIData(oldp+398,(0xaU),32);
    bufp->fullIData(oldp+399,(8U),32);
    __Vtemp_hf97a663a__0[0U] = 0xb3b4631cU;
    __Vtemp_hf97a663a__0[1U] = 0xb6e4b9deU;
    __Vtemp_hf97a663a__0[2U] = 0x26c1U;
    bufp->fullWData(oldp+400,(__Vtemp_hf97a663a__0),80);
    bufp->fullIData(oldp+403,(8U),32);
    bufp->fullCData(oldp+404,(7U),3);
    __Vtemp_hcef49f09__0[0U] = 0x41866b9cU;
    __Vtemp_hcef49f09__0[1U] = 0xa6ef79ceU;
    __Vtemp_hcef49f09__0[2U] = 0x2e89U;
    bufp->fullWData(oldp+405,(__Vtemp_hcef49f09__0),80);
    bufp->fullIData(oldp+408,(0x27U),32);
    bufp->fullIData(oldp+409,(0xaU),32);
    bufp->fullIData(oldp+410,(9U),32);
    bufp->fullIData(oldp+411,(9U),32);
}
