#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> neg;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x < 0)
            neg.push_back(x);
    }

    sort(neg.begin(), neg.end());

    int sum = 0;

    for(int i = 0; i < min(m, (int)neg.size()); i++) {
        sum += -neg[i];
    }

    cout << sum << endl;
}