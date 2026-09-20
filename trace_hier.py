def trace(vcd_file):
    with open(vcd_file, 'r') as f:
        lines = f.readlines()
        
    symbols = {}
    path = []
    for line in lines:
        if "$scope" in line:
            parts = line.split()
            if len(parts) >= 3:
                path.append(parts[2])
        elif "$upscope" in line:
            if path: path.pop()
        elif "$var" in line:
            parts = line.split()
            if len(parts) >= 5:
                sym = parts[3]
                name = parts[4]
                full_name = ".".join(path) + "." + name
                symbols[sym] = full_name

    time = 0
    for line in lines:
        line = line.strip()
        if line.startswith('#'):
            time = int(line[1:])
            if time > 315000: break
        elif time == 315000 and ('x' in line or 'X' in line):
            # find the symbol
            for sym in symbols:
                if line.endswith(" " + sym) or line.endswith(sym):
                    print(f"Time {time}: {symbols[sym]} ({sym}) became X -> {line}")
                    break

trace("accelerator.vcd")
