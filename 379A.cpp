#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
 
    int sum = a;
    int ans = 0;
 
    while (sum >= b) {
        int new_items = sum / b;
        int leftovers = sum % b;
        
        ans += new_items * b; // Add consumed items
        sum = new_items + leftovers; // New total to process
    }
    
    ans += sum; // Add final remaining items
    cout << ans << endl;
    
    return 0;
}