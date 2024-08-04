#include <iostream>
#include <vector>

using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int max_length = 0;
    int current_length =0;
    for(int i = 0; i < N; i++) {
        if (arr[i] != 0) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 0;
        }
    }
    if (current_length > max_length) {
        max_length = current_length;
    }
    cout << max_length;

    return 0;
}

