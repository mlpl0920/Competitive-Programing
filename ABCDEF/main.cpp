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

    vector<int> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    unordered_map<int, int> lhs_count;
    unordered_map<int, int> rhs_count;

    for (int a : S) {
        for (int b : S) {
            for (int c : S) {
                int lhs_value = a * b + c;
                lhs_count[lhs_value]++;
            }
        }
    }

    for (int d : S) {
        if (d == 0) continue;
        for (int e : S) {
            for (int f : S) {
                int rhs_value = d * (e + f);
                rhs_count[rhs_value]++;
            }
        }
    }

    long long total_sextuples = 0;
    for (const auto& lhs_pair : lhs_count) {
        int value = lhs_pair.first;
        int count_lhs = lhs_pair.second;
        if (rhs_count.find(value) != rhs_count.end()) {
            total_sextuples += static_cast<long long>(count_lhs) * rhs_count[value];
        }
    }

    cout << total_sextuples << endl;

}

int main() {
    fastIO();
    solve();

    return 0;
}