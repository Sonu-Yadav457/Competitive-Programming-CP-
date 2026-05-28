#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int count = 1;
    for(int i = 1; i < n; i++){
        if(v[i-1] != v[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}