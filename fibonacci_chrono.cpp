#include <iostream>
#include <chrono>

int main() {
    unsigned long long a = 0, b = 1, c, count = 0;

    auto start = std::chrono::high_resolution_clock::now();
    auto end = start + std::chrono::seconds(1); 

    while (true) {
        c = a + b; a = b; b = c; count++;
        if (std::chrono::high_resolution_clock::now() >= end)
            break;
    }
    std::cout << count;
    return 0;
}
