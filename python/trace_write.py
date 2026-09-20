import sys

found_wr = False
with open("verification/sim.vcd", "r") as f:
    for line in f:
        if "wr_en_a" in line:
            print("Found wr_en_a:", line.strip())
        if "wr_addr_a" in line:
            print("Found wr_addr_a:", line.strip())
