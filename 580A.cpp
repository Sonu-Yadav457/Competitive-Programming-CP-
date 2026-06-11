#include<iostream>
using namespace std;

//GOT TLE - O(n^2), need to optimize - O(n)
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int maxLen = 0;
//     for(int i = 0; i < n; i++){
//         int len = 1;
//         for(int j = i; j < n-1; j++){
//             if(a[j] <= a[j+1]){
//                 len++;
//             } else {
//                 break;
//             }
//         }
//         maxLen = max(maxLen, len);
//     }
//     cout << maxLen << endl;
//     return 0;
// }


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0, j = 0, maxLen = 1;
    while(j<n-1){
        if(a[j] <= a[j+1]){
            j++;
            maxLen = max(maxLen, j-i+1);
        } else {
            i = j + 1;
            j = i;
        }
    }
    cout << maxLen << endl;
    return 0;
}