#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<long long> seen_sums;
    // Initialize with 0 to catch zero-sum subsegments starting from index 0
    seen_sums.insert(0); 

    long long current_prefix_sum = 0;
    int insertions = 0;

    for (int i = 0; i < n; ++i) {
        current_prefix_sum += a[i];

        // If the prefix sum has been seen before, a zero-sum segment is detected
        if (seen_sums.count(current_prefix_sum)) {
            insertions++;
            
            // Greedily "reset" the set
            seen_sums.clear();
            
            // Re-insert the prefix sum right before the current element
            // This acts as the new baseline for future subsegments
            seen_sums.insert(current_prefix_sum - a[i]);
        }
        
        // Add the current prefix sum to the set tracking the current valid segment
        seen_sums.insert(current_prefix_sum);
    }

    cout << insertions << "\n";

    return 0;
}