import numpy as np

def compute_systolic_matmul(A, B):
    """
    Python Golden Reference Model for the 8x8 Systolic Accelerator.
    
    Args:
        A: (numpy.ndarray) INT8 matrix of shape (M, K)
        B: (numpy.ndarray) INT8 matrix of shape (K, N)
    
    Returns:
        C: (numpy.ndarray) INT32 matrix of shape (M, N)
    """
    assert A.dtype == np.int8, "Matrix A must be INT8"
    assert B.dtype == np.int8, "Matrix B must be INT8"
    
    # Cast to int32 prior to matrix multiplication to exactly mimic
    # the 32-bit accumulation width inside the RTL without overflow.
    A_ext = A.astype(np.int32)
    B_ext = B.astype(np.int32)
    
    # Dot product computes C = A * B
    C = np.dot(A_ext, B_ext)
    
    return C

def generate_random_test_vectors(filename_a, filename_b, filename_c_exp, rows=8, cols=8, k_dim=8):
    """
    Generates random INT8 matrices and writes them to hex files for RTL loading.
    """
    A = np.random.randint(-128, 127, size=(rows, k_dim), dtype=np.int8)
    B = np.random.randint(-128, 127, size=(k_dim, cols), dtype=np.int8)
    
    C = compute_systolic_matmul(A, B)
    
    print("Matrix A (INT8):\n", A)
    print("Matrix B (INT8):\n", B)
    print("Expected Matrix C (INT32):\n", C)
    
    # (Writing to hex files would occur here for Verilog $readmemh loading)
    
if __name__ == "__main__":
    generate_random_test_vectors("A.hex", "B.hex", "C_exp.hex")
