#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int num = 1;
        int cnt = 0;

        while (cnt < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                cnt++;
            }

            if (cnt == k) {
                cout << num << endl;
                break;
            }

            num++;
        }
    }

    return 0;
}