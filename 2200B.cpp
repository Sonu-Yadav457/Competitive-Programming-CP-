#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n;
        bool sorted = true;
        if (n > 0) cin >> b;
        for(int i = 1; i < n; i++) {
            cin >> a;
            if(a < b) {
                sorted = false;
            }
            b = a;
        }
        if (sorted) cout << n << endl;
        else cout << 1 << endl;
    }
    return 0;
}