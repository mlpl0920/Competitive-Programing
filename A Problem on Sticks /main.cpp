#include "bits/stdc++.h"

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> uniqueHeights;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > 0) {
                uniqueHeights.insert(a[i]);
            }
        }
        cout << uniqueHeights.size() << '\n';
    }
    return 0;
}