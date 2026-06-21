#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int miksha = 0;
    int chris = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a> b){
            miksha++;
        }else if(a < b){
            chris++;
        }
    }
    if(miksha > chris){
        cout << "Mishka" << endl;
    }else if(miksha < chris){
        cout << "Chris" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }
}