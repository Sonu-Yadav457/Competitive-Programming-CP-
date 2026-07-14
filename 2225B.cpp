#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int bad = 0;
    for (int i = 0; i + 1 < (int)s.size(); i++) {
        if (s[i] == s[i + 1])
            bad++;
    }

    cout << (bad <= 2 ? "YES" : "NO") << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}