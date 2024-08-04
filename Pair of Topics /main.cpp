#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), diff(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        diff[i] = a[i] - b[i];
    }

    sort(diff.begin(), diff.end());

    long long count = 0;
    for (int i = 0; i < n; ++i) {
        if (diff[i] > 0) {
            count += (n - (i + 1));
        } else {
            int j = upper_bound(diff.begin() + i + 1, diff.end(), -diff[i]) - diff.begin();
            count += (n - j);
        }
    }

    cout << count << endl;

    return 0;
}
