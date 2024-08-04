#include "bits/stdc++.h"
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<long long> arr;
    arr.push_back(n);

    long long cnt = 0;
    while (arr.size() < static_cast<size_t>(n)) {
        long long last = arr.back();
        arr.pop_back();
        for (long long i = 0; i < min(k - 1, last - 1); i++) {
            arr.push_back(1);
        }
        arr.push_back(last - k + 1);
        cnt++;
    }

    cout << cnt << endl;
}

int main() {
    fastIO();

    long long T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}