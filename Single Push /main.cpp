#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
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
            diff[i] = b[i] - a[i];
        }

        int start = -1, end = -1;
        bool posible = true;

        for (int i = 0; i < n; ++i) {
            if (diff[i] != 0) {
                if (start == -1) {
                    start = i;
                }
                end = i;
            }
        }

        if (start != -1) {
            int k = diff[start];
            if (k <= 0) {
                posible = false;
            } else {
                for (int i = start; i <= end; ++i) {
                    if (diff[i] != k) {
                        posible = false;
                        break;
                    }
                }
                for (int i = 0; i < start; ++i) {
                    if (diff[i] != 0) {
                        posible = false;
                        break;
                    }
                }
            }
        }
        if (posible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}