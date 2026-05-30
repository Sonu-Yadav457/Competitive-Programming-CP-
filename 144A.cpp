#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int minPos = 0, maxPos = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] <= a[minPos]){
            minPos = i;
        }
        if(a[i] > a[maxPos]){
            maxPos = i;
        }
    }
    int swapsForMax = maxPos;
    int swapsForMin = n - 1 - minPos;
    if(maxPos > minPos){
        swapsForMin--;
    }
    cout << swapsForMax + swapsForMin << endl;
    return 0;
}