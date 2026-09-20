import numpy as np
import os
import sys

def compute_systolic_matmul(A, B):
    A_ext = A.astype(np.int32)
    B_ext = B.astype(np.int32)
    return np.dot(A_ext, B_ext)

def write_hex(filename, matrices, pack_width):
    with open(filename, "w") as f:
        for m in matrices:
            for row in m:
                row_hex = ""
                for val in reversed(row):
                    v = int(val)
                    if pack_width == 8:
                        row_hex += f"{v & 0xFF:02x}"
                    elif pack_width == 32:
                        row_hex += f"{v & 0xFFFFFFFF:08x}"
                f.write(f"{row_hex}\n")

if __name__ == "__main__":
    np.random.seed(42)
    os.makedirs("verification/test_vectors", exist_ok=True)

    num_transactions = 8
    
    A_list = []
    B_list = []
    C_list = []
    K_tiles_list = []
    
    # 0: K = 1 tile (8x8)
    A = np.random.randint(-128, 127, size=(8, 8), dtype=np.int8)
    B = np.random.randint(-128, 127, size=(8, 8), dtype=np.int8)
    A_list.append(A)
    B_list.append(B)
    C_list.append(compute_systolic_matmul(A, B))
    K_tiles_list.append(1)
    
    # 1: K = 2 tiles (8x16 @ 16x8)
    A = np.random.randint(-128, 127, size=(8, 16), dtype=np.int8)
    B = np.random.randint(-128, 127, size=(16, 8), dtype=np.int8)
    A_list.append(A)
    B_list.append(B)
    C_list.append(compute_systolic_matmul(A, B))
    K_tiles_list.append(2)
    
    # 2: K = 3 tiles (8x24 @ 24x8)
    A = np.random.randint(-128, 127, size=(8, 24), dtype=np.int8)
    B = np.random.randint(-128, 127, size=(24, 8), dtype=np.int8)
    A_list.append(A)
    B_list.append(B)
    C_list.append(compute_systolic_matmul(A, B))
    K_tiles_list.append(3)
    
    # 3: Mixed signs, K = 2 tiles
    A = np.full((8, 16), 127, dtype=np.int8)
    B = np.full((16, 8), -128, dtype=np.int8)
    A_list.append(A)
    B_list.append(B)
    C_list.append(compute_systolic_matmul(A, B))
    K_tiles_list.append(2)
    
    # 4: Zeros, K = 2 tiles
    A = np.zeros((8, 16), dtype=np.int8)
    B = np.random.randint(-128, 127, size=(16, 8), dtype=np.int8)
    A_list.append(A)
    B_list.append(B)
    C_list.append(compute_systolic_matmul(A, B))
    K_tiles_list.append(2)
    
    # 5, 6, 7: Random K = 1 tiles (to test backpressure and resets)
    for _ in range(3):
        A = np.random.randint(-128, 127, size=(8, 8), dtype=np.int8)
        B = np.random.randint(-128, 127, size=(8, 8), dtype=np.int8)
        A_list.append(A)
        B_list.append(B)
        C_list.append(compute_systolic_matmul(A, B))
        K_tiles_list.append(1)

    # Flatten A and B into lists of 8x8 tiles
    A_tiles_flat = []
    B_tiles_flat = []
    
    for A, B, k_tiles in zip(A_list, B_list, K_tiles_list):
        for k in range(k_tiles):
            # Extract the 8x8 tile
            A_tile = A[:, k*8 : (k+1)*8]
            B_tile = B[k*8 : (k+1)*8, :]
            
            # Hardware requires A transposed
            A_tiles_flat.append(A_tile.T)
            B_tiles_flat.append(B_tile)

    write_hex("verification/test_vectors/A.hex", A_tiles_flat, pack_width=8)
    write_hex("verification/test_vectors/B.hex", B_tiles_flat, pack_width=8)
    write_hex("verification/test_vectors/C_exp.hex", [np.flipud(C) for C in C_list], pack_width=32)
    
    with open("verification/test_vectors/K_tiles.hex", "w") as f:
        for k in K_tiles_list:
            f.write(f"{k}\n")

    print(f"Generated {num_transactions} test transactions.")
