#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count = 0, check = 0;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '(') count++;
            else count--;
            if(count == 0) {
                check++;
                break;
            }
        }
        if(check == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}