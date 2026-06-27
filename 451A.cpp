#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool isAkshat = true;
    while (true){
        if(n==0 || m==0){
            break;
        }
        n--;m--;
        if(n !=0 && m != 0){
            isAkshat = !isAkshat;
        }
    }
    if(isAkshat){
        cout << "Akshat" << endl;
    }
    else{
        cout << "Malvika" << endl;
    }
    return 0;
}