include Vtop.mk
CPPFLAGS += $(shell llvm-config --cxxflags | tr ' ' '\n' | grep '^-I' | tr '\n' ' ')
#CPPFLAGS += -DCONFIG_FTRACE=1
#CPPFLAGS += -DCONFIG_TRACE=1
LDFLAGS += $(shell llvm-config --ldflags)
LIBS += $(shell llvm-config --libs) #please make sure you already have llvm-config or in your PATH
