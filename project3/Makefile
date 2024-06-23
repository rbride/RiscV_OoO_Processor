# make          <- runs simv (after compiling simv if needed)
# make all      <- runs simv (after compiling simv if needed)
# make simv     <- compile simv if needed (but do not run)
# make syn      <- runs syn_simv (after synthesizing if needed then 
#                                 compiling synsimv if needed)
# make clean    <- remove files created during compilations (but not synthesis)
# make nuke     <- remove all files created during compilation and synthesis
#
# To compile additional files, add them to the TESTBENCH or SIMFILES as needed
# Every .vg file will need its own rule and one or more synthesis scripts
# The information contained here (in the rules for those vg files) will be 
# similar to the information in those scripts but that seems hard to avoid.
#

SOURCE = test_progs/bfs.c

CRT = crt.s
LINKERS = linker.lds
ASLINKERS = aslinker.lds

DEBUG_FLAG = -g
CFLAGS =  -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -std=gnu11 -mstrict-align -mno-div
OFLAGS = -O2
ASFLAGS = -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -Wno-main -mstrict-align
OBJFLAGS = -SD -M no-aliases 
OBJDFLAGS = -SD -M numeric,no-aliases

GCC = riscv64-unknown-elf-gcc
OBJDUMP = riscv64-unknown-elf-objdump
AS = riscv64-unknown-elf-as
ELF2HEX = elf2hex

compile: $(CRT) $(LINKERS)
	$(GCC) $(CFLAGS) $(OFLAGS) $(CRT) $(SOURCE) -T $(LINKERS) -o program.elf
	$(GCC) $(CFLAGS) $(DEBUG_FLAG) $(OFLAGS) $(CRT) $(SOURCE) -T $(LINKERS) -o program.debug.elf
assemble: $(ASLINKERS)
	$(GCC) $(ASFLAGS) $(SOURCE) -T $(ASLINKERS) -o program.elf 
	cp program.elf program.debug.elf
disassemble: program.debug.elf
	$(OBJDUMP) $(OBJFLAGS) program.debug.elf > program.dump
	$(OBJDUMP) $(OBJDFLAGS) program.debug.elf > program.debug.dump
	rm program.debug.elf
hex: program.elf
	$(ELF2HEX) 8 8192 program.elf > program.mem

program: compile disassemble hex
	@:

debug_program:
	gcc -lm -g -std=gnu11 -DDEBUG $(SOURCE) -o debug_bin
assembly: assemble disassemble hex
	@:



TESTBENCH = sys_defs.svh			\
			ISA.svh         		\
			testbench/mem.sv 		\
			testbench/pipe_print.c 	\
			testbench/testbench.sv  \

SYTHN_SRC = verilog/pipeline.sv		\
			verilog/regfile.sv		\
			verilog/if_stage.sv		\
			verilog/id_stage.sv		\
			verilog/ex_stage.sv		\
			verilog/mem_stage.sv	\
			verilog/wb_stage.sv

VTUBER 	  = sys_defs.svh	\
			ISA.svh         \
			testbench/mem.sv  \
			testbench/visual_testbench.v \
			testbench/visual_c_hooks.cpp \
			testbench/pipe_print.c

SRC 	  = src.cpp

OBJ_DIR = obj_dir

VERILATOR = verilator -sv --cc --exe --trace --trace-structs --build --timing --main \
			 --Wno-"WIDTHEXPAND" --Wno-"CASEINCOMPLETE" --Wno-WIDTHTRUNC

OUTPUT = sim

all: $(OUTPUT)

#Rule to build the verilated module and compile the C++ test
$(OUTPUT): $(SYTHN_SRC)  $(TESTBENCH) 
	$(VERILATOR) $(SYTHN_SRC) $(TESTBENCH) 
#	$(MAKE) -C $(OBJ_DIR) -f Vpipeline.mk

clean:
	rm -rf $(OBJ_DIR) $(OUTPUT)

# Phony targets
.PHONY: all clean