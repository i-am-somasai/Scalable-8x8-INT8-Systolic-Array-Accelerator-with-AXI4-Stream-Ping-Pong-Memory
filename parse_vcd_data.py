def parse_vcd(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_wr_data = None
    
    for line in lines:
        if "$var" in line and "wr_data_a" in line:
            parts = line.split()
            symbol_wr_data = parts[3]
            print(f"Found wr_data_a: {symbol_wr_data}")
            break
            
    if not symbol_wr_data: return
    
    for line in lines:
        line = line.strip()
        if line.endswith(symbol_wr_data) or line.endswith(" " + symbol_wr_data):
            if 'x' in line:
                print(f"Found X in wr_data_a: {line}")

parse_vcd("accelerator.vcd")
