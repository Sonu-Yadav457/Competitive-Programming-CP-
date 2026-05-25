#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int lowerCount = 0, upperCount = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') lowerCount++;
        else upperCount++;
    }
    if(lowerCount >= upperCount){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    return 0;
}