#include "bits/stdc++.h"

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int sum = A + B;

    for (int i = 0; i <= 9; i++) {
        if (i != sum) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}