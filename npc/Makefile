ifeq ($(VERILATOR_ROOT),)
VERILATOR=verilator
else
export VERILATOR_ROOT
VERILATOR=$(VERILATOR_ROOT)/bin/verilator
endif
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) -y vsrc/encoder.v/encoder -cc --exe --build -j -Wall --trace  --top-module encoder vsrc/encoder.v csrc/main.cpp
	@echo "Write this Makefile by your self."

