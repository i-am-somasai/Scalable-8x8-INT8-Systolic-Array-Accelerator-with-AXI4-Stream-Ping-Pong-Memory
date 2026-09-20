# PPA Analysis (Power, Performance, Area)

In VLSI design, PPA is the holy grail metric by which all chips are judged. You can always make a chip faster, but it will cost more power and area. You can make it smaller, but it might run slower.

## What is PPA?
* **Performance:** Typically measured by the Maximum Clock Frequency ($F_{max}$) or throughput (MACs per second).
* **Power:** Measured in milliwatts (mW). Broken down into Dynamic Power (switching activity) and Leakage Power (static drain).
* **Area:** Measured in square micrometers ($\mu m^2$) or gate count.

## Automated PPA Extraction

To evaluate the PPA of this Systolic Array Accelerator, we wrote a Python utility: `scripts/extract_ppa.py`.

### How it Works
When Yosys, OpenSTA, and OpenROAD finish running, they dump massive log files full of thousands of lines of verbose text.
`extract_ppa.py` parses these exact log files to extract the critical metrics:
1. It searches the synthesis logs for `Number of cells:` to determine the gate count.
2. It searches the timing logs for `wns` (Worst Negative Slack) and `tns` (Total Negative Slack) to calculate $F_{max}$.
3. It searches the power reports for `Total Power`.

### Usage
```bash
python3 scripts/extract_ppa.py
```
This script prevents engineers from having to manually scrape logs, allowing for rapid iteration. If you change a parameter (like expanding the array to 16x16) and re-run the physical flow, you can instantly see exactly how much your Area and Power increased.

*(Note: Never invent PPA numbers. The script will only report valid numbers if the physical flow has successfully generated the log files.)*
