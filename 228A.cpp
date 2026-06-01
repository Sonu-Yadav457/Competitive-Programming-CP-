#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int n = s.size();
    cout<<4-n<<endl;
    return 0;
}