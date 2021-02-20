#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// tool functions 
inline int ctoi(char c) {return (int)c-48;}
inline char itoc(int i) {return (char)(i+48);}

// input 
string s;

int solve() {
    bool ans = true;
    for (int i=0; i<s.length(); ++i) {
        char tes = s[i];
        if (i % 2 == 0) {
            if (ctoi(tes) <= 48) {
                ans = false;
                break;
            }

        } else {
            if (ctoi(tes) >= 49) {
                ans = false;
                break;
            }
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

int main() {
    cin >> s;

    solve();

    return 0;
}
