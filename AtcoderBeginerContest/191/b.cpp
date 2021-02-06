#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int n, x, a;

int main() {
    cin >> n >> x;
    rep(i, n) {
        cin >> a;
        if (a != x) cout << a << " ";
    }

    cout << endl;

    return 0;
}
