#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    map<string, int> country_count;

    for (int i = 0; i < n; ++i) {

        string line;

        getline(cin, line);
        istringstream iss(line);

        string country;
        iss >> country;

        country_count[country]++;
    }

    for (const auto &entry: country_count) {

        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
