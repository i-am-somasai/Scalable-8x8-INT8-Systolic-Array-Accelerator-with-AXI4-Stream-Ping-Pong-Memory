def trace_rst(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_rst = None
    for line in lines:
        if "$var" in line and " rst " in line:
            parts = line.split()
            symbol_rst = parts[3]
            break
            
    if not symbol_rst: return
    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif line.endswith(symbol_rst) or line.endswith(" " + symbol_rst):
            print(f"Time {time}: rst -> {line}")

trace_rst("accelerator.vcd")
