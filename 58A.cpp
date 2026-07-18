#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	int h = 0,e = 0, l = 0, o = 0;
	for(int i = 0; i<s.size(); i++){
	    if(s[i] == 'h'){
	        if(h == 0){
	            h++;
	        }
	        continue;
	    }
	    else if(h != 0 && s[i] == 'e'){
	        if(e == 0){
	            e++;
	        }
	        continue;
	    }
	    else if(h!= 0 && e != 0 && s[i] == 'l'){
	        if(l < 2){
	            l++;
	        }
	        continue;
	    }
	    else if(h != 0 && e !=0 && l== 2 && s[i] == 'o'){
	        if(o == 0){
	            o++;
	        }
	        continue;
	    }
	}
	if(h == 1 && e == 1 && l == 2 && o == 1){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;

}
