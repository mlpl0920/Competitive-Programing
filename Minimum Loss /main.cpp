#include "bits/stdc++.h"

using namespace std;

int minimumLoss(vector<long> price) {
    int n = price.size();
    vector<pair<long, int>> prices_with_indices;

    for (int i = 0; i < n; ++i) {
        prices_with_indices.push_back({price[i], i});
    }

    sort(prices_with_indices.begin(), prices_with_indices.end());

    long min_loss = LONG_MAX;

    for (int i = 1; i < n; ++i) {
        long price_diff = prices_with_indices[i].first - prices_with_indices[i-1].first;
        int original_index_current = prices_with_indices[i].second;
        int original_index_previous = prices_with_indices[i-1].second;

        if (original_index_previous > original_index_current && price_diff < min_loss) {
            min_loss = price_diff;
        }
    }

    return static_cast<int>(min_loss);
}

int main() {
    int n;
    cin >> n;

    vector<long> price(n);
    for (int i = 0; i < n; ++i) {
        cin >> price[i];
    }

    int result = minimumLoss(price);
    cout << result << endl;

    return 0;
}
