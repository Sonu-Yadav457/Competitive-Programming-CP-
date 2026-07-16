#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k, maxi = 0, count = 0, x;
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> x;
            maxi = max(maxi, x);
            if(x == 2) count++;
        }
        if(maxi > 2 || count > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}