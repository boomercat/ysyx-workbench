// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6U] = 0x13U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0U] = 0x118U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1U] = 0x33bU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2U] = 0x37aU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3U] = 0xb9U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4U] = 0x1b9U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5U] = 0x1bU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6U] = 0x9bU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4U] = 3U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0U] = 0xceU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1U] = 0xcU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2U] = 0x19dU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3U] = 0x1bdU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4U] = 0xdfU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5U] = 0x4eU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6U] = 0x5eU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0U] = 0x18fU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1U] = 0x19eU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2U] = 0x1bdU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3U] = 0xdcU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4U] = 0x5cU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0U] = 0x12U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1U] = 0x11U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2U] = 0x10U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3U] = 0xfU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[4U] = 0xeU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[5U] = 0xdU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[6U] = 0xcU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[7U] = 0xaU;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[8U] = 9U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[9U] = 8U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xaU] = 7U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xbU] = 6U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xcU] = 5U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xdU] = 4U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xeU] = 3U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0xfU] = 2U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0x10U] = 1U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0x11U] = 0U;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[0U] = 0x103U;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[1U] = 0x283U;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[2U] = 0x83U;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[3U] = 0x203U;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[4U] = 3U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/white/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->wen = 0;
    vlSelf->pc = 0;
    vlSelf->rd_data = 0;
    vlSelf->next_pc = 0;
    vlSelf->alu_result = 0;
    vlSelf->top__DOT__rs1_data = 0;
    vlSelf->top__DOT__rs2_data = 0;
    vlSelf->top__DOT__ext_imm = 0;
    vlSelf->top__DOT__Ext_type = 0;
    vlSelf->top__DOT__src1_data = 0;
    vlSelf->top__DOT__src2_data = 0;
    vlSelf->top__DOT__alu_ctrl = 0;
    vlSelf->top__DOT__PC_src = 0;
    vlSelf->top__DOT__RegWrite = 0;
    vlSelf->top__DOT__vaild = 0;
    vlSelf->top__DOT__instruction = 0;
    vlSelf->top__DOT__memory_out_data = 0;
    vlSelf->top__DOT__rs2_valid = 0;
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h6abbea74__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__memory_1__DOT__extend_src = 0;
    vlSelf->top__DOT__memory_1__DOT__rdata = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__memory_1__DOT__i_extnum__DOT__i0__DOT__hit = 0;
    vlSelf->__VdfgTmp_ha626693d__0 = 0;
    vlSelf->__VdfgTmp_ha62228bd__0 = 0;
    vlSelf->__VdfgTmp_ha4dc0392__0 = 0;
    vlSelf->__VdfgTmp_ha706d132__0 = 0;
    vlSelf->__VdfgTmp_ha73a0501__0 = 0;
    vlSelf->__VdfgTmp_ha493ef8e__0 = 0;
    vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__memory_1__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
