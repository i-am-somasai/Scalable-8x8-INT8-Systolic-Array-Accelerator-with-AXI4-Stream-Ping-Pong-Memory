.PHONY: all sim clean synth

all: sim

sim:
	mkdir -p verification/test_vectors
	python3 python/generate_vectors.py
	iverilog -g2012 -o sim.vvp rtl/pe/*.sv rtl/array/*.sv rtl/memory/*.sv rtl/control/*.sv rtl/axi/*.sv rtl/top/*.sv tb/accelerator_tb.sv
	vvp sim.vvp
	python3 python/compare_results.py

synth:
	yosys -c scripts/synthesis.tcl

clean:
	rm -rf verification sim.vvp accelerator.vcd synth_netlist.v openroad/*.odb openroad/*.def
