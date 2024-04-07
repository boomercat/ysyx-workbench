######################################################################
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) -cc --exe --trace --build -j  ~/ysyx-workbench/npc/vsrc/top.v ~/ysyx-workbench/npc/top_trace_main.cpp
	@echo "-- RUN ---------------------"
	obj_dir/Vtop +trace
	@echo "-- DONE --------------------"
######################################################################

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
