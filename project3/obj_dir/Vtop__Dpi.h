// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at testbench/testbench.sv:21:30
    extern void print_close();
    // DPI import at testbench/testbench.sv:14:30
    extern void print_cycles();
    // DPI import at testbench/testbench.sv:13:30
    extern void print_header(const char* str);
    // DPI import at testbench/testbench.sv:18:30
    extern void print_membus(int proc2mem_command, int mem2proc_response, int proc2mem_addr_hi, int proc2mem_addr_lo, int proc2mem_data_hi, int proc2mem_data_lo);
    // DPI import at testbench/testbench.sv:16:30
    extern void print_reg(int wb_reg_wr_data_out_hi, int wb_reg_wr_data_out_lo, int wb_reg_wr_idx_out, int wb_reg_wr_en_out);
    // DPI import at testbench/testbench.sv:15:30
    extern void print_stage(const char* div, int inst, int npc, int valid_inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
