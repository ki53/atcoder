#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// input 
ll n, x, v, p;

int solve() {
    x *= 100;
    ll alc_sum = 0;
    bool out = false;
    int cnt = 0;
    rep(i, n) {
        ++cnt;
        cin >> v >> p;
        alc_sum += v * p;
        if (alc_sum > x) {
            out = true;
            break;
        }
    }

    if (out) cout << cnt << endl;
    else cout << "-1" << endl;


    return 0;
}

int main() {
    cin >> n >> x;

    solve();

    return 0;
}
