// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIDU.h for the primary calling header

#ifndef VERILATED_VIDU___024ROOT_H_
#define VERILATED_VIDU___024ROOT_H_  // guard

#include "verilated.h"

class VIDU__Syms;

class VIDU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(Reg__02Eclk,0,0);
        VL_IN8(top__02Eclk,0,0);
        VL_IN8(Reg__02Erst,0,0);
        VL_IN8(din,0,0);
        VL_OUT8(dout,0,0);
        VL_IN8(Reg__02Ewen,0,0);
        VL_IN8(top__02Erst,0,0);
        VL_IN8(top__02Ewen,0,0);
        VL_OUT8(out,0,0);
        VL_IN8(key,0,0);
        VL_IN8(lut,3,0);
        VL_IN8(opcode,6,0);
        VL_OUT8(alu_ctrl,1,0);
        CData/*1:0*/ top__DOT__Ext_type;
        CData/*1:0*/ top__DOT__alu_ctrl;
        CData/*0:0*/ top__DOT__PC_src;
        CData/*1:0*/ top__DOT__RegWrite;
        CData/*0:0*/ top__DOT__add_pc__DOT__i2__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__test_1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__instance1__DOT__test_2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__alu__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__Write_rd_data__DOT__i0__DOT__hit;
        CData/*0:0*/ MuxKey__DOT__i0__DOT__lut_out;
        CData/*0:0*/ MuxKey__DOT__i0__DOT__hit;
        CData/*1:0*/ alu_ctrl_num__DOT__i_test__DOT__i0__DOT__lut_out;
        CData/*0:0*/ alu_ctrl_num__DOT__i_test__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__Reg__02Eclk;
        CData/*0:0*/ __Vtrigrprev__TOP__top__02Eclk;
        CData/*0:0*/ __VactContinue;
        VL_IN(instruction,31,0);
        VL_IN(pc,31,0);
        VL_OUT(rd_data,31,0);
        VL_OUT(next_pc,31,0);
        VL_OUT(alu_result,31,0);
        IData/*31:0*/ top__DOT__rs1_data;
        IData/*31:0*/ top__DOT__ext_imm;
        IData/*31:0*/ top__DOT__out_data1;
        IData/*31:0*/ top__DOT__add_pc__DOT__i2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__test_1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__instance1__DOT__test_2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__alu__DOT____VdfgTmp_h623bd169__0;
        IData/*31:0*/ top__DOT__alu__DOT__i0__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__Write_rd_data__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*32:0*/, 2> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__add_pc__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 4> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__idu__DOT__ext_num_type__DOT__i_extnum__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 4> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__idu__DOT__reg_num_type__DOT__Reg_num_inst__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_file__DOT__rf;
        VlUnpacked<QData/*32:0*/, 2> top__DOT__test_1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__test_1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__test_1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 3> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__instance1__DOT__test_2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__alu__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__alu__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__alu__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__Write_rd_data__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__Write_rd_data__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__Write_rd_data__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 2> MuxKey__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> MuxKey__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 4> alu_ctrl_num__DOT__i_test__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> alu_ctrl_num__DOT__i_test__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 4> alu_ctrl_num__DOT__i_test__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIDU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIDU___024root(VIDU__Syms* symsp, const char* v__name);
    ~VIDU___024root();
    VL_UNCOPYABLE(VIDU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
