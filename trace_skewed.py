def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbols = {}
    for line in lines:
        if "$var" in line:
            parts = line.split()
            if len(parts) >= 5:
                sym = parts[3]
                name = parts[4]
                if name == "skewed_data_out":
                    symbols[sym] = name

    print(f"Tracking {len(symbols)} symbols")
    
    count = 0
    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif time > 10000 and ('x' in line or 'X' in line):
            # find the symbol
            for sym in symbols:
                if line.endswith(" " + sym) or line.endswith(sym):
                    print(f"Time {time}: {symbols[sym]} ({sym}) became X -> {line}")
                    count += 1
                    break
        if count > 10: break

trace("accelerator.vcd")
