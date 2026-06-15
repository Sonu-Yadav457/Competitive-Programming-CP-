#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    // Process each test case
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int count = 0;
        if(arr[0] == 0){
            count++;
        }
        int maxCount = 0;
        maxCount = max(maxCount, count);
        for(int j = 1; j < n; j++){
            if(arr[j] == 0 && arr[j-1]==0){
                count++;
                maxCount = max(maxCount, count);
            }
            else if(arr[j] == 0 && arr[j-1]!=0){
                count = 1;
                maxCount = max(maxCount, count);
            }
            else{
                count = 0;
            }

        }
        cout << maxCount << endl;
    }
    return 0;
}