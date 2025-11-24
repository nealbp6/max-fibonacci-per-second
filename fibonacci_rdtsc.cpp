#include <iostream>
#include <cstdint>

inline uint64_t rdtsc() {
    unsigned int lo, hi;
    __asm__ volatile ("rdtsc" : "=a"(lo), "=d"(hi));
    return ((uint64_t)hi << 32) | lo;
}

int main() {
    unsigned long long a = 0, b = 1, c, count = 0;
    const uint64_t freq = 4000000000ULL; // enter your CPU frequency here
    uint64_t start = rdtsc();
    uint64_t end = start + freq; 

    while (true) {
        c = a + b; a = b; b = c; count++;
        if (rdtsc() >= end) break;
    }
    std::cout << count;
    return 0;
}
