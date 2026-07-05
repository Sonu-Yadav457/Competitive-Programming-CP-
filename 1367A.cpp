#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        if(n == 2){
            cout<<s<<endl;
            continue;
        }
        int j = 0;
        while(j<n){
            cout<<s[j];
            j+=2;
        }
        cout<<s[n-1]<<endl;
    }
    return 0;
}