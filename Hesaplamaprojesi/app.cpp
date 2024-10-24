#include <iostream>
#include <vector>
#include <chrono>
#include "task.h"

int main() {
    long long userValue;
    std::cout << "Enter a number: ";
    std::cin >> userValue;


    auto start = std::chrono::high_resolution_clock::now();
    divisors2(userValue);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Execution time for divisors2(" << userValue << "): "
        << duration.count() << " seconds." << std::endl;

    return 0;
}