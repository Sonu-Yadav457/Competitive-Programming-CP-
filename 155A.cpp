#include<iostream>
using namespace std;

bool isAmazing(int n,int arr[],int curr, int j){
    
    bool isSmall = true;
    bool isBig = true;
    for(int i = 0; i<j; i++){
        if(arr[i]<=curr){
            isSmall = false;
            break;
        }
    }
    for(int i = 0; i<j; i++){
        if(arr[i]>=curr){
            isBig = false;
            break;
        }
    }
    return isSmall || isBig;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 1; i < n; i++){
        if(isAmazing(n, a, a[i], i)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}