#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    vector<int> results(q);
    for (int i = 0; i < q; ++i) {
        int mi;
        cin >> mi;
        results[i] = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
    }

    for (int i = 0; i < q; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}