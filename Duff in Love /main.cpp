#include "bits/stdc++.h"
using namespace std;

long long solve(long long n) {
    long long result = 1;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            result *= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        result *= n;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}