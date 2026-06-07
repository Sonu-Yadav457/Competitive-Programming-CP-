#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    map<char,int> m;
    for(int i=0;i<4;i++){
        cin>>a[i];
        m[i+1] = a[i];
    }
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.size();i++){
        sum += m[s[i]-'0'];
    }

    cout<<sum<<endl;
    return 0;
}