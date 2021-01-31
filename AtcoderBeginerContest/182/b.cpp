#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int n; cin>>n;
    int a[1010]; 
    int max_a = 0;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        chmax(max_a, a[i]);
    }
    int cnt = 0;
    int ans = 0;
    for (int i=2; i<=max_a; ++i) {
        int gcd_cnt = 0;
        for (int j=0; j<n; ++j) {
            if (a[j] % i == 0) ++gcd_cnt;
        }
        if (gcd_cnt >= cnt) {
            ans = i;
            cnt = gcd_cnt;
        }
    }
    cout << ans << endl;
}
