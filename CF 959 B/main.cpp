#include "bits/stdc++.h"

using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int getInteger() {
    int input;
    cin >> input;
    return input;
}

vector<char> getCharacterVector(int size) {
    vector<char> characters(size);
    for (int i = 0; i < size; ++i) {
        cin >> characters[i];
    }
    return characters;
}

void solve() {
    int t = getInteger();
    while (t--) {
        int n = getInteger();
        vector<char> firstVector = getCharacterVector(n);
        vector<char> secondVector = getCharacterVector(n);

        bool valid = true;
        for (int i = 0; i < n; i++) {
            if (firstVector[i] == '0' && secondVector[i] == '1') {
                cout << "NO" << endl;
                valid = false;
                break;
            }
            if (firstVector[i] != '0' || secondVector[i] != '0') {
                break;
            }
        }
        if (valid) {
            cout << "YES" << endl;
        }
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}