def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_flat = None
    for line in lines:
        if "$var" in line and "flat_acc_out" in line:
            parts = line.split()
            symbol_flat = parts[3]
            break
            
    if not symbol_flat: return
    
    time = 0
    valid_found = False
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif line.endswith(symbol_flat) or line.endswith(" " + symbol_flat):
            if 'x' not in line and 'X' not in line:
                print(f"Time {time}: flat_acc_out became VALID -> {line}")
                valid_found = True
            elif valid_found and ('x' in line or 'X' in line):
                print(f"Time {time}: flat_acc_out became X -> {line}")
                break

trace("accelerator.vcd")
