#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int officerAvailable = 0;
    int crimeUntreated = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            officerAvailable += a[i];
        }
        else{
            if(officerAvailable > 0){
                officerAvailable--;
            }
            else{
                crimeUntreated++;
            }
        }
    }
    cout << crimeUntreated << endl;
    return 0;
}