#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int> map;
    map["Tetrahedron"] = 4;
    map["Cube"] = 6;
    map["Octahedron"] = 8;
    map["Dodecahedron"] = 12;
    map["Icosahedron"] = 20;
    int total = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        total += map[s];
    }
    cout<<total<<endl;
    return 0;
}