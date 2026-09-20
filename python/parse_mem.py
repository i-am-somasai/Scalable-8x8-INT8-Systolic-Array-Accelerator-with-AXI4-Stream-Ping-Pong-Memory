import sys

def parse_vcd_mem(filename):
    vars_to_track = {}
    
    with open(filename, 'r') as f:
        for line in f:
            if line.startswith("$var"):
                parts = line.split()
                var_type = parts[1]
                size = parts[2]
                identifier = parts[3]
                name = parts[4]
                
                if name in ["wr_en_a", "wr_addr_a", "wr_data_a", "rd_addr", "rd_data_a", "load_en", "s_axis_tvalid", "s_axis_tready", "wr_en_b", "wr_addr_b"]:
                    vars_to_track[identifier] = name
            
            elif line.startswith("$enddefinitions"):
                break
                
    print(f"Tracking variables: {vars_to_track}")
    
    current_time = 0
    with open(filename, 'r') as f:
        for line in f:
            line = line.strip()
            if not line: continue
            
            if line.startswith('#'):
                current_time = int(line[1:])
                # Stop parsing after transaction 0 is loaded
                if current_time > 400000:
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
                    if name in ["wr_en_a", "wr_addr_a", "wr_data_a", "rd_addr", "rd_data_a", "wr_en_b", "wr_addr_b", "wr_data_b"]:
                        print(f"Time {current_time}: {name} changed to {val}")

if __name__ == '__main__':
    parse_vcd_mem('accelerator.vcd')
