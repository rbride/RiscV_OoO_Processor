// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__clock;
        CData/*0:0*/ testbench__DOT__reset;
        CData/*1:0*/ testbench__DOT__proc2mem_command;
        CData/*3:0*/ testbench__DOT__mem2proc_response;
        CData/*1:0*/ testbench__DOT__proc2mem_size;
        CData/*3:0*/ testbench__DOT__pipeline_error_status;
        CData/*0:0*/ testbench__DOT__mem_wb_valid_inst;
        CData/*0:0*/ testbench__DOT__core__DOT__mem_wb_halt;
        CData/*0:0*/ testbench__DOT__core__DOT__mem_wb_illegal;
        CData/*4:0*/ testbench__DOT__core__DOT__mem_wb_dest_reg_idx;
        CData/*0:0*/ testbench__DOT__core__DOT__mem_wb_take_branch;
        CData/*0:0*/ testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result;
        CData/*3:0*/ testbench__DOT__memory__DOT__next_mem2proc_response;
        CData/*7:0*/ testbench__DOT__memory__DOT__waiting_for_bus;
        CData/*0:0*/ testbench__DOT__memory__DOT__acquire_tag;
        CData/*0:0*/ testbench__DOT__memory__DOT__bus_filled;
        CData/*0:0*/ __Vintraval_h0f79d611__0;
        CData/*0:0*/ __Vintraval_h2d62e545__0;
        CData/*0:0*/ __Vintraval_hbcbfaaef__0;
        CData/*4:0*/ __Vintraval_hbd9ee838__0;
        CData/*0:0*/ __Vintraval_h698caf6c__0;
        CData/*0:0*/ __Vintraval_h9e56db78__0;
        CData/*0:0*/ __Vintraval_h083e453e__0;
        CData/*0:0*/ __Vintraval_h860cadea__0;
        CData/*4:0*/ __Vintraval_h8a8541a4__0;
        CData/*0:0*/ __Vintraval_h49fc45d5__0;
        CData/*0:0*/ __Vintraval_hc060a9b7__0;
        CData/*3:0*/ __Vintraval_h41d46bb4__0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__if_packet__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__if_packet__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_NPC__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_IR__v0;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v0;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v0;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__mem_wb_valid_inst__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_valid_inst__v0;
        CData/*4:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_NPC__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_IR__v1;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v1;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v1;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__mem_wb_valid_inst__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem_wb_valid_inst__v1;
        CData/*4:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1;
        CData/*0:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__ex_mem_IR__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__ex_mem_IR__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__id_ex_packet__v0;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__clock_count__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__instr_count__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__clock_count__v1;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__instr_count__v1;
        CData/*3:0*/ __Vdlyvval__testbench__DOT__mem2proc_response__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem2proc_response__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__mem2proc_data__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__debug_counter__v0;
        CData/*0:0*/ __Vdlyvset__testbench__DOT__debug_counter__v1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clock__0;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*127:0*/ testbench__DOT__memory__DOT__cycles_left;
        SData/*15:0*/ testbench__DOT__memory__DOT____Vlvbound_hbe108737__0;
        SData/*9:0*/ __Vintralsb_he479cc5a__0;
        SData/*9:0*/ __Vdlyvlsb__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0;
        IData/*31:0*/ testbench__DOT__clock_count;
        IData/*31:0*/ testbench__DOT__instr_count;
        IData/*31:0*/ testbench__DOT__wb_fileno;
        IData/*31:0*/ testbench__DOT__proc2mem_addr;
        IData/*31:0*/ testbench__DOT__ex_mem_IR;
        IData/*31:0*/ testbench__DOT__mem_wb_NPC;
        IData/*31:0*/ testbench__DOT__mem_wb_IR;
        IData/*31:0*/ testbench__DOT__show_mem_with_decimal__Vstatic__showing_data;
        IData/*31:0*/ testbench__DOT__core__DOT__mem_result_out;
        IData/*31:0*/ testbench__DOT__core__DOT__mem_wb_result;
        IData/*31:0*/ testbench__DOT__core__DOT__wb_reg_wr_data_out;
        IData/*31:0*/ testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg;
        IData/*31:0*/ testbench__DOT__core__DOT__if_stage_0__DOT__next_PC;
        VlWide<32>/*1023:0*/ testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers;
        IData/*31:0*/ testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result;
        IData/*31:0*/ __Vintraval_h30ada901__0;
        IData/*31:0*/ __Vintraval_hddb792fe__0;
        IData/*31:0*/ __Vintraval_h22fa2ad9__0;
        IData/*31:0*/ __Vintraval_h6d399f0c__0;
        VlWide<4>/*96:0*/ __Vintraval_hbb27da80__0;
        VlWide<6>/*183:0*/ __Vintraval_h57c82110__0;
        IData/*31:0*/ __Vintraval_h4635edd1__0;
        IData/*31:0*/ __Vintraval_ha586e80c__0;
        VlWide<4>/*110:0*/ __Vintraval_h28a1aa78__0;
        IData/*31:0*/ __Vintraval_h62f5f5b6__0;
        IData/*31:0*/ __Vintraval_h8d68bc5c__0;
        IData/*31:0*/ __Vintraval_h3ad3a407__0;
        IData/*31:0*/ __Vintraval_he40ebbb7__0;
        IData/*31:0*/ __Vintraval_h64a742bc__0;
        IData/*31:0*/ __Vintraval_h7af5a8eb__0;
        IData/*31:0*/ __Vintraval_h80038af5__0;
        IData/*31:0*/ __Vintraval_h64b70171__0;
        IData/*31:0*/ __Vintraval_hadedbdad__0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0;
        IData/*31:0*/ __Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__mem_wb_NPC__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__mem_wb_IR__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__mem_wb_NPC__v1;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__mem_wb_IR__v1;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v1;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__ex_mem_IR__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__ex_mem_IR__v1;
        VlWide<4>/*110:0*/ __Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1;
        VlWide<6>/*183:0*/ __Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0;
    };
    struct {
        VlWide<4>/*96:0*/ __Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__clock_count__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__instr_count__v0;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__clock_count__v1;
        IData/*31:0*/ __Vdlyvval__testbench__DOT__instr_count__v1;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ testbench__DOT__mem2proc_data;
        QData/*63:0*/ testbench__DOT__debug_counter;
        VlWide<4>/*96:0*/ testbench__DOT__core__DOT__if_packet;
        VlWide<4>/*96:0*/ testbench__DOT__core__DOT__if_id_packet;
        VlWide<6>/*183:0*/ testbench__DOT__core__DOT__id_packet;
        VlWide<6>/*183:0*/ testbench__DOT__core__DOT__id_ex_packet;
        VlWide<4>/*110:0*/ testbench__DOT__core__DOT__ex_mem_packet;
        QData/*63:0*/ testbench__DOT__memory__DOT__next_mem2proc_data;
        QData/*63:0*/ testbench__DOT__memory__DOT__c;
        QData/*63:0*/ testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
        QData/*63:0*/ testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
        QData/*63:0*/ testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
        QData/*63:0*/ testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
        QData/*63:0*/ testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
        VlWide<4>/*96:0*/ __Vintraval_ha5bfde55__0;
        VlWide<4>/*110:0*/ __Vintraval_h1a24b678__0;
        QData/*63:0*/ __Vintraval_h9f73057d__0;
        VlWide<4>/*110:0*/ __Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0;
        VlWide<4>/*96:0*/ __Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1;
        QData/*63:0*/ __Vdlyvval__testbench__DOT__mem2proc_data__v0;
        QData/*63:0*/ __Vdlyvval__testbench__DOT__debug_counter__v1;
        VlUnpacked<QData/*63:0*/, 8192> testbench__DOT__memory__DOT__unified_memory;
        VlUnpacked<QData/*63:0*/, 8> testbench__DOT__memory__DOT__loaded_data;
    };
    double testbench__DOT__show_clk_count__Vstatic__cpi;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h967bdccf__0;
    VlTriggerScheduler __VtrigSched_h967bdd8e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
