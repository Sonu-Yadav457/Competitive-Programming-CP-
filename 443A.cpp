#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool vis[26] = {0};

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            vis[c - 'a'] = true;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++)
        if (vis[i]) cnt++;

    cout << cnt << '\n';

    return 0;
}