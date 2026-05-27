#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i].second - v[i].first >=2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}