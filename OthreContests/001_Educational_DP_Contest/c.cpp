#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;
long long dp[100010][3];

int main(){
    int n; cin>>n;
    int a[n], b[n], c[n]; for (int i=0; i<n; ++i) cin >> a[i] >> b[i] >> c[i];

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    // int i = 0;
    // cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;

    for (int i=1; i<n; ++i) {
        for (int j=0; j<3; ++j) dp[i][j] = 0;
    }

    for (int i=1; i<n; ++i) {
        dp[i][0] = max(dp[i-1][1] + a[i], dp[i-1][2] + a[i]);
        dp[i][1] = max(dp[i-1][0] + b[i], dp[i-1][2] + b[i]);
        dp[i][2] = max(dp[i-1][0] + c[i], dp[i-1][1] + c[i]);
        // cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;
    }

    long long ans = max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
    cout << ans << endl;

}
