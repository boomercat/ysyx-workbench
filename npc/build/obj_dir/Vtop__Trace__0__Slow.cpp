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
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBit(c+252,"rst", false,-1);
    tracep->declBit(c+253,"wen", false,-1);
    tracep->declBus(c+254,"pc", false,-1, 31,0);
    tracep->declBus(c+255,"rd_data", false,-1, 31,0);
    tracep->declBus(c+256,"next_pc", false,-1, 31,0);
    tracep->declBus(c+257,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBit(c+252,"rst", false,-1);
    tracep->declBit(c+253,"wen", false,-1);
    tracep->declBus(c+254,"pc", false,-1, 31,0);
    tracep->declBus(c+255,"rd_data", false,-1, 31,0);
    tracep->declBus(c+256,"next_pc", false,-1, 31,0);
    tracep->declBus(c+257,"alu_result", false,-1, 31,0);
    tracep->declBus(c+74,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+75,"rd_add", false,-1, 4,0);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+110,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+77,"ext_imm", false,-1, 31,0);
    tracep->declBus(c+78,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+79,"ALU_src", false,-1);
    tracep->declBus(c+111,"out_data1", false,-1, 31,0);
    tracep->declBus(c+80,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+81,"PC_src", false,-1, 1,0);
    tracep->declBus(c+82,"RegWrite", false,-1, 1,0);
    tracep->declBit(c+270,"vaild", false,-1);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+112,"memory_out_data", false,-1, 31,0);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->pushNamePrefix("Write_rd_data ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 31,0);
    tracep->declBus(c+82,"key", false,-1, 1,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+258,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 31,0);
    tracep->declBus(c+82,"key", false,-1, 1,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+258,"lut", false,-1, 135,0);
    tracep->declBus(c+276,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+113+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+125,"lut_out", false,-1, 31,0);
    tracep->declBit(c+126,"hit", false,-1);
    tracep->declBus(c+277,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("add_pc ");
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBit(c+252,"rst", false,-1);
    tracep->declBus(c+81,"PC_src", false,-1, 1,0);
    tracep->declBus(c+257,"alu_result", false,-1, 31,0);
    tracep->declBus(c+254,"pc", false,-1, 31,0);
    tracep->declBus(c+256,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+256,"out", false,-1, 31,0);
    tracep->declBus(c+81,"key", false,-1, 1,0);
    tracep->declBus(c+279,"default_out", false,-1, 31,0);
    tracep->declArray(c+263,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+256,"out", false,-1, 31,0);
    tracep->declBus(c+81,"key", false,-1, 1,0);
    tracep->declBus(c+279,"default_out", false,-1, 31,0);
    tracep->declArray(c+263,"lut", false,-1, 101,0);
    tracep->declBus(c+276,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+127+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+133+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+136,"lut_out", false,-1, 31,0);
    tracep->declBit(c+137,"hit", false,-1);
    tracep->declBus(c+280,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+111,"src1", false,-1, 31,0);
    tracep->declBus(c+77,"imm", false,-1, 31,0);
    tracep->declBus(c+80,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+257,"alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+281,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+257,"out", false,-1, 31,0);
    tracep->declBus(c+80,"key", false,-1, 3,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+138,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+281,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+257,"out", false,-1, 31,0);
    tracep->declBus(c+80,"key", false,-1, 3,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+138,"lut", false,-1, 395,0);
    tracep->declBus(c+282,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+151+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+173+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+184,"lut_out", false,-1, 31,0);
    tracep->declBit(c+185,"hit", false,-1);
    tracep->declBus(c+283,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+78,"Ext_type", false,-1, 1,0);
    tracep->declBit(c+79,"ALU_src", false,-1);
    tracep->declBus(c+82,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+81,"PC_src", false,-1, 1,0);
    tracep->declBus(c+75,"rd_add", false,-1, 4,0);
    tracep->declBus(c+74,"rs1_add", false,-1, 4,0);
    tracep->declBus(c+80,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+84,"memory_valid", false,-1);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBit(c+85,"slli_cond", false,-1);
    tracep->declBit(c+86,"srli_cond", false,-1);
    tracep->declBit(c+87,"srai_cond", false,-1);
    tracep->pushNamePrefix("PC_src_num_type ");
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+81,"PC_src", false,-1, 1,0);
    tracep->declBus(c+284,"pc_plus", false,-1, 1,0);
    tracep->declBus(c+285,"pc_ALUresult", false,-1, 1,0);
    tracep->declBus(c+286,"ALU_result", false,-1, 1,0);
    tracep->pushNamePrefix("PC_src_num_mux ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+288,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+288,"lut", false,-1, 35,0);
    tracep->declBus(c+290,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+88,"lut_out", false,-1, 1,0);
    tracep->declBit(c+89,"hit", false,-1);
    tracep->declBus(c+277,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ctrl_num_type ");
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+80,"alu_ctrl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ext_num_type ");
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+78,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+291,"IMM_I", false,-1, 1,0);
    tracep->declBus(c+285,"IMM_U", false,-1, 1,0);
    tracep->declBus(c+286,"IMM_Jal", false,-1, 1,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+292,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+293,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+292,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+293,"lut", false,-1, 44,0);
    tracep->declBus(c+290,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+31+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+41+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+90,"lut_out", false,-1, 1,0);
    tracep->declBit(c+91,"hit", false,-1);
    tracep->declBus(c+295,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_num_type ");
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+82,"RegWrite", false,-1, 1,0);
    tracep->declBus(c+285,"pc_plus4", false,-1, 1,0);
    tracep->declBus(c+286,"ALU_result", false,-1, 1,0);
    tracep->declBus(c+291,"EXT_IMM", false,-1, 1,0);
    tracep->declBus(c+284,"MEMORY_DATA", false,-1, 1,0);
    tracep->pushNamePrefix("Reg_num_inst ");
    tracep->declBus(c+296,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+297,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+296,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+287,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 1,0);
    tracep->declBus(c+76,"key", false,-1, 6,0);
    tracep->declBus(c+284,"default_out", false,-1, 1,0);
    tracep->declQuad(c+297,"lut", false,-1, 53,0);
    tracep->declBus(c+290,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+46+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+52+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+58+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+92,"lut_out", false,-1, 1,0);
    tracep->declBit(c+93,"hit", false,-1);
    tracep->declBus(c+299,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("inst ");
    tracep->declBus(c+254,"pc", false,-1, 31,0);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instance1 ");
    tracep->declBus(c+78,"Ext_type", false,-1, 1,0);
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+77,"ext_imm", false,-1, 31,0);
    tracep->pushNamePrefix("test_2 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    tracep->declBus(c+78,"key", false,-1, 1,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+94,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+272,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    tracep->declBus(c+78,"key", false,-1, 1,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+94,"lut", false,-1, 101,0);
    tracep->declBus(c+276,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+98+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+104+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+107,"lut_out", false,-1, 31,0);
    tracep->declBit(c+108,"hit", false,-1);
    tracep->declBus(c+280,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("memory_1 ");
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+257,"addr", false,-1, 31,0);
    tracep->declBit(c+84,"valid", false,-1);
    tracep->declBus(c+112,"mout_data", false,-1, 31,0);
    tracep->declBus(c+109,"extend_src", false,-1, 9,0);
    tracep->declBus(c+186,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("i_extnum ");
    tracep->declBus(c+292,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 9,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+187,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+292,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+300,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 9,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+187,"lut", false,-1, 209,0);
    tracep->declBus(c+301,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+194+i*2,"pair_list", true,(i+0), 41,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+67+i*1,"key_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+204+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+209,"lut_out", false,-1, 31,0);
    tracep->declBit(c+210,"hit", false,-1);
    tracep->declBus(c+295,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("reg_file ");
    tracep->declBus(c+292,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+251,"clk", false,-1);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+255,"wdata", false,-1, 31,0);
    tracep->declBus(c+75,"waddr", false,-1, 4,0);
    tracep->declBit(c+253,"wen", false,-1);
    tracep->declBus(c+74,"Addr1", false,-1, 4,0);
    tracep->declBus(c+110,"RData1", false,-1, 31,0);
    tracep->declBus(c+302,"j", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+219+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("test_1 ");
    tracep->declBus(c+272,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 31,0);
    tracep->declBus(c+79,"key", false,-1, 0,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+272,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 31,0);
    tracep->declBus(c+79,"key", false,-1, 0,0);
    tracep->declBus(c+274,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 65,0);
    tracep->declBus(c+303,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+211+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+215+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+217,"lut_out", false,-1, 31,0);
    tracep->declBit(c+218,"hit", false,-1);
    tracep->declBus(c+304,"i", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hfa72e0ee__0;
    VlWide<13>/*415:0*/ __Vtemp_h189c200b__0;
    VlWide<7>/*223:0*/ __Vtemp_h392ba67f__0;
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
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3]),2);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4]),2);
    bufp->fullSData(oldp+46,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+47,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+49,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+50,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+51,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4]),10);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+76,((0x7fU & vlSelf->top__DOT__instruction)),7);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__ext_imm),32);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__Ext_type),2);
    bufp->fullBit(oldp+79,((0x17U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__PC_src),2);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__RegWrite),2);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__instruction),32);
    bufp->fullBit(oldp+84,((3U == (0x7fU & vlSelf->top__DOT__instruction))));
    bufp->fullBit(oldp+85,((IData)((0x2001013U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+86,((IData)((0x2005013U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__instruction)))));
    bufp->fullBit(oldp+87,((IData)((0x82005013U == 
                                    (0xfe00707fU & vlSelf->top__DOT__instruction)))));
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit));
    __Vtemp_hfa72e0ee__0[0U] = (IData)((0x300000000ULL 
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
    __Vtemp_hfa72e0ee__0[1U] = (((- (IData)((vlSelf->top__DOT__instruction 
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
    __Vtemp_hfa72e0ee__0[2U] = (8U | ((0xffff0000U 
                                       & (vlSelf->top__DOT__instruction 
                                          << 4U)) | 
                                      (3U & ((- (IData)(
                                                        (vlSelf->top__DOT__instruction 
                                                         >> 0x1fU))) 
                                             >> 0xaU))));
    __Vtemp_hfa72e0ee__0[3U] = (0x10U | (0xffffU & 
                                         (vlSelf->top__DOT__instruction 
                                          >> 0x1cU)));
    bufp->fullWData(oldp+94,(__Vtemp_hfa72e0ee__0),102);
    bufp->fullQData(oldp+98,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+102,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+109,(vlSelf->top__DOT__memory_1__DOT__extend_src),10);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__out_data1),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__memory_out_data),32);
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+127,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit));
    __Vtemp_h189c200b__0[0U] = (IData)((0xa00000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0))));
    __Vtemp_h189c200b__0[1U] = ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0 
                                 << 4U) | (IData)((
                                                   (0xa00000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0))) 
                                                   >> 0x20U)));
    __Vtemp_h189c200b__0[2U] = (0x90U | ((((0x1fU >= 
                                            (0x3fU 
                                             & vlSelf->top__DOT__ext_imm))
                                            ? (vlSelf->top__DOT__out_data1 
                                               << (0x3fU 
                                                   & vlSelf->top__DOT__ext_imm))
                                            : 0U) << 8U) 
                                         | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h8c0211d6__0 
                                            >> 0x1cU)));
    __Vtemp_h189c200b__0[3U] = (0x800U | (((vlSelf->top__DOT__ext_imm 
                                            & vlSelf->top__DOT__out_data1) 
                                           << 0xcU) 
                                          | (((0x1fU 
                                               >= (0x3fU 
                                                   & vlSelf->top__DOT__ext_imm))
                                               ? (vlSelf->top__DOT__out_data1 
                                                  << 
                                                  (0x3fU 
                                                   & vlSelf->top__DOT__ext_imm))
                                               : 0U) 
                                             >> 0x18U)));
    __Vtemp_h189c200b__0[4U] = (0x7000U | (((vlSelf->top__DOT__ext_imm 
                                             | vlSelf->top__DOT__out_data1) 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__ext_imm 
                                               & vlSelf->top__DOT__out_data1) 
                                              >> 0x14U)));
    __Vtemp_h189c200b__0[5U] = (0x60000U | (((vlSelf->top__DOT__ext_imm 
                                              ^ vlSelf->top__DOT__out_data1) 
                                             << 0x14U) 
                                            | ((vlSelf->top__DOT__ext_imm 
                                                | vlSelf->top__DOT__out_data1) 
                                               >> 0x10U)));
    __Vtemp_h189c200b__0[6U] = (0x500000U | (((IData)(vlSelf->__VdfgTmp_he6c18802__0) 
                                              << 0x18U) 
                                             | ((vlSelf->top__DOT__ext_imm 
                                                 ^ vlSelf->top__DOT__out_data1) 
                                                >> 0xcU)));
    __Vtemp_h189c200b__0[7U] = (0x4000000U | (0xe0000000U 
                                              & (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                                 << 0x1cU)));
    __Vtemp_h189c200b__0[8U] = (0x30000000U | (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                               >> 4U));
    __Vtemp_h189c200b__0[9U] = vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0;
    __Vtemp_h189c200b__0[0xaU] = (2U | (vlSelf->top__DOT__ext_imm 
                                        << 4U));
    __Vtemp_h189c200b__0[0xbU] = (0x10U | ((vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                            << 8U) 
                                           | (vlSelf->top__DOT__ext_imm 
                                              >> 0x1cU)));
    __Vtemp_h189c200b__0[0xcU] = (vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 
                                  >> 0x18U);
    bufp->fullWData(oldp+138,(__Vtemp_h189c200b__0),396);
    bufp->fullQData(oldp+151,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+153,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+155,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+157,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+169,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+171,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__memory_1__DOT__rdata),32);
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
    bufp->fullWData(oldp+187,(__Vtemp_h392ba67f__0),210);
    bufp->fullQData(oldp+194,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[0]),42);
    bufp->fullQData(oldp+196,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[1]),42);
    bufp->fullQData(oldp+198,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[2]),42);
    bufp->fullQData(oldp+200,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[3]),42);
    bufp->fullQData(oldp+202,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[4]),42);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+211,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__test_1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__reg_file__DOT__rf[31]),32);
    bufp->fullBit(oldp+251,(vlSelf->clk));
    bufp->fullBit(oldp+252,(vlSelf->rst));
    bufp->fullBit(oldp+253,(vlSelf->wen));
    bufp->fullIData(oldp+254,(vlSelf->pc),32);
    bufp->fullIData(oldp+255,(vlSelf->rd_data),32);
    bufp->fullIData(oldp+256,(vlSelf->next_pc),32);
    bufp->fullIData(oldp+257,(vlSelf->alu_result),32);
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
    bufp->fullWData(oldp+258,(__Vtemp_h1b997cca__0),136);
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
    bufp->fullWData(oldp+263,(__Vtemp_hbdeed6a0__0),102);
    __Vtemp_h2ea4f700__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h2ea4f700__0[1U] = ((vlSelf->top__DOT__rs1_data 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_h2ea4f700__0[2U] = (vlSelf->top__DOT__rs1_data 
                                >> 0x1fU);
    bufp->fullWData(oldp+267,(__Vtemp_h2ea4f700__0),66);
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__vaild));
    bufp->fullIData(oldp+271,(4U),32);
    bufp->fullIData(oldp+272,(2U),32);
    bufp->fullIData(oldp+273,(0x20U),32);
    bufp->fullIData(oldp+274,(0U),32);
    bufp->fullIData(oldp+275,(1U),32);
    bufp->fullIData(oldp+276,(0x22U),32);
    bufp->fullIData(oldp+277,(4U),32);
    bufp->fullIData(oldp+278,(3U),32);
    bufp->fullIData(oldp+279,(0x80000000U),32);
    bufp->fullIData(oldp+280,(3U),32);
    bufp->fullIData(oldp+281,(0xbU),32);
    bufp->fullIData(oldp+282,(0x24U),32);
    bufp->fullIData(oldp+283,(0xbU),32);
    bufp->fullCData(oldp+284,(0U),2);
    bufp->fullCData(oldp+285,(1U),2);
    bufp->fullCData(oldp+286,(2U),2);
    bufp->fullIData(oldp+287,(7U),32);
    bufp->fullQData(oldp+288,(0x2e3737b9eULL),36);
    bufp->fullIData(oldp+290,(9U),32);
    bufp->fullCData(oldp+291,(3U),2);
    bufp->fullIData(oldp+292,(5U),32);
    bufp->fullQData(oldp+293,(0x4f6e9777d9fULL),45);
    bufp->fullIData(oldp+295,(5U),32);
    bufp->fullIData(oldp+296,(6U),32);
    bufp->fullQData(oldp+297,(0xbc4e6fef73a0cULL),54);
    bufp->fullIData(oldp+299,(6U),32);
    bufp->fullIData(oldp+300,(0xaU),32);
    bufp->fullIData(oldp+301,(0x2aU),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__reg_file__DOT__j),32);
    bufp->fullIData(oldp+303,(0x21U),32);
    bufp->fullIData(oldp+304,(2U),32);
}
