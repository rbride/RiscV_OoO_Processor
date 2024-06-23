// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ testbench__DOT__memory__DOT__unnamedblk2__DOT__i;
    testbench__DOT__memory__DOT__unnamedblk2__DOT__i = 0;
    // Body
    testbench__DOT__memory__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2000U, testbench__DOT__memory__DOT__unnamedblk2__DOT__i)) {
        vlSelf->testbench__DOT__memory__DOT__unified_memory[(0x1fffU 
                                                             & testbench__DOT__memory__DOT__unnamedblk2__DOT__i)] = 0ULL;
        testbench__DOT__memory__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + testbench__DOT__memory__DOT__unnamedblk2__DOT__i);
    }
    vlSelf->testbench__DOT__mem2proc_data = 0ULL;
    vlSelf->testbench__DOT__mem2proc_response = 0U;
    vlSelf->testbench__DOT__memory__DOT__loaded_data[0U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
        = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xfeU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[1U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[0U] 
        = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[0U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xfdU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[2U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
        = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xfbU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[3U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[1U] 
        = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[1U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xf7U & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[4U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
        = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xefU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[5U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[2U] 
        = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[2U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xdfU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[6U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
        = (0xffff0000U & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0xbfU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
    vlSelf->testbench__DOT__memory__DOT__loaded_data[7U] = 0ULL;
    vlSelf->testbench__DOT__memory__DOT__cycles_left[3U] 
        = (0xffffU & vlSelf->testbench__DOT__memory__DOT__cycles_left[3U]);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus 
        = (0x7fU & (IData)(vlSelf->testbench__DOT__memory__DOT__waiting_for_bus));
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
                VL_FATAL_MT("testbench/testbench.sv", 24, "", "Settle region did not converge.");
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
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__next_PC 
        = ((0x4000U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U])
            ? ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[3U] 
                << 0x11U) | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                             >> 0xfU)) : ((IData)(4U) 
                                          + vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg));
    vlSelf->testbench__DOT__pipeline_error_status = 
        ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_illegal)
          ? 2U : ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_halt)
                   ? 0xeU : ((0U == (IData)(vlSelf->testbench__DOT__mem2proc_response))
                              ? 5U : 0xaU)));
    testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select = 1U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opa_select = 0U;
    testbench__DOT__core__DOT__id_stage_0__DOT____Vcellout__decoder_0__opb_select = 0U;
    testbench__DOT__core__DOT__proc2Dmem_command = 
        ((IData)((0x1008U == (0x1008U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])))
          ? 2U : ((IData)((0x2008U == (0x2008U & vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U])))
                   ? 1U : 0U));
    vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out 
        = ((IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_take_branch)
            ? vlSelf->testbench__DOT__mem_wb_NPC : vlSelf->testbench__DOT__core__DOT__mem_wb_result);
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
    vlSelf->testbench__DOT__core__DOT__id_packet[0U] 
        = ((0xfffc1fffU & vlSelf->testbench__DOT__core__DOT__id_packet[0U]) 
           | (((0U == (IData)(testbench__DOT__core__DOT__id_stage_0__DOT__dest_reg_select))
                ? (0x1fU & (vlSelf->testbench__DOT__core__DOT__if_id_packet[2U] 
                            >> 7U)) : 0U) << 0xdU));
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
    testbench__DOT__core__DOT__ex_stage_0__DOT__alu_0__DOT__signed_mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, testbench__DOT__core__DOT__ex_stage_0__DOT__opa_mux_out), 
                      VL_EXTENDS_QI(64,32, testbench__DOT__core__DOT__ex_stage_0__DOT__opb_mux_out));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clock or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge testbench.clock or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge testbench.clock)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge testbench.clock)\n");
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
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clock or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge testbench.clock or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge testbench.clock)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge testbench.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__clock_count = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__instr_count = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__wb_fileno = 0;
    vlSelf->testbench__DOT__proc2mem_command = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__proc2mem_addr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__mem2proc_response = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__mem2proc_data = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__proc2mem_size = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__pipeline_error_status = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__ex_mem_IR = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__mem_wb_NPC = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__mem_wb_IR = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__mem_wb_valid_inst = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__debug_counter = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__show_clk_count__Vstatic__cpi = 0;
    vlSelf->testbench__DOT__show_mem_with_decimal__Vstatic__showing_data = 0;
    VL_RAND_RESET_W(97, vlSelf->testbench__DOT__core__DOT__if_packet);
    VL_RAND_RESET_W(97, vlSelf->testbench__DOT__core__DOT__if_id_packet);
    VL_RAND_RESET_W(184, vlSelf->testbench__DOT__core__DOT__id_packet);
    VL_RAND_RESET_W(184, vlSelf->testbench__DOT__core__DOT__id_ex_packet);
    VL_RAND_RESET_W(111, vlSelf->testbench__DOT__core__DOT__ex_mem_packet);
    vlSelf->testbench__DOT__core__DOT__mem_result_out = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__core__DOT__mem_wb_halt = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__core__DOT__mem_wb_illegal = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__core__DOT__mem_wb_result = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__core__DOT__mem_wb_take_branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__core__DOT__if_stage_0__DOT__next_PC = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers);
    vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT__brcond_result = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__core__DOT__ex_stage_0__DOT____Vcellout__alu_0__result = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__memory__DOT__next_mem2proc_data = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT__next_mem2proc_response = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->testbench__DOT__memory__DOT__unified_memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->testbench__DOT__memory__DOT__loaded_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(128, vlSelf->testbench__DOT__memory__DOT__cycles_left);
    vlSelf->testbench__DOT__memory__DOT__waiting_for_bus = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__memory__DOT__acquire_tag = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__memory__DOT__bus_filled = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__memory__DOT__c = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_hbe108737__0 = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__0 = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__1 = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__2 = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__3 = VL_RAND_RESET_Q(64);
    vlSelf->testbench__DOT__memory__DOT____Vlvbound_h65ea42dd__4 = VL_RAND_RESET_Q(64);
    vlSelf->__Vintraval_h30ada901__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_hddb792fe__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h22fa2ad9__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h6d399f0c__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(97, vlSelf->__Vintraval_hbb27da80__0);
    VL_RAND_RESET_W(97, vlSelf->__Vintraval_ha5bfde55__0);
    VL_RAND_RESET_W(184, vlSelf->__Vintraval_h57c82110__0);
    vlSelf->__Vintraval_h4635edd1__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(111, vlSelf->__Vintraval_h1a24b678__0);
    vlSelf->__Vintraval_ha586e80c__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(111, vlSelf->__Vintraval_h28a1aa78__0);
    vlSelf->__Vintraval_h62f5f5b6__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h8d68bc5c__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h0f79d611__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h2d62e545__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_hbcbfaaef__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_hbd9ee838__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vintraval_h698caf6c__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h3ad3a407__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_he40ebbb7__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h64a742bc__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h9e56db78__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h083e453e__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h860cadea__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h8a8541a4__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vintraval_h49fc45d5__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintraval_h7af5a8eb__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h80038af5__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h64b70171__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_hc060a9b7__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vintralsb_he479cc5a__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vintraval_hadedbdad__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vintraval_h41d46bb4__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vintraval_h9f73057d__0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_stage_0__DOT__regf_0__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvlsb__testbench__DOT__core__DOT__if_packet__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_packet__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_packet__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_stage_0__DOT__PC_reg__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_NPC__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_NPC__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_IR__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_IR__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_halt__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_halt__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_illegal__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_illegal__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem_wb_valid_inst__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__mem_wb_valid_inst__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1 = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_dest_reg_idx__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_take_branch__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_take_branch__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__core__DOT__mem_wb_result__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__mem_wb_result__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v0 = 0;
    VL_RAND_RESET_W(111, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v0);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__ex_mem_IR__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__ex_mem_IR__v1 = 0;
    VL_RAND_RESET_W(111, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__ex_mem_packet__v1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__ex_mem_packet__v1 = 0;
    VL_RAND_RESET_W(184, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__id_ex_packet__v0);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__id_ex_packet__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v0);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__Vdlyvval__testbench__DOT__core__DOT__if_id_packet__v1);
    vlSelf->__Vdlyvset__testbench__DOT__core__DOT__if_id_packet__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__clock_count__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__clock_count__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__instr_count__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__instr_count__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__clock_count__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__clock_count__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__instr_count__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__testbench__DOT__instr_count__v1 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem2proc_response__v0 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__testbench__DOT__mem2proc_response__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__mem2proc_data__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__testbench__DOT__mem2proc_data__v0 = 0;
    vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v0 = 0;
    vlSelf->__Vdlyvval__testbench__DOT__debug_counter__v1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0 = VL_RAND_RESET_I(1);
}
