#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i = 0; i<t; i++){
        string s;
        cin >> s;

        int sumFirst3 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sumLast3 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        if(sumFirst3 == sumLast3){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }  
    } 
    return 0;
}