#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// input 
ll t, l, r;

int solve() {
    rep(i, t) {
        cin >> l >> r;

        if (r - l < l) {
            cout << 0 << endl;
            continue;
        }

        ll ans = (r - 2 * l + 2) * (r - 2 * l + 1) / 2;

        cout << ans << endl;
    }


    return 0;
}

int main() {
    cin >> t;

    solve();

    return 0;
}
