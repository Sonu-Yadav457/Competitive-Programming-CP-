#include<iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int width = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > h){
            width += 2;
        }
        else{
            width += 1;
        }
    }
    cout << width << endl;
    return 0;
}