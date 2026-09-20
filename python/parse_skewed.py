import sys

def parse_vcd_skewed(filename):
    vars_to_track = {}
    
    with open(filename, 'r') as f:
        for line in f:
            if line.startswith("$var"):
                parts = line.split()
                var_type = parts[1]
                size = parts[2]
                identifier = parts[3]
                name = parts[4]
                
                # Look for skewed_data_out in array_feeder
                if "a_in" in name or "mem_data" in name or "a_in" in name or "b_in" in name:
                    vars_to_track[identifier] = name
            
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
                    name = vars_to_track[identifier]
                    if 'x' in val:
                        print(f"Time {current_time}: {name} became {val}")

if __name__ == '__main__':
    parse_vcd_skewed('accelerator.vcd')
