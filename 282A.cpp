#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 0;
    for(int i = 0; i<n; i++){
        char a,b,c;
        cin>>a>>b>>c;
        if((a == '+' && b == '+') || (b == '+' && c == '+')){
            x++;
        }
        else if((a == '-' && b == '-') || (b == '-' && c == '-')){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}