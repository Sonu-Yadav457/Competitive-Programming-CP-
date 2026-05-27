#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    int diff = v[0].second - v[0].first;
    int maxDiff = diff;
    for(int i=1;i<n;i++){
        diff = diff + (v[i].second - v[i].first);
        maxDiff = max(maxDiff, diff);
    }
    cout << maxDiff << endl;

    return 0;
}