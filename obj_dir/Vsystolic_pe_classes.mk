# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsystolic_pe.mk for the caller.

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
	Vsystolic_pe \
	Vsystolic_pe___024root__DepSet_h67cc2236__0 \
	Vsystolic_pe___024root__DepSet_h67cc2236__1 \
	Vsystolic_pe___024root__DepSet_h67cc2236__2 \
	Vsystolic_pe___024root__DepSet_h2ec29818__0 \
	Vsystolic_pe_array_feeder__DepSet_h9cdb545b__0 \
	Vsystolic_pe_ping_pong_buffer__A3__DepSet_heabd5899__0 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__0 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__1 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__2 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__3 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__4 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__5 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__6 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__7 \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__8 \
	Vsystolic_pe_systolic_pe__DepSet_hda467d09__0 \
	Vsystolic_pe__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsystolic_pe__ConstPool_0 \
	Vsystolic_pe___024root__Slow \
	Vsystolic_pe___024root__DepSet_h67cc2236__0__Slow \
	Vsystolic_pe___024root__DepSet_h67cc2236__1__Slow \
	Vsystolic_pe___024root__DepSet_h2ec29818__0__Slow \
	Vsystolic_pe_array_feeder__Slow \
	Vsystolic_pe_array_feeder__DepSet_h9cdb545b__0__Slow \
	Vsystolic_pe_array_feeder__DepSet_h67b18603__0__Slow \
	Vsystolic_pe_ping_pong_buffer__A3__Slow \
	Vsystolic_pe_ping_pong_buffer__A3__DepSet_heabd5899__0__Slow \
	Vsystolic_pe_ping_pong_buffer__A3__DepSet_hb21381c5__0__Slow \
	Vsystolic_pe_systolic_pe__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__0__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__1__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__2__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__3__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__4__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__5__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__6__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__7__Slow \
	Vsystolic_pe_systolic_pe__DepSet_h13405d25__8__Slow \
	Vsystolic_pe_systolic_pe__DepSet_hda467d09__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsystolic_pe__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsystolic_pe__Syms \
	Vsystolic_pe__Trace__0__Slow \
	Vsystolic_pe__TraceDecls__0__Slow \

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
