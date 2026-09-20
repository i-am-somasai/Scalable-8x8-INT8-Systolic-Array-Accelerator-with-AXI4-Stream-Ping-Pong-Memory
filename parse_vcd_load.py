def parse_vcd(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_load_bank = None
    
    for line in lines:
        if "$var" in line and "load_bank_sel" in line:
            parts = line.split()
            symbol_load_bank = parts[3]
            print(f"Found load_bank_sel: {symbol_load_bank}")
            break
            
    if not symbol_load_bank: return
    
    for line in lines:
        line = line.strip()
        if line.endswith(symbol_load_bank) or line.endswith(" " + symbol_load_bank):
            print(line)

parse_vcd("accelerator.vcd")
