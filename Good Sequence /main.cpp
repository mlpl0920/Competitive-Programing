#include "bits/stdc++.h"
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    map<int, int> frequency;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        frequency[a[i]]++;
    }

    int removals = 0;
    for (const auto& [num, count] : frequency) {
        if (count < num) {
            removals += count;
        } else {
            removals += (count - num);
        }
    }

    cout << removals << endl;
    return 0;
}
