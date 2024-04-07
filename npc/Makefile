ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
VERILATOR = ~/verilator/verilator
endif
all:
	@echo "Write this Makefile by your self."

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "--achieve simulate on one button --------"
	$(VERILATOR) -cc --exe --trace --build   -j -I ~/ysyx-workbench/npc/vsrc/top.v  top_trace_main.cpp 
	obj_dir/Vtop
	@echo "-- DONE --------------------"

clean:
	rm -rf $(OBJS) *.vcd 
include ../Makefile
