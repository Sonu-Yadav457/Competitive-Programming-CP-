#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	
	vector<int> arr(m);
	for(int i = 0; i<m; i++){
	    cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	
	int i = 0, j = n-1;
	
	int minDiff = INT_MAX;
	while(i<m && j<m){
	    minDiff = min(minDiff,arr[j]-arr[i]);
	    i++;j++;
	}
	cout<<minDiff<<endl;

}
