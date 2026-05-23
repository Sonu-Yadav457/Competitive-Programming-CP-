#include<iostream>
using namespace std;

int abs(int a){
    if(a < 0){
        return -a;
    }
    return a;
}

int main(){
    int row,col;
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            int a;
            cin>>a;
            if(a == 1){
                row = i;
                col = j;
            }

        }
    }
    int movesMin = abs(row-2) + abs(col-2);
    cout << movesMin << endl;
    
    return 0;
}