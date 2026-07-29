#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string n;
    if (cin >> n) {
        int val = 0;
        int len = n.length();
 
        if (len == 1) {
            val = n[0] - '0';
        } else {
            val = (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
        }
 
        if (val % 4 == 0) {
            cout << 4 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
 
    return 0;
}
