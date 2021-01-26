#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int n; cin >> n;
    int a,b,c;
    long long dp[100010][3];
    for (int i=0; i<n; ++i) for (int j=0; j<3; ++j) dp[i][j] = 0;

    cin >> a >> b >> c;
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for (int i=1; i<n; ++i) {
        cin >> a >> b >> c;
        dp[i][0] = max(dp[i-1][1] + a, dp[i-1][2] + a);
        dp[i][1] = max(dp[i-1][0] + b, dp[i-1][2] + b);
        dp[i][2] = max(dp[i-1][0] + c, dp[i-1][1] + c);
    }

    long long ans = max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
    cout << ans << endl;
}
