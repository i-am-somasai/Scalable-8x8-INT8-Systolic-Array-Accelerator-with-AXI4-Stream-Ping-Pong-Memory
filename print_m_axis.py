def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_m_axis = None
    
    for line in lines:
        if "$var" in line and "m_axis_tdata" in line:
            parts = line.split()
            symbol_m_axis = parts[3]
            print(f"Found m_axis_tdata: {symbol_m_axis}")
            break
            
    if not symbol_m_axis: return
    
    for line in lines:
        line = line.strip()
        if line.endswith(" " + symbol_m_axis) or line.endswith(symbol_m_axis):
            print(line)

trace("accelerator.vcd")
