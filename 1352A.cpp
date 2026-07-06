#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m = n;
        if(n>=1 && n<=10){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            int len = 0;
            while(n>0){
                if(n%10!=0){
                    len++;
                }
                n = n/10;
            }
            cout<<len<<endl;
            long long p = 1;
            while(m>0){
                int dig = m%10;
                if(dig!=0){
                    dig = dig*p;
                    cout<<dig<<" ";
                }
                p = p*10;
                m = m/10;
            }
            cout<<endl;
        }
    }
    return 0;
}