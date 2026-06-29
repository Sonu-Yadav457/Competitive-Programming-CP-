#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int minMove = -1;
        while(n%3 == 0){
            if(n%2 == 0){
                n/=6;
                minMove++;
            }
            else{
                n*=2;
                minMove++;
            }
        }
        if(minMove == -1 || n != 1){
            cout<<-1<<endl;
        }
        else{
            cout<<minMove+1<<endl;
        }
        
    }
    return 0;
}