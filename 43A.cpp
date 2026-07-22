#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	unordered_map<string,int> mp;
	while(n--){
	    string s;
	    cin>>s;
	    mp[s]++;
	}
	
	string str;
	int mx = INT_MIN;
	for(auto &p : mp){
	    if(mx<p.second){
	        str = p.first;
	        mx = p.second;
	    }
	}
	cout<<str<<endl;

}
