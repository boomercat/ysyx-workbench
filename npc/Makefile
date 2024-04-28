TOPNAME = top

#some build's dir variable
BUILD_DIR = ./builds
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)


#verilator variable
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

#verilator flag
VERILATOR_FLAGS += -MMD -cc -O3 --x-assign fast --x-initial fast --noassert -j 5
VERILATOR_FLAGS += --trace

#source code
VSRCS = $(shell find $(abspath ./vsrc) -name "top.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

CTB = $(shell find $(abspath $(NPC_HOME)/csrc/tb) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
#override ARGS ?= --log=$(BUILD_DIR)/npc-log.txt --diff=$(NPC_HOME)/tools/nemu-diff/riscv32-nemu-interpreter-so

NPC_EXEC := $(BIN) $(ARGS) $(IMG)
#sim
$(BIN): $(VSRCS) $(CTB)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "$(COLOR_YELLOW)[VERILATE]$(COLOR_NONE) $(notdir $(BUILD_DIR))/$(notdir $(BIN))"
	@rm -rf $(OBJ_DIR)
	@mkdir -p $(BUILD_DIR)
	@$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

run: $(BIN)	
	@echo "$(COLOR_YELLOW)[Run CPU]$(COLOR_NONE)"
	$(NPC_EXEC)