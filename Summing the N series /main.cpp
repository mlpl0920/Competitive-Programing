#include "bits/stdc++.h"
using namespace std;

const int MOD = 1000000007;

long long solve(long long n) {
    return (n % MOD) * (n % MOD) % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
