#!/usr/bin/env python3
import os
import re

def extract_ppa():
    reports_dir = "reports"
    if not os.path.exists(reports_dir):
        print("Reports directory not found.")
        return

    power = "N/A"
    wns = "N/A"
    area = "N/A"

    # Try to extract power
    power_rpt = os.path.join(reports_dir, "sta_power.rpt")
    if os.path.exists(power_rpt):
        with open(power_rpt, "r") as f:
            for line in f:
                if "Total" in line and "W" in line:
                    power = line.split()[-2] + " " + line.split()[-1]
                    break

    # Try to extract WNS
    setup_rpt = os.path.join(reports_dir, "sta_setup.rpt")
    if os.path.exists(setup_rpt):
        with open(setup_rpt, "r") as f:
            content = f.read()
            match = re.search(r"slack\s+\(VIOLATED\)\s+([-\d\.]+)", content)
            if match:
                wns = match.group(1)
            else:
                match = re.search(r"slack\s+\(MET\)\s+([-\d\.]+)", content)
                if match:
                    wns = match.group(1)

    print("====================================")
    print("        PPA EXTRACTION REPORT       ")
    print("====================================")
    print(f"Power: {power}")
    print(f"WNS:   {wns}")
    print(f"Area:  {area} (Requires detailed OpenROAD log)")
    print("====================================")

if __name__ == "__main__":
    extract_ppa()
