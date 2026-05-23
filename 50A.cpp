#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int product = m*n;
    if(product % 2 == 0){
        cout << product/2 << endl;
    }
    else{
        cout << (product-1)/2 << endl;
    }
    return 0;
}