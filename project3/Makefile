# make compile  <- compiles a c program to compatible elf
# make assemble <- compiles a assembly program to compatible elf
# make sim      <- creates a executable to run the simulated hardware using verilator and drops
#			       it in the main directory under the name simv 
# make hex		<- creates a raw hex output of the elf so it is easily added to the testbench
#				   to test a variety of programs on the cpu. Undesputedly the most
#				   scuffed of all portions of the design, but verilator hates loading from .mem 
#				   and I couldn't find a compliant, elf2hex or whatever one they used in the original umich class
#				   another one of those programs I am just expected to have, in aiming ot make the project more open source... 
# make clean    <- remove files created during compilations and sim creation as well as runs.
#

SOURCE = test_progs/rv32_fib_rec.s

CRT = crt.s
LINKERS = linker.lds
ASLINKERS = aslinker.lds

DEBUG_FLAG = -g
CFLAGS =  -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -std=gnu11 -mstrict-align -mno-div
OFLAGS = -O0
ASFLAGS = -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -Wno-main -mstrict-align
OBJFLAGS = -SD -M no-aliases 
OBJDFLAGS = -SD -M numeric,no-aliases

GCC = riscv64-unknown-elf-gcc
OBJDUMP = riscv64-unknown-elf-objdump
AS = riscv64-unknown-elf-as
ELF2HEX = elf2hex

#use compile for C
compile: $(CRT) $(LINKERS)
	$(GCC) $(CFLAGS) $(OFLAGS) $(CRT) $(SOURCE) -T $(LINKERS) -o program.elf
	$(GCC) $(CFLAGS) $(DEBUG_FLAG) $(OFLAGS) $(CRT) $(SOURCE) -T $(LINKERS) -o program.debug.elf
#use assemble for 
assemble: $(ASLINKERS)
	$(GCC) $(ASFLAGS) $(SOURCE) -T $(ASLINKERS) -o program.elf 
	cp program.elf program.debug.elf
disassemble: program.debug.elf
	$(OBJDUMP) $(OBJFLAGS) program.debug.elf > program.dump
	$(OBJDUMP) $(OBJDFLAGS) program.debug.elf > program.debug.dump
	rm program.debug.elf

hex: program.elf
	../../freedom-elf2hex/bin/elf2hex --bit-width 64 --input ./program.elf --output ./program.mem

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

OBJ_DIR = obj_dir

VERILATOR = verilator -sv --cc --exe --trace --trace-structs --build --timing --main \
			 --Wno-"WIDTHEXPAND" --Wno-"CASEINCOMPLETE" --Wno-WIDTHTRUNC

OUTPUT = sim

all: $(OUTPUT)

#Rule to build the verilated module and compile the C++ test
$(OUTPUT): $(SYTHN_SRC)  $(TESTBENCH) 
	$(VERILATOR) $(SYTHN_SRC) $(TESTBENCH) 
	mv $(OBJ_DIR)/Vpipeline ./simv
#	$(MAKE) -C $(OBJ_DIR) -f Vpipeline.mk

clean:
	rm -rf $(OBJ_DIR) $(OUTPUT)
	rm -rf pipeline.out writeback.out 
	rm -rf simv
	rm -rf program.*