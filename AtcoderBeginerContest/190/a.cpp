#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;


// input 
int a,b,c;

int solve() {
    if (c == 0) {
        if (a <= b) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    } else {
        if (b <= a) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;

    }

    return 0;
}

int main() {
    cin >> a >> b >> c;

    solve();

    return 0;
}
