#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int sum = 0,count = 0;
        int cycle = a+b+c;
        int cycles = n/cycle;
        int rem = n%cycle;
        if(rem == 0){
            count = cycles*3;
            cout<<count<<endl;
        }
        else if(rem <= a){
            count = cycles*3 + 1;
            cout<<count<<endl;
        }
        else if(rem <= a+b){
            count = cycles*3 + 2;
            cout<<count<<endl;
        }
        else{
            count = cycles*3 + 3;
            cout<<count<<endl;
        }
    }
    return 0;
}