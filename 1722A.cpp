#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k = 0; k<t; k++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n != 5){
            cout<<"NO"<<endl;
            continue;
        }
        int T = 0, i = 0, m = 0, u = 0, r = 0;
        for(int ch : s){
            if(ch == 'T') T++;
            else if(ch == 'i') i++;
            else if(ch == 'm') m++;
            else if(ch == 'u') u++;
            else if(ch == 'r') r++;
        }
        if(T == 1 && i == 1 && m == 1 && u == 1 && r == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}