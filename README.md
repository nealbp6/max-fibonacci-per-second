# Max Fibonacci Per Second

This repository contains two C++ programs attempting to calculate the **maximum number of Fibonacci numbers in exactly 1 second** using different timing methods.

## Files

1. **fibonacci_rdtsc.cpp**  
   - Uses CPU cycle counter (`RDTSC`) for ultra-fast timing.

2. **fibonacci_chrono.cpp**  
   - Uses `std::chrono::steady_clock` for portable, high-resolution timing.

## How to Compile

```bash
g++ fibonacci_rdtsc.cpp -O2 -o fibonacci_rdtsc
g++ fibonacci_chrono.cpp -O2 -o fibonacci_chrono
