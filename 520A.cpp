#include<iostream>
#include<string>
#include <cctype>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    for(int i = 0; i < n; i++){
        st.insert((tolower(s[i])));
    }
    for(int i = 0; i < 26; i++){
        if(st.find((char)(i+'a')) == st.end()){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;

}