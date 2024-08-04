#include "bits/stdc++.h"

using namespace std;

void solve() {
    int elements;
    set<int>st;
    for (int i = 0; i < 4; ++i) {
        cin >> elements;
        st.insert(elements);
    }
    cout << 4 - st.size();
}

int main() {
    solve();
    return 0;
}