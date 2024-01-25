.DEFAULT_GOAL := sim
VER_DIR=/home/white/verilator/verilator
EXP_DIR=$(VER_DIR)/examples/test_1
CPP_FILE?=top_main.cpp
V_FILE?=top.v
SIM_MAIN=$(EXP_DIR)/$(CPP_FILE)
VER_FILE=$(EXP_DIR)/$(V_FILE)
SRCS=$(SIM_MAIN) $(VER_FILE)

OBJS = ./obj_dir
OBJS_FILE=$(OBJS)/Vtop
CXXFLAGS = -Wall
COMMAND=verilator --c --exe --build -j 0 -Wall
all:
	@echo "Write this Makefile by your self."

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "HELLO,WORLD"
	verilator --cc --exe --build -j 0 -Wall --trace $(SRCS)
	./$(OBJS_FILE)
	
clean:
	rm -rf $(OBJS) *.vcd 
include ../Makefile
