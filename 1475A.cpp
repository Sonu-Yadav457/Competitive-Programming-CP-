#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        long long a;
        cin >> a;
        if ((a & (a - 1)) == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
     return 0;
}