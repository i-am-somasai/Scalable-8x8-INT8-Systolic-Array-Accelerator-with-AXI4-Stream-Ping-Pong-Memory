import sys
import os

def read_hex(filename, pack_width):
    lines = []
    with open(filename, "r") as f:
        for line in f:
            line = line.strip()
            if not line: continue
            chars_per_elem = pack_width // 4
            num_elems = len(line) // chars_per_elem
            row = []
            for i in range(num_elems):
                idx = len(line) - (i + 1) * chars_per_elem
                val_hex = line[idx : idx + chars_per_elem]
                val = int(val_hex, 16)
                if pack_width == 32:
                    if val >= (1 << 31):
                        val -= (1 << 32)
                row.append(val)
            lines.append(row)
    return lines

if __name__ == "__main__":
    if not os.path.exists("verification/test_vectors/C_rtl.hex"):
        print("ERROR: C_rtl.hex not found.")
        sys.exit(1)
        
    exp = read_hex("verification/test_vectors/C_exp.hex", 32)
    rtl = read_hex("verification/test_vectors/C_rtl.hex", 32)
    
    if len(exp) != len(rtl):
        print(f"ERROR: Row count mismatch. Expected {len(exp)}, got {len(rtl)}")
        sys.exit(1)
        
    mismatches = 0
    for i, (e_row, r_row) in enumerate(zip(exp, rtl)):
        if e_row != r_row:
            print(f"Mismatch at row {i}:")
            print(f"  Exp: {e_row}")
            print(f"  RTL: {r_row}")
            mismatches += 1
            
    if mismatches > 0:
        print(f"TEST FAILED with {mismatches} mismatches.")
        sys.exit(1)
    else:
        print("TEST PASSED: RTL matches Golden Model perfectly.")
        sys.exit(0)
