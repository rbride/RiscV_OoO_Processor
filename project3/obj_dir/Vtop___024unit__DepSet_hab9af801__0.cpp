// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void print_header(const char* str);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_header_TOP____024unit(std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_header_TOP____024unit\n"); );
    // Body
    const char* str__Vcvt;
    for (size_t str__Vidx = 0; str__Vidx < 1; ++str__Vidx) str__Vcvt = str.c_str();
    print_header(str__Vcvt);
}

extern "C" void print_cycles();

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_cycles_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_cycles_TOP____024unit\n"); );
    // Body
    print_cycles();
}

extern "C" void print_stage(const char* div, int inst, int npc, int valid_inst);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit(std::string div, IData/*31:0*/ inst, IData/*31:0*/ npc, IData/*31:0*/ valid_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_stage_TOP____024unit\n"); );
    // Body
    const char* div__Vcvt;
    for (size_t div__Vidx = 0; div__Vidx < 1; ++div__Vidx) div__Vcvt = div.c_str();
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    int valid_inst__Vcvt;
    for (size_t valid_inst__Vidx = 0; valid_inst__Vidx < 1; ++valid_inst__Vidx) valid_inst__Vcvt = valid_inst;
    print_stage(div__Vcvt, inst__Vcvt, npc__Vcvt, valid_inst__Vcvt);
}

extern "C" void print_reg(int wb_reg_wr_data_out_hi, int wb_reg_wr_data_out_lo, int wb_reg_wr_idx_out, int wb_reg_wr_en_out);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_reg_TOP____024unit(IData/*31:0*/ wb_reg_wr_data_out_hi, IData/*31:0*/ wb_reg_wr_data_out_lo, IData/*31:0*/ wb_reg_wr_idx_out, IData/*31:0*/ wb_reg_wr_en_out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_reg_TOP____024unit\n"); );
    // Body
    int wb_reg_wr_data_out_hi__Vcvt;
    for (size_t wb_reg_wr_data_out_hi__Vidx = 0; wb_reg_wr_data_out_hi__Vidx < 1; ++wb_reg_wr_data_out_hi__Vidx) wb_reg_wr_data_out_hi__Vcvt = wb_reg_wr_data_out_hi;
    int wb_reg_wr_data_out_lo__Vcvt;
    for (size_t wb_reg_wr_data_out_lo__Vidx = 0; wb_reg_wr_data_out_lo__Vidx < 1; ++wb_reg_wr_data_out_lo__Vidx) wb_reg_wr_data_out_lo__Vcvt = wb_reg_wr_data_out_lo;
    int wb_reg_wr_idx_out__Vcvt;
    for (size_t wb_reg_wr_idx_out__Vidx = 0; wb_reg_wr_idx_out__Vidx < 1; ++wb_reg_wr_idx_out__Vidx) wb_reg_wr_idx_out__Vcvt = wb_reg_wr_idx_out;
    int wb_reg_wr_en_out__Vcvt;
    for (size_t wb_reg_wr_en_out__Vidx = 0; wb_reg_wr_en_out__Vidx < 1; ++wb_reg_wr_en_out__Vidx) wb_reg_wr_en_out__Vcvt = wb_reg_wr_en_out;
    print_reg(wb_reg_wr_data_out_hi__Vcvt, wb_reg_wr_data_out_lo__Vcvt, wb_reg_wr_idx_out__Vcvt, wb_reg_wr_en_out__Vcvt);
}

extern "C" void print_membus(int proc2mem_command, int mem2proc_response, int proc2mem_addr_hi, int proc2mem_addr_lo, int proc2mem_data_hi, int proc2mem_data_lo);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_membus_TOP____024unit(IData/*31:0*/ proc2mem_command, IData/*31:0*/ mem2proc_response, IData/*31:0*/ proc2mem_addr_hi, IData/*31:0*/ proc2mem_addr_lo, IData/*31:0*/ proc2mem_data_hi, IData/*31:0*/ proc2mem_data_lo) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_membus_TOP____024unit\n"); );
    // Body
    int proc2mem_command__Vcvt;
    for (size_t proc2mem_command__Vidx = 0; proc2mem_command__Vidx < 1; ++proc2mem_command__Vidx) proc2mem_command__Vcvt = proc2mem_command;
    int mem2proc_response__Vcvt;
    for (size_t mem2proc_response__Vidx = 0; mem2proc_response__Vidx < 1; ++mem2proc_response__Vidx) mem2proc_response__Vcvt = mem2proc_response;
    int proc2mem_addr_hi__Vcvt;
    for (size_t proc2mem_addr_hi__Vidx = 0; proc2mem_addr_hi__Vidx < 1; ++proc2mem_addr_hi__Vidx) proc2mem_addr_hi__Vcvt = proc2mem_addr_hi;
    int proc2mem_addr_lo__Vcvt;
    for (size_t proc2mem_addr_lo__Vidx = 0; proc2mem_addr_lo__Vidx < 1; ++proc2mem_addr_lo__Vidx) proc2mem_addr_lo__Vcvt = proc2mem_addr_lo;
    int proc2mem_data_hi__Vcvt;
    for (size_t proc2mem_data_hi__Vidx = 0; proc2mem_data_hi__Vidx < 1; ++proc2mem_data_hi__Vidx) proc2mem_data_hi__Vcvt = proc2mem_data_hi;
    int proc2mem_data_lo__Vcvt;
    for (size_t proc2mem_data_lo__Vidx = 0; proc2mem_data_lo__Vidx < 1; ++proc2mem_data_lo__Vidx) proc2mem_data_lo__Vcvt = proc2mem_data_lo;
    print_membus(proc2mem_command__Vcvt, mem2proc_response__Vcvt, proc2mem_addr_hi__Vcvt, proc2mem_addr_lo__Vcvt, proc2mem_data_hi__Vcvt, proc2mem_data_lo__Vcvt);
}

extern "C" void print_close();

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_print_close_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_print_close_TOP____024unit\n"); );
    // Body
    print_close();
}
