#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        int p1 = 1, p2 = n-1;
        int ans = 0;
        if(n == 2){
            cout << 1 << endl;
            continue;
        }
        while(p1 < p2){
            ans++;
            p1++;
            p2--;
        }
        ans *= 2;
        if(n != 2 && p1 == p2 && p1 + p2 == n){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}