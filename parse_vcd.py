def parse_vcd(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbols = {}
    
    for line in lines:
        if "$var" in line and "wire" in line:
            parts = line.split()
            if len(parts) >= 5:
                name = parts[4]
                symbol = parts[3]
                if name in ["rd_data_a", "flat_a_in", "a_in", "acc_out"]:
                    symbols[name] = symbol
                    
    print(f"Symbols: {symbols}")
    
    if not symbols: return
    
    # Just print the first 50 value changes for these symbols
    changes = 0
    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif any(line.endswith(" " + sym) or line.endswith(sym) for sym in symbols.values()):
            if 'b' in line or 'x' in line or '0' in line or '1' in line:
                print(f"Time {time}: {line}")
                changes += 1
                if changes > 20: break

parse_vcd("accelerator.vcd")
