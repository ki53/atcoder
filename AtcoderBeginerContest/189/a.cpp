#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// input 
string c;

int solve() {
    if (c[0] == c[1] && c[1] == c[2]) cout << "Won" << endl;
    else cout << "Lost" << endl;

    return 0;
}

int main() {
    cin >> c;

    solve();

    return 0;
}
