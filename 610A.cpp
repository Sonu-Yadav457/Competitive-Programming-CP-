#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<0<<endl;
        return 0;
    }
    int x = 1,y = (n/2)-1;
    long long ways = 0;
    while(x<y){
        ways++;
        x++;
        y--;
    }
    cout<<ways<<endl;

    return 0;
}