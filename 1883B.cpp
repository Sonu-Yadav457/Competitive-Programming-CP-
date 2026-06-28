#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for(int j = 0; j<n; j++){
            mp[s[j]]++;
        }
        int oddFreqCount = 0;
        for(auto it: mp){
            if(it.second % 2 != 0){
                oddFreqCount++;
            }
        }
        if(oddFreqCount <= k+1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}