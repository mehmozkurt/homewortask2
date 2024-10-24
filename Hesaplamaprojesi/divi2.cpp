#include "task.h"
#include <cmath>
#include <vector>

std::vector<long long> divisors(long long n) {
    std::vector<long long> divs;
    for (long long i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}

std::vector<long long> divisors2(long long n) {
    std::vector<long long> divs;
    for (long long i = 1; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {
                divs.push_back(n / i);
            }
        }
    }
    return divs;
}