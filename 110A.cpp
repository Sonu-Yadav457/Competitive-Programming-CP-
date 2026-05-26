#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int count = 0;
    while(n > 0){
        int dig = n % 10;
        if(dig == 7 || dig == 4){
            count++;
        }
        n /= 10;
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}