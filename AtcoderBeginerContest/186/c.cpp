#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int n; cin >> n;
    int cnt = 0;
    for (int i=1; i<=n; ++i) {
        string s = to_string(i);
        if (s.find_first_of('7') == string::npos) continue;
        stringstream oct_ss;
        oct_ss << oct << i;
        string oct_s = oct_ss.str();
        if (oct_s.find_first_of('7') == string::npos) continue;
        cnt++;
    }
}
