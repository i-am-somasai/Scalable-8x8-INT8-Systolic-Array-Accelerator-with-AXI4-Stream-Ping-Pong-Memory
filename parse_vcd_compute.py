def parse_vcd(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbol_compute_bank = None
    
    for line in lines:
        if "$var" in line and "compute_bank_sel" in line:
            parts = line.split()
            symbol_compute_bank = parts[3]
            print(f"Found compute_bank_sel: {symbol_compute_bank}")
            break
            
    if not symbol_compute_bank: return
    
    for line in lines:
        line = line.strip()
        if line.endswith(symbol_compute_bank) or line.endswith(" " + symbol_compute_bank):
            print(line)

parse_vcd("accelerator.vcd")
