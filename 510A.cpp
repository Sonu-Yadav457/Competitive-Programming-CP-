#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int evenCount = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i%2 != 0){
                cout << "#";
            }
            else{
                if(evenCount%2 != 0){
                    if(j == m){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if(j==1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }

        }
        if(i%2 == 0){
            evenCount++;
        }
        
        cout << endl;
    }
    
    return 0;
}