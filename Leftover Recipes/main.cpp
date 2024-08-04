#include "bits/stdc++.h"

using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve() {
    int N;
    cin >> N;

    vector<int> Q(N);
    for (int i = 0; i < N; ++i) {
        cin >> Q[i];
    }

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int maxServings = 0;

    for (int numA = 0; numA <= 1000000; ++numA) {
        bool canMakeA = true;
        for (int i = 0; i < N; ++i) {
            if (numA * A[i] > Q[i]) {
                canMakeA = false;
                break;
            }
        }
        if (!canMakeA) break;

        int maxB = INT_MAX;
        for (int i = 0; i < N; ++i) {
            int remainingQ = Q[i] - numA * A[i];
            if (B[i] > 0) {
                maxB = min(maxB, remainingQ / B[i]);
            } else if (remainingQ < 0) {
                maxB = 0;
            }
        }

        maxServings = max(maxServings, numA + maxB);
    }
    cout << maxServings << "\n";
}

int main() {
    fastIO();
    solve();

    return 0;
}