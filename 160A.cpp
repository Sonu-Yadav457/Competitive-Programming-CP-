#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<int> arr(n);
	int sum = 0;
	for(int i = 0; i<n; i++){
	    cin>>arr[i];
	    sum+=arr[i];
	}
	
	sort(arr.begin(),arr.end(),greater<int>());
	int count = 0;
	int mySum = 0;
	for(int i = 0; i<n; i++){
	    mySum += arr[i];
	    count++;
	    if(mySum > sum - mySum){
	        cout<<count<<endl;
	        break;
	    }
	}
	
	return 0;
}
