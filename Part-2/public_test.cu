

#include <cuda_runtime.h>

// kernel_all_cases: all sync types, all structural combinations
__global__ void kernel_all_cases(int *data, int n, int flag)
{
    int tid = threadIdx.x + blockIdx.x * blockDim.x;

    // [1] not in loop, not in conditional
    __syncthreads();
}
