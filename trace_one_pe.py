def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_acc = None
    for line in lines:
        if "$var" in line and "acc_out" in line and "pe_inst" in line:
            # find first pe_inst's acc_out
            parts = line.split()
            symbol_acc = parts[3]
            print(f"Found PE acc_out: {symbol_acc}")
            break
            
    if not symbol_acc: return
    
    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif line.endswith(symbol_acc) or line.endswith(" " + symbol_acc):
            print(f"Time {time}: acc_out -> {line}")
            if time > 20000: break

trace("accelerator.vcd")
