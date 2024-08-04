#include "bits/stdc++.h"

using namespace std;

int main() {
    string first_layout, second_layout, text;

    cin >> first_layout >> second_layout >> text;

    map<char, char> mapping;
    for (int i = 0; i < 26; ++i) {
        mapping[first_layout[i]] = second_layout[i];
    }

    for (char &ch : text) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = mapping[ch];
            } else {
                char lower_ch = tolower(ch);
                ch = toupper(mapping[lower_ch]);
            }
        }
    }

    cout << text << endl;

    return 0;
}
