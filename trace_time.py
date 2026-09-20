def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
        elif time == 5000:
            if 'b0' in line:
                print(f"Time 5000: {line}")

trace("accelerator.vcd")
