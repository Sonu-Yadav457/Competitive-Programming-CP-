#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        long long sum = 0;
        int cnt1 = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) cnt1++;
        }
        if(n>1 && sum >= n+cnt1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}