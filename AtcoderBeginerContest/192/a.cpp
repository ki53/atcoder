#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// input 
int x;

int solve() {
    int ans = 100 - x % 100;
    cout << ans << endl;

    return 0;
}

int main() {
    cin >> x;

    solve();

    return 0;
}
