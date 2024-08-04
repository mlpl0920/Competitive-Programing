#include "bits/stdc++.h"


using namespace std;

int main() {
    string encoded_password;
    cin >> encoded_password;

    unordered_map<string, char> binary_to_digit;
    for (char digit = '0'; digit <= '9'; ++digit) {
        string binary_code;
        cin >> binary_code;
        binary_to_digit[binary_code] = digit;
    }

    string password;
    for (int i = 0; i < 80; i += 10) {
        string binary_segment = encoded_password.substr(i, 10);
        password += binary_to_digit[binary_segment];
    }

    cout << password << endl;

    return 0;
}

