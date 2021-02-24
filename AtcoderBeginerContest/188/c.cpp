#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// const
const int MAX_A = 65550;

// input 
int n, a[MAX_A];

// param
P max_left = P(0, 0), max_right = P(0, 0);

int solve() {
    // rep(i, pow(2, n)) cout << a[i] << " ";
    // cout << endl;

    int half = pow(2, n) / 2;

    // cout << half << endl;

    rep(i, half) if (max_left.second < a[i]) max_left = P(i, a[i]);
    rep(i, half) if (max_right.second < a[i+half]) max_right = P(i+half, a[i+half]);

    // cout << "left:  " << max_left.second << endl;
    // cout << "right: " << max_right.second << endl;

    if (max_left.second > max_right.second) cout << max_right.first + 1 << endl;
    else cout << max_left.first + 1 << endl;

    return 0;
}

int main() {
    cin >> n;
    rep(i, pow(2, n)) cin >> a[i];

    solve();

    return 0;
}