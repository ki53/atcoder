#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;
long long dp[110000];
long long h[110000];

int main(){
    int n, k ; cin >> n >> k;
    for (int i=0; i<n; ++i) cin >> h[i];

    dp[0] = 0;
    for (int i=1; i<110000; ++i) dp[i] = INF;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<=k; ++j) {
            chmin(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
        }
    }
    cout << dp[n-1] << endl;

}