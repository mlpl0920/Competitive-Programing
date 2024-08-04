#include "bits/stdc++.h"
using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> a;

    for (size_t i = 0; i < s.length(); ) {
        if (s[i] == '0') {
            while (i < s.length() && s[i] == '0') {
                i++;
            }
            a.push_back(0);
        } else {
            a.push_back(1);
            i++;
        }
    }

    int cnt = 0;
    int cns = 0;

    for (int i : a) {
        if (i == 0) {
            cnt++;
        } else {
            cns++;
        }
    }

    if (cns > cnt) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
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