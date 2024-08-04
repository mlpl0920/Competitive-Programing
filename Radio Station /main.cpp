#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> ip_to_name;

    for (int i = 0; i < n; ++i) {
        string name, ip;

        cin >> name >> ip;
        ip_to_name[ip] = name;
    }

    cin.ignore();

    for (int i = 0; i < m; ++i) {

        string command_line;

        getline(cin, command_line);

        size_t space_pos = command_line.find(' ');
        size_t semicolon_pos = command_line.find(';');
        string ip = command_line.substr(space_pos + 1, semicolon_pos - space_pos - 1);

        string name = ip_to_name[ip];

        cout << command_line << " #" << name << endl;
    }

    return 0;
}
