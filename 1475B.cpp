#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, bool> dp;
bool solve(int n){
    if(n < 0){
        return false;
    }
    if(n == 0){
        return true;
    }
    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    dp[n] = solve(n-2020) || solve(n-2021);
    return dp[n];
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(solve(n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}