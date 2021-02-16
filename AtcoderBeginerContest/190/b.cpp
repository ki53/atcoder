#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// input 
long long n, s, d, x, y;

int solve() {
    bool ans = false;
    rep(i,n) {
        cin >> x >> y;
        if (x < s && y > d) {
            ans = true;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

int main() {
    cin >> n >> s >> d;
    solve();

    return 0;
}
