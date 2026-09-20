def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol = None
    for line in lines:
        if "$var" in line and "rd_data_a" in line:
            parts = line.split()
            symbol = parts[3]
            print(f"Found rd_data_a: {symbol}")
            break
            
    if not symbol: return
    
    for line in lines:
        line = line.strip()
        if (line.endswith(" " + symbol) or line.endswith(symbol)) and ('x' in line or 'X' in line):
            print(f"Found X in rd_data_a: {line}")
            break

trace("accelerator.vcd")
