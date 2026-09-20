with open('verification/test_vectors/A.hex', 'r') as f:
    lines_A = f.readlines()
print(f"A.hex has {len(lines_A)} lines")

with open('verification/test_vectors/C_rtl.hex', 'r') as f:
    lines = f.readlines()
print(f"C_rtl.hex has {len(lines)} lines")
for i, line in enumerate(lines):
    if 'x' in line or 'X' in line:
        print(f"X found in C_rtl.hex at line {i}: {line.strip()}")
