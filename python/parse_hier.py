import sys

def parse_vcd_hierarchy(filename):
    vars_to_track = {}
    current_scope = []
    
    with open(filename, 'r') as f:
        for line in f:
            if line.startswith("$scope"):
                parts = line.split()
                current_scope.append(parts[2])
            elif line.startswith("$upscope"):
                current_scope.pop()
            elif line.startswith("$var"):
                parts = line.split()
                identifier = parts[3]
                name = parts[4]
                full_name = ".".join(current_scope) + "." + name
                
                if "a_in" in name or "a_out" in name or "skewed" in name or "mem_data" in name:
                    vars_to_track[identifier] = full_name
            
            elif line.startswith("$enddefinitions"):
                break
                
    current_time = 0
    with open(filename, 'r') as f:
        for line in f:
            line = line.strip()
            if not line: continue
            
            if line.startswith('#'):
                current_time = int(line[1:])
                if current_time > 360000:
                    break
            else:
                if line[0] in ['0', '1', 'x', 'z']:
                    val = line[0]
                    identifier = line[1:]
                elif line[0] == 'b':
                    parts = line.split()
                    val = parts[0][1:]
                    identifier = parts[1]
                else:
                    continue
                    
                if identifier in vars_to_track:
                    full_name = vars_to_track[identifier]
                    if True:
                        print(f"Time {current_time}: {full_name} became {val}")

if __name__ == '__main__':
    parse_vcd_hierarchy('accelerator.vcd')
