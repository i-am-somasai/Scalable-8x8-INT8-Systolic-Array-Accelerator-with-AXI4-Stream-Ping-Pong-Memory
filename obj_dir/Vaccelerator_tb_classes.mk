# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaccelerator_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vaccelerator_tb \
	Vaccelerator_tb___024root__DepSet_h1ce0fd03__0 \
	Vaccelerator_tb___024root__DepSet_h1ce0fd03__1 \
	Vaccelerator_tb___024root__DepSet_h1ce0fd03__2 \
	Vaccelerator_tb___024root__DepSet_h1b37a6bd__0 \
	Vaccelerator_tb_array_feeder__DepSet_h98777f2a__0 \
	Vaccelerator_tb_ping_pong_buffer__A3__DepSet_h7b90bb7a__0 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__0 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__1 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__2 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__3 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__4 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__5 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__6 \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__7 \
	Vaccelerator_tb_systolic_pe__DepSet_h47f50091__0 \
	Vaccelerator_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaccelerator_tb__ConstPool_0 \
	Vaccelerator_tb___024root__Slow \
	Vaccelerator_tb___024root__DepSet_h1ce0fd03__0__Slow \
	Vaccelerator_tb___024root__DepSet_h1ce0fd03__1__Slow \
	Vaccelerator_tb___024root__DepSet_h1b37a6bd__0__Slow \
	Vaccelerator_tb_array_feeder__Slow \
	Vaccelerator_tb_array_feeder__DepSet_h98777f2a__0__Slow \
	Vaccelerator_tb_array_feeder__DepSet_h9fae2894__0__Slow \
	Vaccelerator_tb_ping_pong_buffer__A3__Slow \
	Vaccelerator_tb_ping_pong_buffer__A3__DepSet_h7b90bb7a__0__Slow \
	Vaccelerator_tb_ping_pong_buffer__A3__DepSet_h7c476c44__0__Slow \
	Vaccelerator_tb_systolic_pe__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__0__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__1__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__2__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__3__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__4__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__5__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__6__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h303e5737__7__Slow \
	Vaccelerator_tb_systolic_pe__DepSet_h47f50091__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vaccelerator_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaccelerator_tb__Syms \
	Vaccelerator_tb__Trace__0__Slow \
	Vaccelerator_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
