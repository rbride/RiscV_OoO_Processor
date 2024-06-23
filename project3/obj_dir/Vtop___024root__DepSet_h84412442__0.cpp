// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_print_header_TOP____024unit(std::string str);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6313ef82__0;
    VlWide<4>/*127:0*/ __Vtemp_ha26ac1ff__0;
    // Body
    VL_PRINTF_MT("-Info: testbench/testbench.sv:168: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->testbench__DOT__clock = 0U;
    VL_WRITEF("@@\n@@\n@@  %^  Asserting System reset......\n",
              64,VL_TIME_UNITED_D(10),-9);
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clock)", 
                                                       "testbench/testbench.sv", 
                                                       176);
    co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clock)", 
                                                       "testbench/testbench.sv", 
                                                       177);
    __Vtemp_h6313ef82__0[0U] = 0x2e6d656dU;
    __Vtemp_h6313ef82__0[1U] = 0x6772616dU;
    __Vtemp_h6313ef82__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 64, 8192, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h6313ef82__0)
                 ,  &(vlSelf->testbench__DOT__memory__DOT__unified_memory)
                 , 0, ~0ULL);
    co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clock)", 
                                                       "testbench/testbench.sv", 
                                                       181);
    co_await vlSelf->__VtrigSched_h967bdccf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge testbench.clock)", 
                                                       "testbench/testbench.sv", 
                                                       182);
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "testbench/testbench.sv", 
                                       183);
    vlSelf->testbench__DOT__reset = 0U;
    VL_WRITEF("@@  %^  Deasserting System reset......\n@@\n@@\n",
              64,VL_TIME_UNITED_D(10),-9);
    __Vtemp_ha26ac1ff__0[0U] = 0x2e6f7574U;
    __Vtemp_ha26ac1ff__0[1U] = 0x6261636bU;
    __Vtemp_ha26ac1ff__0[2U] = 0x72697465U;
    __Vtemp_ha26ac1ff__0[3U] = 0x77U;
    vlSelf->testbench__DOT__wb_fileno = VL_FOPEN_MCD_N(
                                                       VL_CVT_PACK_STR_NW(4, __Vtemp_ha26ac1ff__0));
    ;
    Vtop___024unit____Vdpiimwrap_print_header_TOP____024unit(
                                                             std::string{"                                                                            D-MEM Bus &\n"});
    Vtop___024unit____Vdpiimwrap_print_header_TOP____024unit(
                                                             std::string{"Cycle:      IF      |     ID      |     EX      |     MEM     |     WB      Reg Result"});
}

void Vtop___024unit____Vdpiimwrap_print_cycles_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(std::string div, IData/*31:0*/ inst, IData/*31:0*/ npc, IData/*31:0*/ valid_inst);
void Vtop___024unit____Vdpiimwrap_print_reg_TOP____024unit(IData/*31:0*/ wb_reg_wr_data_out_hi, IData/*31:0*/ wb_reg_wr_data_out_lo, IData/*31:0*/ wb_reg_wr_idx_out, IData/*31:0*/ wb_reg_wr_en_out);
void Vtop___024unit____Vdpiimwrap_print_membus_TOP____024unit(IData/*31:0*/ proc2mem_command, IData/*31:0*/ mem2proc_response, IData/*31:0*/ proc2mem_addr_hi, IData/*31:0*/ proc2mem_addr_lo, IData/*31:0*/ proc2mem_data_hi, IData/*31:0*/ proc2mem_data_lo);
void Vtop___024unit____Vdpiimwrap_print_close_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__11\n"); );
    // Init
    IData/*31:0*/ __Vtask_testbench__DOT__show_mem_with_decimal__10__start_addr;
    __Vtask_testbench__DOT__show_mem_with_decimal__10__start_addr = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__show_mem_with_decimal__10__end_addr;
    __Vtask_testbench__DOT__show_mem_with_decimal__10__end_addr = 0;
    IData/*31:0*/ __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k;
    __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h967bdd8e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge testbench.clock)", 
                                                           "testbench/testbench.sv", 
                                                           210);
        if (VL_UNLIKELY(vlSelf->testbench__DOT__reset)) {
            VL_WRITEF("@@\n@@  %^ : System STILL at reset, can't show anything\n@@\n",
                      64,VL_TIME_UNITED_D(10),-9);
            vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v0 = 1U;
        } else {
            co_await vlSelf->__VdlySched.delay(0xaULL, 
                                               nullptr, 
                                               "testbench/testbench.sv", 
                                               216);
            co_await vlSelf->__VdlySched.delay(0xaULL, 
                                               nullptr, 
                                               "testbench/testbench.sv", 
                                               217);
            Vtop___024unit____Vdpiimwrap_print_cycles_TOP____024unit();
            Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(
                                                                    std::string{" "}, 
                                                                    vlSelf->testbench__DOT__core__DOT__if_packet[2U], 
                                                                    vlSelf->testbench__DOT__core__DOT__if_packet[1U], 
                                                                    (1U 
                                                                     & vlSelf->testbench__DOT__core__DOT__if_packet[3U]));
            Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(
                                                                    std::string{"|"}, 
                                                                    vlSelf->testbench__DOT__core__DOT__if_id_packet[2U], 
                                                                    vlSelf->testbench__DOT__core__DOT__if_id_packet[1U], 
                                                                    (1U 
                                                                     & vlSelf->testbench__DOT__core__DOT__if_id_packet[3U]));
            Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(
                                                                    std::string{"|"}, 
                                                                    ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[1U] 
                                                                      << 0xeU) 
                                                                     | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U] 
                                                                        >> 0x12U)), 
                                                                    ((vlSelf->testbench__DOT__core__DOT__id_ex_packet[5U] 
                                                                      << 8U) 
                                                                     | (vlSelf->testbench__DOT__core__DOT__id_ex_packet[4U] 
                                                                        >> 0x18U)), 
                                                                    (1U 
                                                                     & vlSelf->testbench__DOT__core__DOT__id_ex_packet[0U]));
            Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(
                                                                    std::string{"|"}, vlSelf->testbench__DOT__ex_mem_IR, 
                                                                    ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[2U] 
                                                                      << 0x11U) 
                                                                     | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                        >> 0xfU)), 
                                                                    (1U 
                                                                     & (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                        >> 3U)));
            Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(
                                                                    std::string{"|"}, vlSelf->testbench__DOT__mem_wb_IR, vlSelf->testbench__DOT__mem_wb_NPC, (IData)(vlSelf->testbench__DOT__mem_wb_valid_inst));
            Vtop___024unit____Vdpiimwrap_print_reg_TOP____024unit(0U, vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out, (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx), 
                                                                  (0U 
                                                                   != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx)));
            Vtop___024unit____Vdpiimwrap_print_membus_TOP____024unit(vlSelf->testbench__DOT__proc2mem_command, (IData)(vlSelf->testbench__DOT__mem2proc_response), 0U, vlSelf->testbench__DOT__proc2mem_addr, (IData)(
                                                                                ((QData)((IData)(
                                                                                ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                                >> 0xeU)))) 
                                                                                >> 0x20U)), 
                                                                     ((vlSelf->testbench__DOT__core__DOT__ex_mem_packet[1U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->testbench__DOT__core__DOT__ex_mem_packet[0U] 
                                                                         >> 0xeU)));
            if (vlSelf->testbench__DOT__mem_wb_valid_inst) {
                if ((0U != (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx))) {
                    VL_FWRITEF(vlSelf->testbench__DOT__wb_fileno,"PC=%x, REG[%2#]=%x\n",
                               32,(vlSelf->testbench__DOT__mem_wb_NPC 
                                   - (IData)(4U)),5,
                               (IData)(vlSelf->testbench__DOT__core__DOT__mem_wb_dest_reg_idx),
                               32,vlSelf->testbench__DOT__core__DOT__wb_reg_wr_data_out);
                } else {
                    VL_FWRITEF(vlSelf->testbench__DOT__wb_fileno,"PC=%x, ---\n",
                               32,(vlSelf->testbench__DOT__mem_wb_NPC 
                                   - (IData)(4U)));
                }
            }
            if (VL_UNLIKELY(((0xaU != (IData)(vlSelf->testbench__DOT__pipeline_error_status)) 
                             | (0x2faf080ULL < vlSelf->testbench__DOT__debug_counter)))) {
                VL_WRITEF("@@@ Unified Memory contents hex on left, decimal on right: \n");
                __Vtask_testbench__DOT__show_mem_with_decimal__10__end_addr = 0x1fffU;
                __Vtask_testbench__DOT__show_mem_with_decimal__10__start_addr = 0U;
                VL_WRITEF("@@@\n");
                vlSelf->testbench__DOT__show_mem_with_decimal__Vstatic__showing_data = 0U;
                __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k 
                    = __Vtask_testbench__DOT__show_mem_with_decimal__10__start_addr;
                while ((__Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k 
                        <= __Vtask_testbench__DOT__show_mem_with_decimal__10__end_addr)) {
                    if (VL_UNLIKELY((0ULL != vlSelf->testbench__DOT__memory__DOT__unified_memory
                                     [(0x1fffU & __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k)]))) {
                        VL_WRITEF("@@@ mem[%5d] = %x : %0#\n",
                                  32,VL_MULS_III(32, (IData)(8U), __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k),
                                  64,vlSelf->testbench__DOT__memory__DOT__unified_memory
                                  [(0x1fffU & __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k)],
                                  64,vlSelf->testbench__DOT__memory__DOT__unified_memory
                                  [(0x1fffU & __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k)]);
                        vlSelf->testbench__DOT__show_mem_with_decimal__Vstatic__showing_data = 1U;
                    } else if (VL_UNLIKELY((0U != vlSelf->testbench__DOT__show_mem_with_decimal__Vstatic__showing_data))) {
                        VL_WRITEF("@@@\n");
                        vlSelf->testbench__DOT__show_mem_with_decimal__Vstatic__showing_data = 0U;
                    }
                    __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k 
                        = ((IData)(1U) + __Vtask_testbench__DOT__show_mem_with_decimal__10__unnamedblk1__DOT__k);
                }
                VL_WRITEF("@@@\n@@  %^ : System halted\n@@\n",
                          64,VL_TIME_UNITED_D(10),-9);
                if (VL_UNLIKELY((5U == (IData)(vlSelf->testbench__DOT__pipeline_error_status)))) {
                    VL_WRITEF("@@@ System halted on memory error\n");
                } else if (VL_UNLIKELY((0xeU == (IData)(vlSelf->testbench__DOT__pipeline_error_status)))) {
                    VL_WRITEF("@@@ System halted on WFI instruction\n");
                } else if ((2U == (IData)(vlSelf->testbench__DOT__pipeline_error_status))) {
                    VL_WRITEF("@@@ System halted on illegal instruction\n");
                } else {
                    VL_WRITEF("@@@ System halted on unknown error code %x\n",
                              4,vlSelf->testbench__DOT__pipeline_error_status);
                }
                VL_WRITEF("@@@\n@@\n");
                vlSelf->testbench__DOT__show_clk_count__Vstatic__cpi 
                    = ((1.0 + VL_ITOR_D_I(32, vlSelf->testbench__DOT__clock_count)) 
                       / VL_ITOR_D_I(32, vlSelf->testbench__DOT__instr_count));
                VL_WRITEF("@@  %0# cycles / %0# instrs = %f CPI\n@@\n@@  %4.2f ns total time to execute\n@@\n\n",
                          32,((IData)(1U) + vlSelf->testbench__DOT__clock_count),
                          32,vlSelf->testbench__DOT__instr_count,
                          64,vlSelf->testbench__DOT__show_clk_count__Vstatic__cpi,
                          64,(10.0 * VL_ITOR_D_I(32, vlSelf->testbench__DOT__clock_count)));
                Vtop___024unit____Vdpiimwrap_print_close_TOP____024unit();
                VL_FCLOSE_I(vlSelf->testbench__DOT__wb_fileno); co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                                                nullptr, 
                                                                                "testbench/testbench.sv", 
                                                                                267);
                VL_FINISH_MT("testbench/testbench.sv", 267, "");
            }
            vlSelf->__Vdlyvval__testbench__DOT__debug_counter__v1 
                = (1ULL + vlSelf->testbench__DOT__debug_counter);
            vlSelf->__Vdlyvset__testbench__DOT__debug_counter__v1 = 1U;
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->testbench__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0))) 
                                     | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->testbench__DOT__clock)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0)) 
                                     | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->testbench__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->testbench__DOT__clock)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0)));
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clock__0 
        = vlSelf->testbench__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
