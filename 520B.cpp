#include <bits/stdc++.h> 
using namespace std; 

int ans = 0; 
int min_ans = 1e9;
int memo[20005];

void solve(long long n, long long m){ 
    if(n <= 0 || n > 20000) return; 
    if(ans >= min_ans) return; 
    if(ans >= memo[n]) return; 
    memo[n] = ans; 
    
    if(n == m){ 
        min_ans = min(min_ans, ans);
        return; 
    } 
    
    ans++; 
    solve(n * 2, m); 
    ans--;
    
    ans++;
    solve(n - 1, m); 
    ans--;
} 

int main() { 
    long long n, m; 
    cin >> n >> m; 
    
    for(int i = 0; i < 20005; i++) {
        memo[i] = 1e9;
    }
    
    solve(n, m); 
    
    cout << min_ans << endl; 
    return 0;
}
