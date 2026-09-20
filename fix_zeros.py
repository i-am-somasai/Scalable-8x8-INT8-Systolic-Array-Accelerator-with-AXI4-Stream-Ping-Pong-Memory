import os
import glob

files = glob.glob('rtl/**/*.sv', recursive=True)
for f in files:
    with open(f, 'r') as file:
        content = file.read()
    content = content.replace("'0", "0")
    with open(f, 'w') as file:
        file.write(content)
print("Replaced '0 with 0 in RTL files")
