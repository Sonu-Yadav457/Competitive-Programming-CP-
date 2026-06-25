#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s1, s2;
        cin >> s1 >> s2;
        char temp = s1[0];
        s1[0] = s2[0];
        s2[0] = temp;
        cout << s1 << " " << s2 << endl;
    }
    return 0;
}