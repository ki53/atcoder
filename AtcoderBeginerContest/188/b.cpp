#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// const 
const ll MAX_N = 100100;

// input
ll n, a[MAX_N], b[MAX_N];

int solve() {
    ll ans = 0;
    rep(i, n) {
        ans += a[i] * b[i];
    }

    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

int main() {
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];    

    solve();

    return 0;
}
