#include "bits/stdc++.h"
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n + 1), cnt(51, 0);

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] <= 50) cnt[a[i]]++;
    }

    bool found = false;
    for (int i = 50; i >= 1; --i) {
        if (i < 50) cnt[i] += cnt[i + 1];
        if (cnt[i] % 2 == 1) {
            cout << "YES\n";
            found = true;
            break;
        }
    }
    if (!found) cout << "NO\n";

}

int main() {
    fastIO();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}