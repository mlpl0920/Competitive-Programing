#include "bits/stdc++.h"
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<string> forgottenWords(N);
        set<string> modernWords;

        for (int i = 0; i < N; i++) {
            cin >> forgottenWords[i];
        }

        for (int i = 0; i < K; i++) {
            int L;
            cin >> L;
            for (int j = 0; j < L; j++) {
                string word;
                cin >> word;
                modernWords.insert(word);
            }
        }

        for (const auto& word : forgottenWords) {
            if (modernWords.find(word) != modernWords.end()) {
                cout << "YES ";
            } else {
                cout << "NO ";
            }
        }
        cout << endl;
    }
    return 0;
}
