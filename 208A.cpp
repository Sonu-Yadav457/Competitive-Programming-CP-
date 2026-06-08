#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int k = 0;
    while(k < s.size()){
        if(k==0 && k+1 < s.size() && k+2 < s.size() && s[k] == 'W' && s[k+1] == 'U' && s[k+2] == 'B'){
            k += 3;
        }
        else if(k > 0 && k+1 < s.size() && k+2 < s.size() && s[k] == 'W' && s[k+1] == 'U' && s[k+2] == 'B'){
            cout << " ";
             k += 3;
        }
        while(s[k] == 'W' && s[k+1] == 'U' && s[k+2] == 'B'){
            k += 3;
        }
        
        if(k < s.size()){
            cout << s[k];
            k++;
        }
    }
    return 0;
}