// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIDU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VIDU___024root.h"

VL_ATTR_COLD void VIDU___024root___eval_static(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIDU___024root___eval_initial__TOP(VIDU___024root* vlSelf);

VL_ATTR_COLD void VIDU___024root___eval_initial(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_initial\n"); );
    // Body
    VIDU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__Reg__02Eclk = vlSelf->Reg__02Eclk;
    vlSelf->__Vtrigrprev__TOP__top__02Eclk = vlSelf->top__02Eclk;
}

VL_ATTR_COLD void VIDU___024root___eval_initial__TOP(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0U] = 0x19cU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1U] = 0x1beU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2U] = 0x5dU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3U] = 0xddU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2U] = 3U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0U] = 0x19dU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1U] = 0x1bdU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2U] = 0xdfU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3U] = 0x5eU;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[2U] = 0x37U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[3U] = 0x17U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[0U] = 0x19fU;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[1U] = 0x1beU;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[2U] = 0xddU;
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[3U] = 0x5cU;
}

VL_ATTR_COLD void VIDU___024root___eval_final(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VIDU___024root___eval_triggers__stl(VIDU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VIDU___024root___dump_triggers__stl(VIDU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VIDU___024root___eval_stl(VIDU___024root* vlSelf);

VL_ATTR_COLD void VIDU___024root___eval_settle(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VIDU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VIDU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/white/ysyx-workbench/npc/vsrc/Reg.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VIDU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIDU___024root___dump_triggers__stl(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VIDU___024root___ico_sequent__TOP__0(VIDU___024root* vlSelf);

VL_ATTR_COLD void VIDU___024root___eval_stl(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VIDU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIDU___024root___dump_triggers__ico(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VIDU___024root___dump_triggers__act(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Reg.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIDU___024root___dump_triggers__nba(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Reg.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIDU___024root___ctor_var_reset(VIDU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIDU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIDU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Reg__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->Reg__02Erst = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(1);
    vlSelf->Reg__02Ewen = VL_RAND_RESET_I(1);
    vlSelf->top__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->top__02Erst = VL_RAND_RESET_I(1);
    vlSelf->top__02Ewen = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->next_pc = VL_RAND_RESET_I(32);
    vlSelf->alu_result = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_I(1);
    vlSelf->key = VL_RAND_RESET_I(1);
    vlSelf->lut = VL_RAND_RESET_I(4);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->alu_ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ext_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Ext_type = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__out_data1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_ctrl = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PC_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__test_1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__test_1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__test_1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__test_1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__test_1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu__DOT____VdfgTmp_h623bd169__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MuxKey__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->MuxKey__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->alu_ctrl_num__DOT__i_test__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__Reg__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__02Eclk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
