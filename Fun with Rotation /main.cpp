#include "bits/stdc++.h"

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >>A[i];
    }

    int current_start = 0;

    for (int i = 0; i < M; ++i) {
        char queryType ;
        int d;
        cin >> queryType >> d;
        if (queryType == 'C') {
            current_start = (current_start + d) % N;
        } else if(queryType == 'A') {
            current_start = (current_start - d + N) % N;
        } else if (queryType == 'R') {
            int effective = (current_start + d - 1) % N;
            cout << A[effective] << endl;
        }
    }
    return 0;
}