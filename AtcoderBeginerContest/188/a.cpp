#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
ll x, y;

int solve() {
    if (x > y) if (x < y + 3) {
        cout << "Yes" << endl;
        return 0;
    }
    if (x < y) if (x + 3 > y) {
        cout << "Yes" << endl;
        return 0;
    } 
    
    cout << "No" << endl;

    return 0;
}

int main() {
    cin >> x >> y;

    solve();

    return 0;
}
