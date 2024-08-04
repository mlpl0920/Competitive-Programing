#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> contests(n);

    for (int i = 0; i < n; ++i) {
        cin >> contests[i];
    }

    sort(contests.begin(), contests.end());

    int day = 1;
    int index = 0;
    int daysTrained = 0;

    while (index < n) {
        while (index < n && contests[index] < day) {
            ++index;
        }

        if (index < n && contests[index] >= day) {
            ++daysTrained;
            ++day;
            ++index;
        } else {
            break;
        }
    }

    cout << daysTrained << endl;

    return 0;
}
