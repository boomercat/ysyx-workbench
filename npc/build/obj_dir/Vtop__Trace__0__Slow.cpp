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
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+323,"rst", false,-1);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->declBus(c+325,"pc", false,-1, 31,0);
    tracep->declBus(c+326,"rd_data", false,-1, 31,0);
    tracep->declBus(c+327,"next_pc", false,-1, 31,0);
    tracep->declBus(c+328,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+323,"rst", false,-1);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->declBus(c+325,"pc", false,-1, 31,0);
    tracep->declBus(c+326,"rd_data", false,-1, 31,0);
    tracep->declBus(c+327,"next_pc", false,-1, 31,0);
    tracep->declBus(c+328,"alu_result", false,-1, 31,0);
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBus(c+219,"rd_add", false,-1, 4,0);
    tracep->declBus(c+220,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+316,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+221,"rs2_add", false,-1, 4,0);
    tracep->declBus(c+317,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+222,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+223,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+145,"src1_data", false,-1, 31,0);
    tracep->declBus(c+318,"src2_data", false,-1, 31,0);
    tracep->declBus(c+329,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+224,"PC_src", false,-1, 2,0);
    tracep->declBus(c+225,"RegWrite", false,-1, 2,0);
    tracep->declBit(c+376,"vaild", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+330,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+227,"memory_valid", false,-1);
    tracep->declBus(c+228,"opcode_plus", false,-1, 9,0);
    tracep->declBus(c+319,"odata", false,-1, 31,0);
    tracep->declBus(c+229,"irq_no", false,-1, 31,0);
    tracep->declBus(c+230,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+377,"w_data", false,-1, 31,0);
    tracep->declBus(c+180,"mtvec", false,-1, 31,0);
    tracep->declBus(c+181,"mepc", false,-1, 31,0);
    tracep->declBit(c+231,"IFU_done", false,-1);
    tracep->declBit(c+232,"IDU_done", false,-1);
    tracep->declBit(c+233,"ALU_done", false,-1);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+326,"out", false,-1, 31,0);
    tracep->declBus(c+225,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+331,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+326,"out", false,-1, 31,0);
    tracep->declBus(c+225,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+331,"lut", false,-1, 174,0);
    tracep->declBus(c+383,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+337+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+347+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+352,"lut_out", false,-1, 31,0);
    tracep->declBit(c+353,"hit", false,-1);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+323,"rst", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+224,"PC_src", false,-1, 2,0);
    tracep->declBus(c+328,"alu_result", false,-1, 31,0);
    tracep->declBus(c+325,"pc", false,-1, 31,0);
    tracep->declBus(c+222,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+180,"mtvec", false,-1, 31,0);
    tracep->declBus(c+181,"mepc", false,-1, 31,0);
    tracep->declBus(c+327,"next_pc", false,-1, 31,0);
    tracep->declBus(c+234,"next_pc_type", false,-1, 2,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+385,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+327,"out", false,-1, 31,0);
    tracep->declBus(c+234,"key", false,-1, 2,0);
    tracep->declBus(c+386,"default_out", false,-1, 31,0);
    tracep->declArray(c+354,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+385,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+327,"out", false,-1, 31,0);
    tracep->declBus(c+234,"key", false,-1, 2,0);
    tracep->declBus(c+386,"default_out", false,-1, 31,0);
    tracep->declArray(c+354,"lut", false,-1, 244,0);
    tracep->declBus(c+383,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+124+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+6+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+138+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+146,"lut_out", false,-1, 31,0);
    tracep->declBit(c+147,"hit", false,-1);
    tracep->declBus(c+387,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+232,"IDU_done", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+145,"src1", false,-1, 31,0);
    tracep->declBus(c+318,"src2", false,-1, 31,0);
    tracep->declBus(c+319,"csr_input", false,-1, 31,0);
    tracep->declBus(c+329,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+328,"alu_result", false,-1, 31,0);
    tracep->declBit(c+233,"ALU_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csrregister ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+229,"irq_no", false,-1, 31,0);
    tracep->declBus(c+230,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+328,"w_data", false,-1, 31,0);
    tracep->declBus(c+325,"pc", false,-1, 31,0);
    tracep->declBus(c+319,"odata", false,-1, 31,0);
    tracep->declBus(c+180,"mtvec", false,-1, 31,0);
    tracep->declBus(c+181,"mepc", false,-1, 31,0);
    tracep->declBus(c+235,"waddr_in", false,-1, 1,0);
    tracep->declBus(c+236,"raddr_in", false,-1, 1,0);
    tracep->declBit(c+237,"csr_wen", false,-1);
    tracep->declBit(c+238,"irq", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+182+i*1,"csr_register", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("raddr_mux ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+389,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+390,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+236,"out", false,-1, 1,0);
    tracep->declBus(c+230,"key", false,-1, 11,0);
    tracep->declBus(c+391,"default_out", false,-1, 1,0);
    tracep->declQuad(c+392,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+389,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+390,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+236,"out", false,-1, 1,0);
    tracep->declBus(c+230,"key", false,-1, 11,0);
    tracep->declBus(c+391,"default_out", false,-1, 1,0);
    tracep->declQuad(c+392,"lut", false,-1, 55,0);
    tracep->declBus(c+394,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+13+i*1,"pair_list", true,(i+0), 13,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+239,"lut_out", false,-1, 1,0);
    tracep->declBit(c+240,"hit", false,-1);
    tracep->declBus(c+395,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("waddr_mux ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+389,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+390,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+235,"out", false,-1, 1,0);
    tracep->declBus(c+230,"key", false,-1, 11,0);
    tracep->declBus(c+391,"default_out", false,-1, 1,0);
    tracep->declQuad(c+392,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+388,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+389,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+390,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+235,"out", false,-1, 1,0);
    tracep->declBus(c+230,"key", false,-1, 11,0);
    tracep->declBus(c+391,"default_out", false,-1, 1,0);
    tracep->declQuad(c+392,"lut", false,-1, 55,0);
    tracep->declBus(c+394,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,"pair_list", true,(i+0), 13,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+241,"lut_out", false,-1, 1,0);
    tracep->declBit(c+242,"hit", false,-1);
    tracep->declBus(c+395,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+323,"rst", false,-1);
    tracep->declBit(c+231,"IFU_done", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+223,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+225,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+224,"PC_src", false,-1, 2,0);
    tracep->declBus(c+219,"rd_add", false,-1, 4,0);
    tracep->declBus(c+220,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+329,"alu_ctrl", false,-1, 4,0);
    tracep->declBus(c+221,"rs2_add", false,-1, 4,0);
    tracep->declBit(c+227,"memory_valid", false,-1);
    tracep->declBit(c+232,"IDU_done", false,-1);
    tracep->declBus(c+230,"csr_imm", false,-1, 11,0);
    tracep->declBus(c+229,"irq_no", false,-1, 31,0);
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBit(c+243,"slli_cond", false,-1);
    tracep->declBit(c+244,"srli_cond", false,-1);
    tracep->declBit(c+245,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBus(c+224,"PC_src", false,-1, 2,0);
    tracep->declBus(c+396,"pc_plus", false,-1, 2,0);
    tracep->declBus(c+397,"pc_ALUresult", false,-1, 2,0);
    tracep->declBus(c+398,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+399,"branch", false,-1, 2,0);
    tracep->declBus(c+400,"pc_jal", false,-1, 2,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+396,"default_out", false,-1, 2,0);
    tracep->declQuad(c+401,"lut", false,-1, 49,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+224,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+396,"default_out", false,-1, 2,0);
    tracep->declQuad(c+401,"lut", false,-1, 49,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+37+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+246,"lut_out", false,-1, 2,0);
    tracep->declBit(c+247,"hit", false,-1);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+329,"alu_ctrl", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_inst ");
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBus(c+223,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+399,"IMM_I", false,-1, 2,0);
    tracep->declBus(c+397,"IMM_U", false,-1, 2,0);
    tracep->declBus(c+398,"IMM_Jal", false,-1, 2,0);
    tracep->declBus(c+396,"IMM_S", false,-1, 2,0);
    tracep->declBus(c+400,"IMM_B", false,-1, 2,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+396,"default_out", false,-1, 2,0);
    tracep->declArray(c+405,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+223,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+396,"default_out", false,-1, 2,0);
    tracep->declArray(c+405,"lut", false,-1, 79,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+60+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+68+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+248,"lut_out", false,-1, 2,0);
    tracep->declBit(c+249,"hit", false,-1);
    tracep->declBus(c+408,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"RegWrite", false,-1, 2,0);
    tracep->declBus(c+397,"pc_plus4", false,-1, 2,0);
    tracep->declBus(c+398,"ALU_result", false,-1, 2,0);
    tracep->declBus(c+399,"EXT_IMM", false,-1, 2,0);
    tracep->declBus(c+396,"MEMORY_DATA", false,-1, 2,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+409,"default_out", false,-1, 2,0);
    tracep->declArray(c+410,"lut", false,-1, 79,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+225,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+409,"default_out", false,-1, 2,0);
    tracep->declArray(c+410,"lut", false,-1, 79,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+76+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+84+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+250,"lut_out", false,-1, 2,0);
    tracep->declBit(c+251,"hit", false,-1);
    tracep->declBus(c+408,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBit(c+323,"rst", false,-1);
    tracep->declBit(c+233,"ALU_done", false,-1);
    tracep->declBus(c+325,"pc", false,-1, 31,0);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBit(c+231,"IFU_done", false,-1);
    tracep->declBit(c+252,"count", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+223,"Ext_type", false,-1, 2,0);
    tracep->declBus(c+226,"inst", false,-1, 31,0);
    tracep->declBus(c+222,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+253,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->declBus(c+223,"key", false,-1, 2,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+253,"lut", false,-1, 174,0);
    tracep->declBus(c+383,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+259+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+100+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+269+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+274,"lut_out", false,-1, 31,0);
    tracep->declBit(c+275,"hit", false,-1);
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBus(c+226,"instruction", false,-1, 31,0);
    tracep->declBus(c+328,"addr", false,-1, 31,0);
    tracep->declBus(c+317,"write_data", false,-1, 31,0);
    tracep->declBus(c+330,"mout_data", false,-1, 31,0);
    tracep->declBit(c+276,"read_valid", false,-1);
    tracep->declBit(c+277,"write_valid", false,-1);
    tracep->declBus(c+362,"mem_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+378,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+322,"clk", false,-1);
    tracep->declBus(c+218,"opcode", false,-1, 6,0);
    tracep->declBus(c+326,"wdata", false,-1, 31,0);
    tracep->declBus(c+219,"waddr", false,-1, 4,0);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->declBus(c+220,"Addr1", false,-1, 4,0);
    tracep->declBus(c+316,"RData1", false,-1, 31,0);
    tracep->declBus(c+221,"Addr2", false,-1, 4,0);
    tracep->declBus(c+317,"RData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+186+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("src1_data_num ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+145,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+363,"lut", false,-1, 389,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+145,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+363,"lut", false,-1, 389,0);
    tracep->declBus(c+413,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+148+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+168+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+178,"lut_out", false,-1, 31,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+414,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src2_data_num ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+318,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+278,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+385,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+318,"out", false,-1, 31,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+381,"default_out", false,-1, 31,0);
    tracep->declArray(c+278,"lut", false,-1, 350,0);
    tracep->declBus(c+413,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+289+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+115+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+307+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+320,"lut_out", false,-1, 31,0);
    tracep->declBit(c+321,"hit", false,-1);
    tracep->declBus(c+416,"i", false,-1, 31,0);
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
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+53,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+54,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+55,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__data_list[7]),3);
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
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__src1_data),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+162,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+164,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullQData(oldp+166,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[9]),39);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__csrregister__DOT__csr_register
                              [1U]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__csrregister__DOT__csr_register
                              [3U]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__csrregister__DOT__csr_register[0]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__csrregister__DOT__csr_register[1]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__csrregister__DOT__csr_register[2]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__csrregister__DOT__csr_register[3]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__opcode),7);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__rd_add),5);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__rs1_add),5);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__rs2_add),5);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__Ext_type),3);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__PC_src),3);
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__RegWrite),3);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+227,((3U == (IData)(vlSelf->top__DOT__opcode))));
    bufp->fullSData(oldp+228,(((0x380U & (vlSelf->top__DOT__instruction 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->top__DOT__instruction))),10);
    bufp->fullIData(oldp+229,(((0x73U == vlSelf->top__DOT__instruction)
                                ? 0xbU : 0U)),32);
    bufp->fullSData(oldp+230,(vlSelf->top__DOT__csr_imm),12);
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__IFU_done));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__IDU_done));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__ALU_done));
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__add_pc__DOT__next_pc_type),3);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__csrregister__DOT__waddr_in),2);
    bufp->fullCData(oldp+236,(vlSelf->top__DOT__csrregister__DOT__raddr_in),2);
    bufp->fullBit(oldp+237,(((0x73U == (0x7fU & vlSelf->top__DOT__instruction)) 
                             & ((2U == (7U & (vlSelf->top__DOT__instruction 
                                              >> 0xcU))) 
                                | (1U == (7U & (vlSelf->top__DOT__instruction 
                                                >> 0xcU)))))));
    bufp->fullBit(oldp+238,((0x73U == vlSelf->top__DOT__instruction)));
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+243,(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                             & (IData)((0x2001000U 
                                        == (0xfe007000U 
                                            & vlSelf->top__DOT__instruction))))));
    bufp->fullBit(oldp+244,((IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                                     & (0x2005000U 
                                        == (0xfe007000U 
                                            & vlSelf->top__DOT__instruction))))));
    bufp->fullBit(oldp+245,((IData)(((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                                     & (0x82005000U 
                                        == (0xfe007000U 
                                            & vlSelf->top__DOT__instruction))))));
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+248,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__idu__DOT__ext_num_inst__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+250,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__inst__DOT__count));
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
    bufp->fullWData(oldp+253,(__Vtemp_haedb7302__0),175);
    bufp->fullQData(oldp+259,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+261,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+263,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+265,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+267,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__memory_1__DOT__read_valid));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__memory_1__DOT__write_valid));
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
    bufp->fullWData(oldp+278,(__Vtemp_h4bdcbac6__0),351);
    bufp->fullQData(oldp+289,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+291,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+293,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+295,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+297,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+299,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+301,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+303,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+305,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__rs2_data),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__src2_data),32);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__odata),32);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+322,(vlSelf->clk));
    bufp->fullBit(oldp+323,(vlSelf->rst));
    bufp->fullBit(oldp+324,(vlSelf->wen));
    bufp->fullIData(oldp+325,(vlSelf->pc),32);
    bufp->fullIData(oldp+326,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+327,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+328,(vlSelf->alu_result),32);
    bufp->fullCData(oldp+329,(vlSelf->top__DOT__alu_ctrl),5);
    bufp->fullIData(oldp+330,(vlSelf->top__DOT__memory_out_data),32);
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
    bufp->fullWData(oldp+331,(__Vtemp_h2d8840b3__0),175);
    bufp->fullQData(oldp+337,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+339,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+341,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+343,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+345,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+349,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+350,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+351,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+352,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+353,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+354,(__Vtemp_h5eaeca2d__0),245);
    bufp->fullIData(oldp+362,(vlSelf->top__DOT__memory_1__DOT__mem_out),32);
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
    bufp->fullWData(oldp+363,(__Vtemp_hc779d515__0),390);
    bufp->fullBit(oldp+376,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+377,(vlSelf->top__DOT__w_data),32);
    bufp->fullIData(oldp+378,(5U),32);
    bufp->fullIData(oldp+379,(3U),32);
    bufp->fullIData(oldp+380,(0x20U),32);
    bufp->fullIData(oldp+381,(0U),32);
    bufp->fullIData(oldp+382,(1U),32);
    bufp->fullIData(oldp+383,(0x23U),32);
    bufp->fullIData(oldp+384,(5U),32);
    bufp->fullIData(oldp+385,(7U),32);
    bufp->fullIData(oldp+386,(0x80000000U),32);
    bufp->fullIData(oldp+387,(7U),32);
    bufp->fullIData(oldp+388,(4U),32);
    bufp->fullIData(oldp+389,(0xcU),32);
    bufp->fullIData(oldp+390,(2U),32);
    bufp->fullCData(oldp+391,(0U),2);
    bufp->fullQData(oldp+392,(0x3000c153428d07ULL),56);
    bufp->fullIData(oldp+394,(0xeU),32);
    bufp->fullIData(oldp+395,(4U),32);
    bufp->fullCData(oldp+396,(0U),3);
    bufp->fullCData(oldp+397,(1U),3);
    bufp->fullCData(oldp+398,(2U),3);
    bufp->fullCData(oldp+399,(3U),3);
    bufp->fullCData(oldp+400,(4U),3);
    bufp->fullQData(oldp+401,(0xb86e33ac6f7cULL),50);
    bufp->fullIData(oldp+403,(0xaU),32);
    bufp->fullIData(oldp+404,(8U),32);
    __Vtemp_hf97a663a__0[0U] = 0xb3b4631cU;
    __Vtemp_hf97a663a__0[1U] = 0xb6e4b9deU;
    __Vtemp_hf97a663a__0[2U] = 0x26c1U;
    bufp->fullWData(oldp+405,(__Vtemp_hf97a663a__0),80);
    bufp->fullIData(oldp+408,(8U),32);
    bufp->fullCData(oldp+409,(7U),3);
    __Vtemp_hcef49f09__0[0U] = 0x41866b9cU;
    __Vtemp_hcef49f09__0[1U] = 0xa6ef79ceU;
    __Vtemp_hcef49f09__0[2U] = 0x2e89U;
    bufp->fullWData(oldp+410,(__Vtemp_hcef49f09__0),80);
    bufp->fullIData(oldp+413,(0x27U),32);
    bufp->fullIData(oldp+414,(0xaU),32);
    bufp->fullIData(oldp+415,(9U),32);
    bufp->fullIData(oldp+416,(9U),32);
}
