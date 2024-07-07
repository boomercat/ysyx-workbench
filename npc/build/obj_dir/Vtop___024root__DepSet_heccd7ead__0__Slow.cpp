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
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__write_valid 
        = vlSelf->top__DOT__memory_1__DOT__write_valid;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_valid 
        = vlSelf->top__DOT__memory_valid;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[6U] = 0U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[1U] = 0x33U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[2U] = 0x13U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[3U] = 0x23U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[5U] = 0x63U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[6U] = 0x17U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[7U] = 0x67U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[8U] = 0x6fU;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[9U] = 0x37U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[9U] = 0x3700000000ULL;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[6U] = 0x6fU;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[6U] = 4U;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[6U] = 0x6f00000004ULL;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[1U] = 0x23U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[2U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[3U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[4U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[5U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[6U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[7U] = 0x13U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[2U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[6U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[7U] = 3U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[0U] = 0x31cU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[1U] = 0x118U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[2U] = 0x33bU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[3U] = 0x37aU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[4U] = 0xb9U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[5U] = 0x1b9U;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[6U] = 0x1bU;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[7U] = 0x9bU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[1U] = 0x33U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[4U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[5U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[6U] = 0x13U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[5U] = 3U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[6U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list[7U] = 2U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[0U] = 0x39cU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[1U] = 0x19aU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[2U] = 0x18U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[3U] = 0x339U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[4U] = 0x379U;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[5U] = 0x1bbU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[6U] = 0x9aU;
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[7U] = 0xbaU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[1U] = 0x63U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[2U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list[4U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[0U] = 0x37cU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[1U] = 0x31bU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[2U] = 0x33aU;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[3U] = 0x1b8U;
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__pair_list[4U] = 0xb8U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[0U] = 0x341U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[1U] = 0x342U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[2U] = 0x305U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[3U] = 0x300U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[0U] = 0xd07U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[1U] = 0xd0aU;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[2U] = 0xc15U;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[3U] = 0xc00U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[0U] = 0x341U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[1U] = 0x342U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[2U] = 0x305U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[3U] = 0x300U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[0U] = 0xd07U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[1U] = 0xd0aU;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[2U] = 0xc15U;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[3U] = 0xc00U;
    vlSelf->top__DOT__csrregister__DOT__csr_register[0U] = 0x1800U;
    vlSelf->top__DOT__csrregister__DOT__csr_register[1U] = 0U;
    vlSelf->top__DOT__csrregister__DOT__csr_register[2U] = 0U;
    vlSelf->top__DOT__csrregister__DOT__csr_register[3U] = 0U;
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

void Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(IData/*31:0*/ i);
void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(IData/*31:0*/ i);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__memory_out_data));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->top__DOT__csrregister__DOT__csr_register
                                            [3U])));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->top__DOT__csrregister__DOT__csr_register
                                            [1U])));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->alu_result)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[6U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->alu_result 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[8U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__memory_out_data;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[3U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [3U];
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [1U];
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[4U] 
        = vlSelf->alu_result;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[6U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[5U] 
        = (vlSelf->alu_result + vlSelf->pc);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[6U] 
        = vlSelf->pc;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[8U] 
        = vlSelf->pc;
    Vtop___024root____Vdpiimwrap_top__DOT__inst__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout);
    vlSelf->top__DOT__instruction = vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout;
    if ((0x100073U == vlSelf->top__DOT__instruction)) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npctrap_TOP(1U);
    }
    if (((IData)((0x2001013U == (0xfe00707fU & vlSelf->top__DOT__instruction))) 
         | ((IData)((0x2005013U == (0xfe00707fU & vlSelf->top__DOT__instruction))) 
            | (IData)((0x82005013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__instruction)))))) {
        Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__set_npcinv_TOP(1U);
    }
    vlSelf->top__DOT__memory_valid = (3U == (0x7fU 
                                             & vlSelf->top__DOT__instruction));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
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
                                                            >> 7U)))))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__instruction 
                                                >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->top__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__instruction) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__instruction 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__instruction 
                                                         >> 0x14U))))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->top__DOT__instruction))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((vlSelf->top__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__instruction 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instruction 
                                            >> 7U))))));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__RegWrite = ((IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out)
                                   : 7U);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__PC_src = ((IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->top__DOT__idu__DOT__PC_src_num_type__DOT__PC_src_num_mux__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->top__DOT__csr_imm = ((0x73U == (0x7fU & vlSelf->top__DOT__instruction))
                                  ? (vlSelf->top__DOT__instruction 
                                     >> 0x14U) : 0U);
    vlSelf->top__DOT__memory_1__DOT__write_valid = 
        (0x23U == (0x7fU & vlSelf->top__DOT__instruction));
    vlSelf->top__DOT__rs1_add = ((1U | (0x37U != (0x7fU 
                                                  & vlSelf->top__DOT__instruction)))
                                  ? (0x1fU & (vlSelf->top__DOT__instruction 
                                              >> 0xfU))
                                  : 0U);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
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
                                                            >> 7U))))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__instruction 
                                                >> 0x14U));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__instruction) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__instruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__instruction 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->top__DOT__instruction);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__instruction 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__instruction 
                                                      >> 7U))));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__Ext_type = ((IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = (
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__PC_src)) 
                                                    & (1U 
                                                       == vlSelf->alu_result))
                                                    ? 3U
                                                    : 
                                                   (((3U 
                                                      == (IData)(vlSelf->top__DOT__PC_src)) 
                                                     & (0U 
                                                        == vlSelf->alu_result))
                                                     ? 0U
                                                     : 
                                                    ((0x73U 
                                                      == vlSelf->top__DOT__instruction)
                                                      ? 5U
                                                      : 
                                                     ((0x30200073U 
                                                       == vlSelf->top__DOT__instruction)
                                                       ? 6U
                                                       : (IData)(vlSelf->top__DOT__PC_src)))));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                       == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_imm) == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__waddr_in = 
        ((IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                       == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_imm) == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_imm) 
                          == vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_imm) == 
              vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__csrregister__DOT__raddr_in = 
        ((IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit)
          ? (IData)(vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out)
          : 0U);
    vlSelf->top__DOT__rs2_add = (((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__instruction)) 
                                  | ((IData)(vlSelf->top__DOT__memory_1__DOT__write_valid) 
                                     | (0x33U == (0x7fU 
                                                  & vlSelf->top__DOT__instruction))))
                                  ? (0x1fU & (vlSelf->top__DOT__instruction 
                                              >> 0x14U))
                                  : 0U);
    if ((0U == (IData)(vlSelf->top__DOT__rs1_add))) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7U] = 0U;
        vlSelf->top__DOT__rs1_data = 0U;
    } else {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[3U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[5U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[7U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs1_add];
        vlSelf->top__DOT__rs1_data = vlSelf->top__DOT__reg_file__DOT__rf
            [vlSelf->top__DOT__rs1_add];
    }
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                       == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Ext_type) == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__Ext_type) 
                          == vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__Ext_type) == 
              vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ext_imm = ((IData)(vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->top__DOT__odata = vlSelf->top__DOT__csrregister__DOT__csr_register
        [vlSelf->top__DOT__csrregister__DOT__raddr_in];
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csrregister__DOT__csr_register
        [vlSelf->top__DOT__csrregister__DOT__raddr_in];
    if ((0U == (IData)(vlSelf->top__DOT__rs2_add))) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->top__DOT__rs2_data = 0U;
    } else {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs2_add];
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT__reg_file__DOT__rf[vlSelf->top__DOT__rs2_add];
        vlSelf->top__DOT__rs2_data = vlSelf->top__DOT__reg_file__DOT__rf
            [vlSelf->top__DOT__rs2_add];
    }
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__src1_data = ((IData)(vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[1U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[2U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[3U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[5U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[7U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1_data)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[1U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[5U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[8U] 
        = (0x3700000000ULL | (QData)((IData)(vlSelf->top__DOT__ext_imm)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[5U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[7U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[8U] 
        = vlSelf->top__DOT__ext_imm;
    vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 
        = (vlSelf->pc + vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__odata)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[4U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->top__DOT__rs2_data)));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                       == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__RegWrite) == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__RegWrite) 
                          == vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__RegWrite) == 
              vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->rd_data = ((IData)(vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out
                        : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                       == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
           == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
                          == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__add_pc__DOT__next_pc_type) 
              == vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->next_pc = ((IData)(vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit)
                        ? vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out
                        : 0x80000000U);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                       == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__instruction) 
           == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__instruction) 
                          == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__instruction) 
              == vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__src2_data = ((IData)(vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit)
                                    ? vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0)));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(edge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] clk or [changed] top.memory_1.write_valid or [changed] top.memory_valid)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(edge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] clk or [changed] top.memory_1.write_valid or [changed] top.memory_valid)\n");
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
    vlSelf->top__DOT__rd_add = 0;
    vlSelf->top__DOT__rs1_add = 0;
    vlSelf->top__DOT__rs1_data = 0;
    vlSelf->top__DOT__rs2_add = 0;
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
    vlSelf->top__DOT__memory_valid = 0;
    vlSelf->top__DOT__odata = 0;
    vlSelf->top__DOT__csr_imm = 0;
    vlSelf->top__DOT__w_data = 0;
    vlSelf->top__DOT__add_pc__DOT__next_pc_type = 0;
    vlSelf->top__DOT__add_pc__DOT____VdfgTmp_h593118bb__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
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
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__src1_data_num__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__src2_data_num__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__csrregister__DOT__waddr_in = 0;
    vlSelf->top__DOT__csrregister__DOT__raddr_in = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__csr_register[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__csrregister__DOT__waddr_mux__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__csrregister__DOT__raddr_mux__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__memory_1__DOT__write_valid = 0;
    vlSelf->top__DOT__memory_1__DOT__mem_out = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__Write_rd_data__DOT__i0__DOT__hit = 0;
    vlSelf->__Vfunc_top__DOT__inst__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_1__DOT__write_valid = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__memory_valid = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
