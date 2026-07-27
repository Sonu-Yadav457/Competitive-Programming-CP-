#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variables for the areas of the faces
    long long A, B, C;
    
    // Read the three areas
    if (cin >> A >> B >> C) {
        
        // Calculate the individual edge lengths
        // Using double or long long for the square root to prevent precision loss
        long long x = sqrt((A * C) / B);
        long long y = sqrt((A * B) / C);
        long long z = sqrt((B * C) / A);
        
        // Calculate the total sum of all 12 edges
        long long total_sum = 4 * (x + y + z);
        
        // Print the result
        cout << total_sum << endl;
    }
    
    return 0;
}
