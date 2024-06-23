// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__3(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__4(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__5(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__6(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__7(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__8(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__9(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__10(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__11(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    Vtop___024root___eval_initial__TOP__1(vlSelf);
    Vtop___024root___eval_initial__TOP__2(vlSelf);
    Vtop___024root___eval_initial__TOP__3(vlSelf);
    Vtop___024root___eval_initial__TOP__4(vlSelf);
    Vtop___024root___eval_initial__TOP__5(vlSelf);
    Vtop___024root___eval_initial__TOP__6(vlSelf);
    Vtop___024root___eval_initial__TOP__7(vlSelf);
    Vtop___024root___eval_initial__TOP__8(vlSelf);
    Vtop___024root___eval_initial__TOP__9(vlSelf);
    Vtop___024root___eval_initial__TOP__10(vlSelf);
    Vtop___024root___eval_initial__TOP__11(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0 
        = vlSelf->testbench__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "testbench/testbench.sv", 
                                           129);
        vlSelf->testbench__DOT__clock = (1U & (~ (IData)(vlSelf->testbench__DOT__clock)));
    }
}

VlCoroutine Vtop___024root____Vfork_h42b38799__0__2(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_hadedbdad__0, SData/*9:0*/ __Vintralsb_he479cc5a__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/regfile.sv", 
                                                           56);
        if ((0U != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx))) {
            vlSelf->__Vintralsb_he479cc5a__0 = (0x3ffU 
                                                & ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx) 
                                                   << 5U));
            vlSelf->__Vintraval_hadedbdad__0 = vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out;
            Vtop___024root____Vfork_h42b38799__0__2(vlSelf, vlSelf->__Vintraval_hadedbdad__0, (IData)(vlSelf->__Vintralsb_he479cc5a__0));
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h42b38799__0__2(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_hadedbdad__0, SData/*9:0*/ __Vintralsb_he479cc5a__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h42b38799__0__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/regfile.sv", 
                                       58);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 
        = __Vintraval_hadedbdad__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 = 1U;
    vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 
        = __Vintralsb_he479cc5a__0;
}

VlCoroutine Vtop___024root____Vfork_h6ac248c6__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_hc060a9b7__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/if_stage.sv", 
                                                           68);
        vlSelf->__Vintraval_hc060a9b7__0 = ((IData)(vlSelf->testbench__DOT__reset) 
                                            | (IData)(vlSelf->testbench__DOT__mem_wb_valid_inst));
        Vtop___024root____Vfork_h6ac248c6__0__1(vlSelf, vlSelf->__Vintraval_hc060a9b7__0);
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h6ac248c6__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_hc060a9b7__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h6ac248c6__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/if_stage.sv", 
                                       70);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_packet__v0 
        = __Vintraval_hc060a9b7__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_packet__v0 = 1U;
    vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0 = 0x60U;
}

VlCoroutine Vtop___024root____Vfork_hfee805ee__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h80038af5__0);
VlCoroutine Vtop___024root____Vfork_hb3f27fc1__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h64b70171__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__4\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/if_stage.sv", 
                                                           57);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_h80038af5__0 = 0U;
            Vtop___024root____Vfork_hfee805ee__0__1(vlSelf, vlSelf->__Vintraval_h80038af5__0);
        } else if ((1U & (vlSelf->testbench__DOT__core__DOT__if_packet[3U] 
                          | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                             >> 0xeU)))) {
            vlSelf->__Vintraval_h64b70171__0 = vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__next_PC;
            Vtop___024root____Vfork_hb3f27fc1__0__1(vlSelf, vlSelf->__Vintraval_h64b70171__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hb3f27fc1__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h64b70171__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hb3f27fc1__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/if_stage.sv", 
                                       61);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1 
        = __Vintraval_h64b70171__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hfee805ee__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h80038af5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hfee805ee__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/if_stage.sv", 
                                       59);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0 
        = __Vintraval_h80038af5__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_he84bf76a__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h62f5f5b6__0);
VlCoroutine Vtop___024root____Vfork_h1e9ef958__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h8d68bc5c__0);
VlCoroutine Vtop___024root____Vfork_h659e6953__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h0f79d611__0);
VlCoroutine Vtop___024root____Vfork_h347238ef__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h2d62e545__0);
VlCoroutine Vtop___024root____Vfork_h34561061__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_hbcbfaaef__0);
VlCoroutine Vtop___024root____Vfork_h99e3bc10__0__1(Vtop___024root* vlSelf, CData/*4:0*/ __Vintraval_hbd9ee838__0);
VlCoroutine Vtop___024root____Vfork_h0a34d588__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h698caf6c__0);
VlCoroutine Vtop___024root____Vfork_hb8f8a044__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h3ad3a407__0);
VlCoroutine Vtop___024root____Vfork_hc9f351da__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_he40ebbb7__0);
VlCoroutine Vtop___024root____Vfork_hd6f83b0e__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h64a742bc__0);
VlCoroutine Vtop___024root____Vfork_hb63943c3__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h9e56db78__0);
VlCoroutine Vtop___024root____Vfork_h6eb92c74__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h083e453e__0);
VlCoroutine Vtop___024root____Vfork_h0d6980ea__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h860cadea__0);
VlCoroutine Vtop___024root____Vfork_hbac26342__0__1(Vtop___024root* vlSelf, CData/*4:0*/ __Vintraval_h8a8541a4__0);
VlCoroutine Vtop___024root____Vfork_hae454ce9__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h49fc45d5__0);
VlCoroutine Vtop___024root____Vfork_h83a52ac0__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h7af5a8eb__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__5\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/top.sv", 
                                                           313);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_h62f5f5b6__0 = 0U;
            Vtop___024root____Vfork_he84bf76a__0__1(vlSelf, vlSelf->__Vintraval_h62f5f5b6__0);
            vlSelf->__Vintraval_h8d68bc5c__0 = 0x13U;
            Vtop___024root____Vfork_h1e9ef958__0__1(vlSelf, vlSelf->__Vintraval_h8d68bc5c__0);
            vlSelf->__Vintraval_h0f79d611__0 = 0U;
            Vtop___024root____Vfork_h659e6953__0__1(vlSelf, vlSelf->__Vintraval_h0f79d611__0);
            vlSelf->__Vintraval_h2d62e545__0 = 0U;
            Vtop___024root____Vfork_h347238ef__0__1(vlSelf, vlSelf->__Vintraval_h2d62e545__0);
            vlSelf->__Vintraval_hbcbfaaef__0 = 0U;
            Vtop___024root____Vfork_h34561061__0__1(vlSelf, vlSelf->__Vintraval_hbcbfaaef__0);
            vlSelf->__Vintraval_hbd9ee838__0 = 0U;
            Vtop___024root____Vfork_h99e3bc10__0__1(vlSelf, vlSelf->__Vintraval_hbd9ee838__0);
            vlSelf->__Vintraval_h698caf6c__0 = 0U;
            Vtop___024root____Vfork_h0a34d588__0__1(vlSelf, vlSelf->__Vintraval_h698caf6c__0);
            vlSelf->__Vintraval_h3ad3a407__0 = 0U;
            Vtop___024root____Vfork_hb8f8a044__0__1(vlSelf, vlSelf->__Vintraval_h3ad3a407__0);
        } else {
            vlSelf->__Vintraval_he40ebbb7__0 = ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                                                 << 0x11U) 
                                                | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                   >> 0xfU));
            Vtop___024root____Vfork_hc9f351da__0__1(vlSelf, vlSelf->__Vintraval_he40ebbb7__0);
            vlSelf->__Vintraval_h64a742bc__0 = vlSelf->testbench__DOT__ex_mem_IR;
            Vtop___024root____Vfork_hd6f83b0e__0__1(vlSelf, vlSelf->__Vintraval_h64a742bc__0);
            vlSelf->__Vintraval_h9e56db78__0 = (1U 
                                                & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                   >> 6U));
            Vtop___024root____Vfork_hb63943c3__0__1(vlSelf, vlSelf->__Vintraval_h9e56db78__0);
            vlSelf->__Vintraval_h083e453e__0 = (1U 
                                                & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                   >> 5U));
            Vtop___024root____Vfork_h6eb92c74__0__1(vlSelf, vlSelf->__Vintraval_h083e453e__0);
            vlSelf->__Vintraval_h860cadea__0 = (1U 
                                                & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                   >> 3U));
            Vtop___024root____Vfork_h0d6980ea__0__1(vlSelf, vlSelf->__Vintraval_h860cadea__0);
            vlSelf->__Vintraval_h8a8541a4__0 = (0x1fU 
                                                & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                   >> 7U));
            Vtop___024root____Vfork_hbac26342__0__1(vlSelf, vlSelf->__Vintraval_h8a8541a4__0);
            vlSelf->__Vintraval_h49fc45d5__0 = (1U 
                                                & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                   >> 0xeU));
            Vtop___024root____Vfork_hae454ce9__0__1(vlSelf, vlSelf->__Vintraval_h49fc45d5__0);
            vlSelf->__Vintraval_h7af5a8eb__0 = vlSelf->testbench__DOT__core__DOT__mem_result_out;
            Vtop___024root____Vfork_h83a52ac0__0__1(vlSelf, vlSelf->__Vintraval_h7af5a8eb__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h83a52ac0__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h7af5a8eb__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h83a52ac0__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       334);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v1 
        = __Vintraval_h7af5a8eb__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hae454ce9__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h49fc45d5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hae454ce9__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       332);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v1 
        = __Vintraval_h49fc45d5__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hbac26342__0__1(Vtop___024root* vlSelf, CData/*4:0*/ __Vintraval_h8a8541a4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hbac26342__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       331);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1 
        = __Vintraval_h8a8541a4__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h0d6980ea__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h860cadea__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h0d6980ea__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       330);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v1 
        = __Vintraval_h860cadea__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h6eb92c74__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h083e453e__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h6eb92c74__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       329);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v1 
        = __Vintraval_h083e453e__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hb63943c3__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h9e56db78__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hb63943c3__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       328);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v1 
        = __Vintraval_h9e56db78__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hd6f83b0e__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h64a742bc__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hd6f83b0e__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       327);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v1 
        = __Vintraval_h64a742bc__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hc9f351da__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_he40ebbb7__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hc9f351da__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       326);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v1 
        = __Vintraval_he40ebbb7__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hb8f8a044__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h3ad3a407__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hb8f8a044__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       322);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v0 
        = __Vintraval_h3ad3a407__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h0a34d588__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h698caf6c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h0a34d588__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       321);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v0 
        = __Vintraval_h698caf6c__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h99e3bc10__0__1(Vtop___024root* vlSelf, CData/*4:0*/ __Vintraval_hbd9ee838__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h99e3bc10__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       320);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0 
        = __Vintraval_hbd9ee838__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h34561061__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_hbcbfaaef__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h34561061__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       319);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v0 
        = __Vintraval_hbcbfaaef__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h347238ef__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h2d62e545__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h347238ef__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       318);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v0 
        = __Vintraval_h2d62e545__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h659e6953__0__1(Vtop___024root* vlSelf, CData/*0:0*/ __Vintraval_h0f79d611__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h659e6953__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       317);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v0 
        = __Vintraval_h0f79d611__0;
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h1e9ef958__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h8d68bc5c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h1e9ef958__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       316);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v0 
        = __Vintraval_h8d68bc5c__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_he84bf76a__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h62f5f5b6__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_he84bf76a__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       315);
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v0 
        = __Vintraval_h62f5f5b6__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_hb6a64c28__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h4635edd1__0);
VlCoroutine Vtop___024root____Vfork_hbd2f4069__0__1(Vtop___024root* vlSelf, VlWide<4>/*110:0*/ __Vintraval_h1a24b678__0);
VlCoroutine Vtop___024root____Vfork_ha46ef4a9__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_ha586e80c__0);
VlCoroutine Vtop___024root____Vfork_h13b45a36__0__1(Vtop___024root* vlSelf, VlWide<4>/*110:0*/ __Vintraval_h28a1aa78__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__6\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9adc9367__0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/top.sv", 
                                                           271);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_h4635edd1__0 = 0x13U;
            Vtop___024root____Vfork_hb6a64c28__0__1(vlSelf, vlSelf->__Vintraval_h4635edd1__0);
            vlSelf->__Vintraval_h1a24b678__0[0U] = 0U;
            vlSelf->__Vintraval_h1a24b678__0[1U] = 0U;
            vlSelf->__Vintraval_h1a24b678__0[2U] = 0U;
            vlSelf->__Vintraval_h1a24b678__0[3U] = 0U;
            Vtop___024root____Vfork_hbd2f4069__0__1(vlSelf, vlSelf->__Vintraval_h1a24b678__0);
        } else {
            vlSelf->__Vintraval_ha586e80c__0 = ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                 << 0xeU) 
                                                | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                   >> 0x12U));
            Vtop___024root____Vfork_ha46ef4a9__0__1(vlSelf, vlSelf->__Vintraval_ha586e80c__0);
            __Vtemp_h9adc9367__0[1U] = (((IData)((((QData)((IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                                      << 8U) 
                                                                     | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                                        >> 0x18U)))))) 
                                         << 0xfU) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 4U) 
                                                                                | ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 5U) 
                                                                                & (IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result)))))) 
                                                               << 0x2eU) 
                                                              | (((QData)((IData)(
                                                                                ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                                                                << 8U) 
                                                                                | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                                                >> 0x18U)))) 
                                                                  << 0xeU) 
                                                                 | (QData)((IData)(
                                                                                ((0x3000U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                << 6U)) 
                                                                                | ((0xf80U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x78U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 0x1eU)))))))))) 
                                                             >> 0x20U)));
            vlSelf->__Vintraval_h28a1aa78__0[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             (1U 
                                                                              & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 4U) 
                                                                                | ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 5U) 
                                                                                & (IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result)))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                                                                << 8U) 
                                                                                | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                                                >> 0x18U)))) 
                                                                << 0xeU) 
                                                               | (QData)((IData)(
                                                                                ((0x3000U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                << 6U)) 
                                                                                | ((0xf80U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 6U)) 
                                                                                | ((0x78U 
                                                                                & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                                >> 0x1eU)))))))))));
            vlSelf->__Vintraval_h28a1aa78__0[1U] = 
                __Vtemp_h9adc9367__0[1U];
            vlSelf->__Vintraval_h28a1aa78__0[2U] = 
                (((IData)((((QData)((IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result)) 
                            << 0x20U) | (QData)((IData)(
                                                        ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                          << 8U) 
                                                         | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                            >> 0x18U)))))) 
                  >> 0x11U) | ((IData)(((((QData)((IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                             << 8U) 
                                                            | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                               >> 0x18U))))) 
                                        >> 0x20U)) 
                               << 0xfU));
            vlSelf->__Vintraval_h28a1aa78__0[3U] = 
                ((IData)(((((QData)((IData)(vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result)) 
                            << 0x20U) | (QData)((IData)(
                                                        ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                          << 8U) 
                                                         | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                            >> 0x18U))))) 
                          >> 0x20U)) >> 0x11U);
            Vtop___024root____Vfork_h13b45a36__0__1(vlSelf, vlSelf->__Vintraval_h28a1aa78__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h13b45a36__0__1(Vtop___024root* vlSelf, VlWide<4>/*110:0*/ __Vintraval_h28a1aa78__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h13b45a36__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       280);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[0U] 
        = __Vintraval_h28a1aa78__0[0U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[1U] 
        = __Vintraval_h28a1aa78__0[1U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[2U] 
        = __Vintraval_h28a1aa78__0[2U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[3U] 
        = __Vintraval_h28a1aa78__0[3U];
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_ha46ef4a9__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_ha586e80c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_ha46ef4a9__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       278);
    vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v1 
        = __Vintraval_ha586e80c__0;
    vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hbd2f4069__0__1(Vtop___024root* vlSelf, VlWide<4>/*110:0*/ __Vintraval_h1a24b678__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hbd2f4069__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       274);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[0U] 
        = __Vintraval_h1a24b678__0[0U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[1U] 
        = __Vintraval_h1a24b678__0[1U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[2U] 
        = __Vintraval_h1a24b678__0[2U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[3U] 
        = __Vintraval_h1a24b678__0[3U];
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hb6a64c28__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h4635edd1__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hb6a64c28__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       273);
    vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v0 
        = __Vintraval_h4635edd1__0;
    vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_hd4cbc6d3__0__1(Vtop___024root* vlSelf, VlWide<6>/*183:0*/ __Vintraval_h57c82110__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__7\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/top.sv", 
                                                           217);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_h57c82110__0[0U] = 0x4c0000U;
            vlSelf->__Vintraval_h57c82110__0[1U] = 0U;
            vlSelf->__Vintraval_h57c82110__0[2U] = 0U;
            vlSelf->__Vintraval_h57c82110__0[3U] = 0U;
            vlSelf->__Vintraval_h57c82110__0[4U] = 0U;
            vlSelf->__Vintraval_h57c82110__0[5U] = 0U;
        } else {
            vlSelf->__Vintraval_h57c82110__0[0U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[0U];
            vlSelf->__Vintraval_h57c82110__0[1U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[1U];
            vlSelf->__Vintraval_h57c82110__0[2U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[2U];
            vlSelf->__Vintraval_h57c82110__0[3U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[3U];
            vlSelf->__Vintraval_h57c82110__0[4U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[4U];
            vlSelf->__Vintraval_h57c82110__0[5U] = 
                vlSelf->testbench__DOT__core__DOT__id_packet[5U];
        }
        Vtop___024root____Vfork_hd4cbc6d3__0__1(vlSelf, vlSelf->__Vintraval_h57c82110__0);
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hd4cbc6d3__0__1(Vtop___024root* vlSelf, VlWide<6>/*183:0*/ __Vintraval_h57c82110__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hd4cbc6d3__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       219);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[0U] 
        = __Vintraval_h57c82110__0[0U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[1U] 
        = __Vintraval_h57c82110__0[1U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[2U] 
        = __Vintraval_h57c82110__0[2U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[3U] 
        = __Vintraval_h57c82110__0[3U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[4U] 
        = __Vintraval_h57c82110__0[4U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[5U] 
        = __Vintraval_h57c82110__0[5U];
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_ex_packet__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_h8a7b81c3__0__1(Vtop___024root* vlSelf, VlWide<4>/*96:0*/ __Vintraval_hbb27da80__0);
VlCoroutine Vtop___024root____Vfork_h64c44b86__0__1(Vtop___024root* vlSelf, VlWide<4>/*96:0*/ __Vintraval_ha5bfde55__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__8\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "verilog/top.sv", 
                                                           172);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_hbb27da80__0[0U] = 0U;
            vlSelf->__Vintraval_hbb27da80__0[1U] = 0U;
            vlSelf->__Vintraval_hbb27da80__0[2U] = 0x13U;
            vlSelf->__Vintraval_hbb27da80__0[3U] = 0U;
            Vtop___024root____Vfork_h8a7b81c3__0__1(vlSelf, vlSelf->__Vintraval_hbb27da80__0);
        } else {
            vlSelf->__Vintraval_ha5bfde55__0[0U] = 
                vlSelf->testbench__DOT__core__DOT__if_packet[0U];
            vlSelf->__Vintraval_ha5bfde55__0[1U] = 
                vlSelf->testbench__DOT__core__DOT__if_packet[1U];
            vlSelf->__Vintraval_ha5bfde55__0[2U] = 
                vlSelf->testbench__DOT__core__DOT__if_packet[2U];
            vlSelf->__Vintraval_ha5bfde55__0[3U] = 
                vlSelf->testbench__DOT__core__DOT__if_packet[3U];
            Vtop___024root____Vfork_h64c44b86__0__1(vlSelf, vlSelf->__Vintraval_ha5bfde55__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h64c44b86__0__1(Vtop___024root* vlSelf, VlWide<4>/*96:0*/ __Vintraval_ha5bfde55__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h64c44b86__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       180);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[0U] 
        = __Vintraval_ha5bfde55__0[0U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[1U] 
        = __Vintraval_ha5bfde55__0[1U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[2U] 
        = __Vintraval_ha5bfde55__0[2U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[3U] 
        = __Vintraval_ha5bfde55__0[3U];
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h8a7b81c3__0__1(Vtop___024root* vlSelf, VlWide<4>/*96:0*/ __Vintraval_hbb27da80__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h8a7b81c3__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "verilog/top.sv", 
                                       174);
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[0U] 
        = __Vintraval_hbb27da80__0[0U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[1U] 
        = __Vintraval_hbb27da80__0[1U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[2U] 
        = __Vintraval_hbb27da80__0[2U];
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[3U] 
        = __Vintraval_hbb27da80__0[3U];
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_hb0c3772c__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h30ada901__0);
VlCoroutine Vtop___024root____Vfork_h52871629__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_hddb792fe__0);
VlCoroutine Vtop___024root____Vfork_h090340fa__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h22fa2ad9__0);
VlCoroutine Vtop___024root____Vfork_hf1b16d54__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h6d399f0c__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__9\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clock)", 
                                                           "testbench/testbench.sv", 
                                                           199);
        if (vlSelf->testbench__DOT__reset) {
            vlSelf->__Vintraval_h30ada901__0 = 0U;
            Vtop___024root____Vfork_hb0c3772c__0__1(vlSelf, vlSelf->__Vintraval_h30ada901__0);
            vlSelf->__Vintraval_hddb792fe__0 = 0U;
            Vtop___024root____Vfork_h52871629__0__1(vlSelf, vlSelf->__Vintraval_hddb792fe__0);
        } else {
            vlSelf->__Vintraval_h22fa2ad9__0 = ((IData)(1U) 
                                                + vlSelf->testbench__DOT__clock_count);
            Vtop___024root____Vfork_h090340fa__0__1(vlSelf, vlSelf->__Vintraval_h22fa2ad9__0);
            vlSelf->__Vintraval_h6d399f0c__0 = (vlSelf->testbench__DOT__instr_count 
                                                + (IData)(vlSelf->testbench__DOT__mem_wb_valid_inst));
            Vtop___024root____Vfork_hf1b16d54__0__1(vlSelf, vlSelf->__Vintraval_h6d399f0c__0);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hf1b16d54__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h6d399f0c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hf1b16d54__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/testbench.sv", 
                                       205);
    vlSelf->__Vdlyvval__testbench__DOT__instr_count__v1 
        = __Vintraval_h6d399f0c__0;
    vlSelf->__Vdlyvset__testbench__DOT__instr_count__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h090340fa__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h22fa2ad9__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h090340fa__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/testbench.sv", 
                                       204);
    vlSelf->__Vdlyvval__testbench__DOT__clock_count__v1 
        = __Vintraval_h22fa2ad9__0;
    vlSelf->__Vdlyvset__testbench__DOT__clock_count__v1 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h52871629__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_hddb792fe__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h52871629__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/testbench.sv", 
                                       202);
    vlSelf->__Vdlyvval__testbench__DOT__instr_count__v0 
        = __Vintraval_hddb792fe__0;
    vlSelf->__Vdlyvset__testbench__DOT__instr_count__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hb0c3772c__0__1(Vtop___024root* vlSelf, IData/*31:0*/ __Vintraval_h30ada901__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hb0c3772c__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/testbench.sv", 
                                       201);
    vlSelf->__Vdlyvval__testbench__DOT__clock_count__v0 
        = __Vintraval_h30ada901__0;
    vlSelf->__Vdlyvset__testbench__DOT__clock_count__v0 = 1U;
}

VlCoroutine Vtop___024root____Vfork_hdb1dbbfe__0__1(Vtop___024root* vlSelf, CData/*3:0*/ __Vintraval_h41d46bb4__0);
VlCoroutine Vtop___024root____Vfork_h04772082__0__1(Vtop___024root* vlSelf, QData/*63:0*/ __Vintraval_h9f73057d__0);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__10\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdd8e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge testbench.clock)", 
                                                           "testbench/mem.sv", 
                                                           93);
        vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 0U;
        vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data = 0ULL;
        vlSelf->testbench__DOT__memory__DOT__bus_filled = 0U;
        vlSelf->testbench__DOT__memory__DOT__acquire_tag 
            = (((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command)) 
                | (2U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) 
               & (0x10000U > vlSelf->testbench__DOT__proc2mem_addr));
        if ((0U < (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                = ((0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]) 
                   | (IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 1U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (1U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if (((0U == (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U])) 
             & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [0U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xfeU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                   >> 0x10U))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (((vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                                << 0x10U) | (vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                                             >> 0x10U)) 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                = ((0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]) 
                   | ((IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0) 
                      << 0x10U));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 1U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 2U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (2U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
                      >> 0x10U)) & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                                    >> 1U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [1U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xfdU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                = ((0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]) 
                   | (IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 2U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 3U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (4U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U])) 
              & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                 >> 2U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [2U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xfbU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                   >> 0x10U))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (((vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                                << 0x10U) | (vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                                             >> 0x10U)) 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                = ((0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]) 
                   | ((IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0) 
                      << 0x10U));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 3U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 4U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (8U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
                      >> 0x10U)) & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                                    >> 3U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [3U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xf7U & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                = ((0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]) 
                   | (IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 4U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 5U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (0x10U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U])) 
              & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                 >> 4U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [4U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xefU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                   >> 0x10U))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (((vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                                << 0x10U) | (vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                                             >> 0x10U)) 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                = ((0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]) 
                   | ((IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0) 
                      << 0x10U));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 5U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 6U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (0x20U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
                      >> 0x10U)) & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                                    >> 5U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [5U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xdfU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                = ((0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]) 
                   | (IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 6U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 7U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (0x40U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U])) 
              & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                 >> 6U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [6U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0xbfU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        if ((0U < (vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                   >> 0x10U))) {
            vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 
                = (0xffffU & (((vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                                << 0x10U) | (vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                                             >> 0x10U)) 
                              - (IData)(1U)));
            vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                = ((0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]) 
                   | ((IData)(vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0) 
                      << 0x10U));
        } else if (((IData)(vlSelf->testbench__DOT__memory__DOT__acquire_tag) 
                    & (~ ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                          >> 7U)))) {
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = 8U;
            vlSelf->testbench__DOT__memory__DOT__acquire_tag = 0U;
            vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]);
            vlSelf->testbench__DOT__memory__DOT__c 
                = vlSelf->testbench__DOT__memory__DOT__unified_memory
                [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                             >> 3U))];
            if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_command))) {
                vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 
                    = vlSelf->testbench__DOT__memory__DOT__unified_memory
                    [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                 >> 3U))];
                vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                    = (0x80U | (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
                vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] 
                    = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0;
                if ((2U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 
                            = vlSelf->testbench__DOT__memory__DOT__unified_memory
                            [(0x1fffU & (vlSelf->testbench__DOT__proc2mem_addr 
                                         >> 3U))];
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4;
                    } else {
                        vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 
                            = (QData)((IData)((vlSelf->testbench__DOT__memory__DOT__c 
                                               >> (0x20U 
                                                   & (vlSelf->testbench__DOT__proc2mem_addr 
                                                      << 3U)))));
                        vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] 
                            = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3;
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 
                        = (QData)((IData)((0xffffU 
                                           & (IData)(
                                                     (vlSelf->testbench__DOT__memory__DOT__c 
                                                      >> 
                                                      (0x30U 
                                                       & (vlSelf->testbench__DOT__proc2mem_addr 
                                                          << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2;
                } else {
                    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 
                        = (QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->testbench__DOT__memory__DOT__c 
                                                            >> 
                                                            (0x38U 
                                                             & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                << 3U)))))));
                    vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] 
                        = vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1;
                }
            } else if ((0U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (0x38U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((1U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffULL << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                                   << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffffU 
                                           & (IData)((QData)((IData)(
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)))))))) 
                          << (0x30U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else if ((2U == (IData)(vlSelf->testbench__DOT__proc2mem_size))) {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffffffffULL << (0x20U 
                                              & (vlSelf->testbench__DOT__proc2mem_addr 
                                                 << 3U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)(((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                            << 0x12U) 
                                           | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                              >> 0xeU)))) 
                          << (0x20U & (vlSelf->testbench__DOT__proc2mem_addr 
                                       << 3U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            } else {
                vlSelf->testbench__DOT__memory__DOT__c 
                    = (((~ (0xffULL << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                              << 1U)))) 
                        & vlSelf->testbench__DOT__memory__DOT__c) 
                       | ((QData)((IData)((0xffU & (IData)((QData)((IData)(
                                                                           ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                             << 0x12U) 
                                                                            | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                               >> 0xeU)))))))) 
                          << (8U & (vlSelf->testbench__DOT__proc2mem_addr 
                                    << 1U))));
                vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                                     & (vlSelf->testbench__DOT__proc2mem_addr 
                                                                        >> 3U))] 
                    = vlSelf->testbench__DOT__memory__DOT__c;
            }
        }
        if ((((0U == (vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
                      >> 0x10U)) & ((IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus) 
                                    >> 7U)) & (~ (IData)(vlSelf->testbench__DOT__memory__DOT__bus_filled)))) {
            vlSelf->testbench__DOT__memory__DOT__bus_filled = 1U;
            vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data 
                = vlSelf->testbench__DOT__memory__DOT__loaded_data
                [7U];
            vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
                = (0x7fU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
        }
        vlSelf->__Vintraval_h41d46bb4__0 = vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response;
        Vtop___024root____Vfork_hdb1dbbfe__0__1(vlSelf, vlSelf->__Vintraval_h41d46bb4__0);
        vlSelf->__Vintraval_h9f73057d__0 = vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data;
        Vtop___024root____Vfork_h04772082__0__1(vlSelf, vlSelf->__Vintraval_h9f73057d__0);
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_h04772082__0__1(Vtop___024root* vlSelf, QData/*63:0*/ __Vintraval_h9f73057d__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_h04772082__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/mem.sv", 
                                       169);
    vlSelf->__Vdlyvval__testbench__DOT__mem2proc_data__v0 
        = __Vintraval_h9f73057d__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem2proc_data__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root____Vfork_hdb1dbbfe__0__1(Vtop___024root* vlSelf, CData/*3:0*/ __Vintraval_h41d46bb4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vfork_hdb1dbbfe__0__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/mem.sv", 
                                       168);
    vlSelf->__Vdlyvval__testbench__DOT__mem2proc_response__v0 
        = __Vintraval_h41d46bb4__0;
    vlSelf->__Vdlyvset__testbench__DOT__mem2proc_response__v0 = 1U;
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ testbench__DOT__core__DOT__proc2Dmem_command;
    testbench__DOT__core__DOT__proc2Dmem_command = 0;
    CData/*1:0*/ testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select;
    testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__halt;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__halt = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__csr_op;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__csr_op = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__cond_branch;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__cond_branch = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__wr_mem;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__wr_mem = 0;
    CData/*0:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__rd_mem;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__rd_mem = 0;
    CData/*4:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0;
    CData/*3:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 0;
    CData/*1:0*/ testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 0;
    IData/*31:0*/ testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out;
    testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out = 0;
    IData/*31:0*/ testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out;
    testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out = 0;
    QData/*63:0*/ testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul;
    testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul = 0;
    // Body
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v0) {
        vlSelf->testbench__DOT__mem_wb_IR = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v0;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v0) {
        vlSelf->testbench__DOT__mem_wb_valid_inst = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v0;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v1) {
        vlSelf->testbench__DOT__mem_wb_IR = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v1;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v1) {
        vlSelf->testbench__DOT__mem_wb_valid_inst = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v1;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__instr_count__v0) {
        vlSelf->testbench__DOT__instr_count = vlSelf->__Vdlyvval__testbench__DOT__instr_count__v0;
        vlSelf->__Vdlyvset__testbench__DOT__instr_count__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__instr_count__v1) {
        vlSelf->testbench__DOT__instr_count = vlSelf->__Vdlyvval__testbench__DOT__instr_count__v1;
        vlSelf->__Vdlyvset__testbench__DOT__instr_count__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_packet__v0) {
        vlSelf->testbench__DOT__core__DOT__if_packet[(vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0 
                                                      >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0))) 
                & vlSelf->testbench__DOT__core__DOT__if_packet[
                (vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0 
                 >> 5U)]) | ((IData)(vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_packet__v0) 
                             << (0x1fU & vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0)));
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_packet__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v0) {
        vlSelf->testbench__DOT__ex_mem_IR = vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v0;
        vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v1) {
        vlSelf->testbench__DOT__ex_mem_IR = vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v1;
        vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__clock_count__v0) {
        vlSelf->testbench__DOT__clock_count = vlSelf->__Vdlyvval__testbench__DOT__clock_count__v0;
        vlSelf->__Vdlyvset__testbench__DOT__clock_count__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__clock_count__v1) {
        vlSelf->testbench__DOT__clock_count = vlSelf->__Vdlyvval__testbench__DOT__clock_count__v1;
        vlSelf->__Vdlyvset__testbench__DOT__clock_count__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v0) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_halt 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v0) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_illegal 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v1) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_halt 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v1) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_illegal 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0) {
        VL_ASSIGNSEL_WI(1024,32,(IData)(vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0), vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0);
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v0) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_take_branch 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v0) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_result 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v1) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_take_branch 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v1) {
        vlSelf->testbench__DOT__core__DOT__mem_wb_result 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0) {
        vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1) {
        vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1;
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v0) {
        vlSelf->testbench__DOT__mem_wb_NPC = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v0;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v1) {
        vlSelf->testbench__DOT__mem_wb_NPC = vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v1;
        vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v0) {
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[0U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[1U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[2U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0[3U];
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v1) {
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[0U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[1U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[2U];
        vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1[3U];
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_ex_packet__v0) {
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[0U];
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[1U];
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[2U];
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[3U];
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[4U];
        vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0[5U];
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_ex_packet__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v0) {
        vlSelf->testbench__DOT__core__DOT__if_id_packet[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[0U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[1U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[2U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0[3U];
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v1) {
        vlSelf->testbench__DOT__core__DOT__if_id_packet[0U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[0U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[1U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[1U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[2U];
        vlSelf->testbench__DOT__core__DOT__if_id_packet[3U] 
            = vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1[3U];
        vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v1 = 0U;
    }
    vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out 
        = ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_take_branch)
            ? vlSelf->testbench__DOT__mem_wb_NPC : vlSelf->testbench__DOT__core__DOT__mem_wb_result);
    vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__next_PC 
        = ((0x4000U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U])
            ? ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
                << 0x11U) | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                             >> 0xfU)) : ((IData)(4U) 
                                          + vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg));
    testbench__DOT__core__DOT__proc2Dmem_command = 
        ((IData)((0x1008U == (0x1008U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])))
          ? 2U : ((IData)((0x2008U == (0x2008U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])))
                   ? 1U : 0U));
    vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result = 0U;
    if ((0U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                       << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                 >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = (((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                 << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                           >> 0x18U)) == ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                           << 8U) | 
                                          (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                           >> 0x18U)));
    } else if ((1U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                              << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                        >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = (((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                 << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                           >> 0x18U)) != ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                           << 8U) | 
                                          (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                           >> 0x18U)));
    } else if ((4U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                              << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                        >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = VL_LTS_III(32, ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                               << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                         >> 0x18U)), 
                         ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                           << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                     >> 0x18U)));
    } else if ((5U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                              << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                        >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = VL_GTES_III(32, ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                                << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                          >> 0x18U)), 
                          ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                            << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                      >> 0x18U)));
    } else if ((6U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                              << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                        >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = (((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                 << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                           >> 0x18U)) < ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                          << 8U) | 
                                         (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                          >> 0x18U)));
    } else if ((7U == (7U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                              << 2U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                        >> 0x1eU))))) {
        vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result 
            = (((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                 << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                           >> 0x18U)) >= ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                           << 8U) | 
                                          (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                           >> 0x18U)));
    }
    testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
        = ((0x800000U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U])
            ? ((0x400000U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U])
                ? 0U : ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                         << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                                   >> 0x18U))) : ((0x400000U 
                                                   & vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U])
                                                   ? 
                                                  ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                    << 8U) 
                                                   | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                      >> 0x18U))
                                                   : 
                                                  ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[3U] 
                                                    << 8U) 
                                                   | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                                                      >> 0x18U))));
    testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out = 0xfacefeedU;
    if ((0U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                        >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[2U] 
                << 8U) | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                          >> 0x18U));
    } else if ((1U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = (((- (IData)((1U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                  >> 0x11U)))) << 0xbU) 
               | (0x7ffU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                            >> 6U)));
    } else if ((2U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = (((- (IData)((1U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                  >> 0x11U)))) << 0xbU) 
               | ((0x7e0U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                             >> 6U)) | (0x1fU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                 >> 0x19U))));
    } else if ((3U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = (((- (IData)((1U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                  >> 0x11U)))) << 0xcU) 
               | ((0x800U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                             >> 0xeU)) | ((0x7e0U & 
                                           (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                            >> 6U)) 
                                          | (0x1eU 
                                             & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                >> 0x19U)))));
    } else if ((4U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = (0xfffff000U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               << 0xeU) | (0x3000U 
                                           & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                              >> 0x12U))));
    } else if ((5U == (0xfU & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                               >> 0x12U)))) {
        testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out 
            = (((- (IData)((1U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                  >> 0x11U)))) << 0x14U) 
               | ((0xff000U & ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                << 0xeU) | (0x3000U 
                                            & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                               >> 0x12U)))) 
                  | ((0x800U & (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                << 5U)) | (0x7feU & 
                                           (vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                            >> 6U)))));
    }
    testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 1U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__csr_op = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__rd_mem = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__wr_mem = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__cond_branch = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__halt = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal = 0U;
    if ((1U & vlSelf->testbench__DOT__core__DOT__if_id_packet[3U])) {
        if (((((((((0x37U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                   | (0x17U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                  | (0x6fU == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                 | (0x67U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                | ((((((0x63U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                       | (0x1063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x4063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (0x5063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                    | (0x6063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                   | (0x7063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
               | (((((3U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                     | (0x1003U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                    | (0x2003U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                   | (0x4003U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                  | (0x5003U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
              | (((0x23U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                  | (0x1023U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                 | (0x2023U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
             | (0x13U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
            if ((0x37U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 3U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 4U;
            } else if ((0x17U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 2U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 4U;
            } else if ((0x6fU == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 2U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 5U;
            } else if ((0x67U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 0U;
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 1U;
            } else {
                if ((1U & (~ ((((((0x63U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                  | (0x1063U == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                 | (0x4063U == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                | (0x5063U == (0x707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                               | (0x6063U == (0x707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x7063U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                    if ((((((3U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                            | (0x1003U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x2003U == (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x4003U == (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (0x5003U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                        testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                    } else if ((1U & (~ (((0x23U == 
                                           (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                          | (0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                         | (0x2023U 
                                            == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                        testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
                    }
                }
                if (((((((0x63U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                         | (0x1063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x4063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                       | (0x5063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x6063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (0x7063U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 2U;
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 3U;
                } else {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select 
                        = ((((((3U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                               | (0x1003U == (0x707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x2003U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x4003U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x5003U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))
                            ? 1U : ((((0x23U == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                      | (0x1023U == 
                                         (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                     | (0x2023U == 
                                        (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))
                                     ? 2U : 1U));
                }
            }
            if ((0x37U != (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                if ((0x17U != (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    if ((0x6fU != (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                        if ((0x67U != (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                            if ((1U & (~ ((((((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                              | (0x1063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                             | (0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                            | (0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                           | (0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                          | (0x7063U 
                                             == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                                if ((((((3U == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                        | (0x1003U 
                                           == (0x707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                       | (0x2003U == 
                                          (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                      | (0x4003U == 
                                         (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                     | (0x5003U == 
                                        (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__rd_mem = 1U;
                                }
                                if ((1U & (~ (((((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                                 | (0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                                | (0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                               | (0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                              | (0x5003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                                    if ((((0x23U == 
                                           (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                          | (0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                         | (0x2023U 
                                            == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                                        testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__wr_mem = 1U;
                                    }
                                }
                            }
                            if (((((((0x63U == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                     | (0x1063U == 
                                        (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                    | (0x4063U == (0x707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                   | (0x5063U == (0x707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                  | (0x6063U == (0x707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                 | (0x7063U == (0x707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__cond_branch = 1U;
                            }
                        }
                    }
                    if ((0x6fU == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                        testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch = 1U;
                    } else if ((0x67U == (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                        testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch = 1U;
                    }
                }
            }
        } else if (((((((((0x2013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                          | (0x3013U == (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (0x7013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x6013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                       | (0x4013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x1013U == (0xfe00707fU & 
                                     vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
            testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 1U;
        } else if (((((((((0x33U == (0xfe00707fU & 
                                     vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                          | (0x40000033U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (0x2033U == (0xfe00707fU 
                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x3033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                       | (0x7033U == (0xfe00707fU & 
                                      vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x6033U == (0xfe00707fU & 
                                     vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
            testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
        } else if (((((((((0x5033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (0x2000033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x2001033U == (0xfe00707fU 
                                          & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                       | (0x2002033U == (0xfe00707fU 
                                         & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x2003033U == (0xfe00707fU 
                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (((0x1073U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                         | (0x2073U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x3073U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                    | (0x10500073U == vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
            if ((0x5033U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            } else if ((0x2001033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 0U;
            }
        }
        if ((1U & (~ ((((((((0x37U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                            | (0x17U == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x6fU == (0x7fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x67U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | ((((((0x63U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                | (0x1063U == (0x707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                               | (0x4063U == (0x707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x5063U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x6063U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x7063U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                        | (((((3U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                              | (0x1003U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x4003U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x5003U == (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                       | (((0x23U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                           | (0x1023U == (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x2023U == (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                      | (0x13U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
            if (((((((((0x2013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                       | (0x3013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                      | (0x7013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                     | (0x6013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                    | (0x4013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                   | (0x1013U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                  | (0x5013U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                 | (0x40005013U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func 
                    = ((0x2013U == (0x707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                        ? 2U : ((0x3013U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                 ? 3U : ((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                          ? 4U : ((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                   ? 5U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                    ? 6U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                     ? 7U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                      ? 8U
                                                      : 9U)))))));
            } else if (((((((((0x33U == (0xfe00707fU 
                                         & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                              | (0x40000033U == (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x2033U == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x3033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x7033U == (0xfe00707fU 
                                          & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x6033U == (0xfe00707fU 
                                         & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (0x4033U == (0xfe00707fU 
                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                        | (0x1033U == (0xfe00707fU 
                                       & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                if ((0x33U != (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func 
                        = ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                            ? 1U : ((0x2033U == (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                     ? 2U : ((0x3033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                              ? 3U : 
                                             ((0x7033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                               ? 4U
                                               : ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                   ? 5U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))
                                                    ? 6U
                                                    : 7U))))));
                }
            } else if (((((((((0x5033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x2000033U == (0xfe00707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x2001033U == (0xfe00707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x2002033U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x2003033U == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                         | (((0x1073U == (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                             | (0x2073U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x3073U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                        | (0x10500073U == vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                if ((0x5033U == (0xfe00707fU & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 8U;
                } else if ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 9U;
                } else if ((0x2000033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0xaU;
                } else if ((0x2001033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0xbU;
                } else if ((0x2002033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0xcU;
                } else if ((0x2003033U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func = 0xdU;
                }
            }
            if ((1U & (~ ((((((((0x2013U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                | (0x3013U == (0x707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                               | (0x7013U == (0x707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x6013U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x4013U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x1013U == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x5013U == (0xfe00707fU 
                                          & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                if ((1U & (~ ((((((((0x33U == (0xfe00707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                    | (0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                 | (0x7033U == (0xfe00707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                | (0x6033U == (0xfe00707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                               | (0x4033U == (0xfe00707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x1033U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                    if (((((((((0x5033U == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                               | (0x40005033U == (0xfe00707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                              | (0x2000033U == (0xfe00707fU 
                                                & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x2001033U == (0xfe00707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                            | (0x2002033U == (0xfe00707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                           | (0x2003033U == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                          | (((0x1073U == (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                              | (0x2073U == (0x707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                             | (0x3073U == (0x707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                         | (0x10500073U == vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                        if ((0x5033U != (0xfe00707fU 
                                         & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                            if ((0x40005033U != (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                                if ((0x2000033U != 
                                     (0xfe00707fU & 
                                      vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                                    if ((0x2001033U 
                                         != (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                                        if ((0x2002033U 
                                             != (0xfe00707fU 
                                                 & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                                            if ((0x2003033U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) {
                                                if (
                                                    (((0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                                      | (0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                                     | (0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) {
                                                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__csr_op = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                                          | (0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                                         | (0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))))) {
                                                    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__halt = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((((((((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                        | (0x40005033U 
                                           == (0xfe00707fU 
                                               & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                       | (0x2000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                      | (0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                     | (0x2002033U 
                                        == (0xfe00707fU 
                                            & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                    | (0x2003033U == 
                                       (0xfe00707fU 
                                        & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                   | (((0x1073U == 
                                        (0x707fU & 
                                         vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])) 
                                       | (0x2073U == 
                                          (0x707fU 
                                           & vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))) 
                                      | (0x3073U == 
                                         (0x707fU & 
                                          vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                                  | (0x10500073U == 
                                     vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))))) {
                        testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal = 1U;
                    }
                }
            }
        }
    }
    if ((0U == (IData)(testbench__DOT__core__DOT__proc2Dmem_command))) {
        vlSelf->testbench__DOT__proc2mem_command = 1U;
        vlSelf->testbench__DOT__proc2mem_size = 3U;
        vlSelf->testbench__DOT__proc2mem_addr = (0xfffffff8U 
                                                 & vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg);
    } else {
        vlSelf->testbench__DOT__proc2mem_command = testbench__DOT__core__DOT__proc2Dmem_command;
        vlSelf->testbench__DOT__proc2mem_size = (3U 
                                                 & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U]);
        vlSelf->testbench__DOT__proc2mem_addr = ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
                                                  << 0x11U) 
                                                 | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                                                    >> 0xfU));
    }
    testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out), 
                      VL_EXTENDS_QI(64,32, testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out));
    vlSelf->testbench__DOT__core__DOT__id_packet[0U] 
        = ((0xfffc1fffU & vlSelf->testbench__DOT__core__DOT__id_packet[0U]) 
           | (((0U == (IData)(testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select))
                ? (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                            >> 7U)) : 0U) << 0xdU));
    vlSelf->testbench__DOT__core__DOT__id_packet[0U] 
        = ((0x3ffffU & vlSelf->testbench__DOT__core__DOT__id_packet[0U]) 
           | ((IData)((((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select)) 
                        << 0x24U) | (((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))))) 
              << 0x12U));
    vlSelf->testbench__DOT__core__DOT__id_packet[1U] 
        = (((IData)((((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select)) 
                      << 0x24U) | (((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->testbench__DOT__core__DOT__if_id_packet[2U]))))) 
            >> 0xeU) | ((((0U == (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                           >> 0x14U)))
                           ? 0U : (((0U != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                    & ((0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                 >> 0x14U)) 
                                       == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                    ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                    : vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                   (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                             >> 0x14U))])) 
                         << 0x18U) | ((IData)(((((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->testbench__DOT__core__DOT__id_packet[2U] 
        = (((0x3ffffU & (((0U == (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                           >> 0x14U)))
                           ? 0U : (((0U != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                    & ((0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                 >> 0x14U)) 
                                       == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                    ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                    : vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                   (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                             >> 0x14U))])) 
                         >> 8U)) | ((IData)(((((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->testbench__DOT__core__DOT__if_id_packet[2U])))) 
                                             >> 0x20U)) 
                                    >> 0xeU)) | ((0xfc0000U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                           >> 0x14U)))
                                                       ? 0U
                                                       : 
                                                      (((0U 
                                                         != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                                        & ((0x1fU 
                                                            & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                               >> 0x14U)) 
                                                           == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                                        ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                                        : 
                                                       vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                                       (0x1fU 
                                                        & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                           >> 0x14U))])) 
                                                     >> 8U)) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                          >> 0xfU)))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                                       & ((0x1fU 
                                                           & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                                       ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                                       : 
                                                      vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                                      (0x1fU 
                                                       & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                          >> 0xfU))])) 
                                                    << 0x18U)));
    vlSelf->testbench__DOT__core__DOT__id_packet[3U] 
        = ((0x3ffffU & (((0U == (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                          >> 0xfU)))
                          ? 0U : (((0U != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                   & ((0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                >> 0xfU)) 
                                      == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                   ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                   : vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                  (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                            >> 0xfU))])) 
                        >> 8U)) | ((0xfc0000U & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                       >> 0xfU)))
                                                   ? 0U
                                                   : 
                                                  (((0U 
                                                     != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)) 
                                                    & ((0x1fU 
                                                        & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)))
                                                    ? vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out
                                                    : 
                                                   vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers[
                                                   (0x1fU 
                                                    & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                                                       >> 0xfU))])) 
                                                 >> 8U)) 
                                   | ((IData)((((QData)((IData)(
                                                                vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->testbench__DOT__core__DOT__if_id_packet[0U])))) 
                                      << 0x18U)));
    vlSelf->testbench__DOT__core__DOT__id_packet[4U] 
        = ((0x3ffffU & ((IData)((((QData)((IData)(vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->testbench__DOT__core__DOT__if_id_packet[0U])))) 
                        >> 8U)) | ((0xfc0000U & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->testbench__DOT__core__DOT__if_id_packet[0U])))) 
                                                 >> 8U)) 
                                   | ((IData)(((((QData)((IData)(
                                                                 vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->testbench__DOT__core__DOT__if_id_packet[0U]))) 
                                               >> 0x20U)) 
                                      << 0x18U)));
    vlSelf->testbench__DOT__core__DOT__id_packet[5U] 
        = (0xffffffU & ((0x3ffffU & ((IData)(((((QData)((IData)(
                                                                vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->testbench__DOT__core__DOT__if_id_packet[0U]))) 
                                              >> 0x20U)) 
                                     >> 8U)) | (0xfc0000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->testbench__DOT__core__DOT__if_id_packet[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->testbench__DOT__core__DOT__if_id_packet[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 8U))));
    vlSelf->testbench__DOT__core__DOT__id_packet[0U] 
        = ((0xffffe000U & vlSelf->testbench__DOT__core__DOT__id_packet[0U]) 
           | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__alu_func) 
               << 8U) | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__rd_mem) 
                          << 7U) | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__wr_mem) 
                                     << 6U) | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__cond_branch) 
                                                << 5U) 
                                               | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__uncond_branch) 
                                                   << 4U) 
                                                  | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__halt) 
                                                      << 3U) 
                                                     | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal) 
                                                         << 2U) 
                                                        | (((IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__csr_op) 
                                                            << 1U) 
                                                           | ((~ (IData)(testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__illegal)) 
                                                              & vlSelf->testbench__DOT__core__DOT__if_id_packet[3U]))))))))));
    vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result 
        = ((0x1000U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
            ? 0xfacebeecU : ((0x800U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                              ? ((0x400U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                  ? ((0x200U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                      ? 0xfacebeecU
                                      : (IData)((((QData)((IData)(testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out)) 
                                                  * (QData)((IData)(testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))) 
                                                 >> 0x20U)))
                                  : ((0x200U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                      ? ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? (IData)(
                                                    (testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul 
                                                     >> 0x20U))
                                          : (IData)(testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul))
                                      : ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? VL_SHIFTRS_III(32,32,5, testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out, 
                                                           (0x1fU 
                                                            & testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))
                                          : (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             >> (0x1fU 
                                                 & testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out)))))
                              : ((0x400U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                  ? ((0x200U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                      ? ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             << (0x1fU 
                                                 & testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))
                                          : (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             ^ testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))
                                      : ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             | testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out)
                                          : (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             & testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out)))
                                  : ((0x200U & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                      ? ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             < testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out)
                                          : VL_LTS_III(32, testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out, testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))
                                      : ((0x100U & 
                                          vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U])
                                          ? (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             - testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out)
                                          : (testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out 
                                             + testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v0) {
        vlSelf->testbench__DOT__debug_counter = 0ULL;
        vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v1) {
        vlSelf->testbench__DOT__debug_counter = vlSelf->__Vdlyvval__testbench__DOT__debug_counter__v1;
        vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem2proc_response__v0) {
        vlSelf->testbench__DOT__mem2proc_response = vlSelf->__Vdlyvval__testbench__DOT__mem2proc_response__v0;
        vlSelf->__Vdlyvset__testbench__DOT__mem2proc_response__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__testbench__DOT__mem2proc_data__v0) {
        vlSelf->testbench__DOT__mem2proc_data = vlSelf->__Vdlyvval__testbench__DOT__mem2proc_data__v0;
        vlSelf->__Vdlyvset__testbench__DOT__mem2proc_data__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__pipeline_error_status = 
        ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_illegal)
          ? 2U : ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_halt)
                   ? 0xeU : ((0U == (IData)(vlSelf->testbench__DOT__mem2proc_response))
                              ? 5U : 0xaU)));
    vlSelf->testbench__DOT__core__DOT__mem_result_out 
        = ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
            << 0x11U) | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                         >> 0xfU));
    if ((0x2000U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])) {
        vlSelf->testbench__DOT__core__DOT__mem_result_out 
            = ((4U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])
                ? ((0U == (3U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U]))
                    ? (0xffU & (IData)(vlSelf->testbench__DOT__mem2proc_data))
                    : ((1U == (3U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U]))
                        ? (0xffffU & (IData)(vlSelf->testbench__DOT__mem2proc_data))
                        : (IData)(vlSelf->testbench__DOT__mem2proc_data)))
                : ((0U == (3U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U]))
                    ? (((- (IData)((1U & (IData)((vlSelf->testbench__DOT__mem2proc_data 
                                                  >> 7U))))) 
                        << 8U) | (0xffU & (IData)(vlSelf->testbench__DOT__mem2proc_data)))
                    : ((1U == (3U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U]))
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSelf->testbench__DOT__mem2proc_data 
                                                      >> 0xfU))))) 
                            << 0x10U) | (0xffffU & (IData)(vlSelf->testbench__DOT__mem2proc_data)))
                        : (IData)(vlSelf->testbench__DOT__mem2proc_data))));
    }
    vlSelf->testbench__DOT__core__DOT__if_packet[0U] 
        = vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg;
    vlSelf->testbench__DOT__core__DOT__if_packet[1U] 
        = (IData)((((QData)((IData)(((4U & vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg)
                                      ? (IData)((vlSelf->testbench__DOT__mem2proc_data 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->testbench__DOT__mem2proc_data)))) 
                    << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                 + vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg)))));
    vlSelf->testbench__DOT__core__DOT__if_packet[2U] 
        = (IData)(((((QData)((IData)(((4U & vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg)
                                       ? (IData)((vlSelf->testbench__DOT__mem2proc_data 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->testbench__DOT__mem2proc_data)))) 
                     << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                  + vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg)))) 
                   >> 0x20U));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___timing_commit(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___timing_resume(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            Vtop___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench/testbench.sv", 24, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___timing_resume(vlSelf);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench/testbench.sv", 24, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h967bdccf__0.commit("@(posedge testbench.clock)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h967bdd8e__0.commit("@(negedge testbench.clock)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h967bdccf__0.resume("@(posedge testbench.clock)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h967bdd8e__0.resume("@(negedge testbench.clock)");
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
