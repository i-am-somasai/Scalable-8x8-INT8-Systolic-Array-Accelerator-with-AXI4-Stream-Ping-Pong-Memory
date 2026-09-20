def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbols = []
    for line in lines:
        if "$var" in line and "acc_out" in line:
            parts = line.split()
            symbols.append(parts[3])
            
    if not symbols: return
    
    time = 0
    transitions = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif 'b' in line and not 'x' in line:
            # this is a valid transition
            parts = line.split()
            if len(parts) == 1:
                val = line[0:line.find(' ')+1] if ' ' in line else line # rough
                sym = line.replace('b', '').replace('0', '').replace('1', '').strip()
                if sym in symbols:
                    print(f"Time {time}: PE acc_out {sym} became valid -> {line}")
                    transitions += 1
                    if transitions > 20: break

trace("accelerator.vcd")
