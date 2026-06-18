#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    float sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x/100.0;
    }
    cout << (sum*100.0) / n << endl;
    return 0;
}