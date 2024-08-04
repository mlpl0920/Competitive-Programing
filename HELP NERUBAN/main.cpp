#include "bits/stdc++.h"

using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Hero {
    string name;
    int accuracy;
    int speed;
    int stupidity;
};

bool compareHeroes(const Hero &h1, const Hero &h2) {
    if (h1.accuracy != h2.accuracy) {
        return h1.accuracy > h2.accuracy;
    }
    if (h1.speed != h2.speed) {
        return h1.speed > h2.speed;
    }
    if (h1.stupidity != h2.stupidity) {
        return h1.stupidity < h2.stupidity;
    }
    return h1.name < h2.name;
}

void solve() {
    int n;
    cin >> n;
    vector<Hero> heroes(n);

    for (int i = 0; i < n; ++i) {
        cin >> heroes[i].name >> heroes[i].accuracy >> heroes[i].speed >> heroes[i].stupidity;
    }

    sort(heroes.begin(), heroes.end(), compareHeroes);

    for (const Hero &hero : heroes) {
        cout << hero.name << "\n";
    }

}

int main() {
    fastIO();
    solve();

    return 0;
}