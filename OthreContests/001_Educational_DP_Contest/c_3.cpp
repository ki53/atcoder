#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;


int main(){
    int n;cin>>n;
    long long dp[100010][3]; 
    long long a[100010][3]; //NG: a[n][3]; Why..?

    for (int i=0; i<n; ++i) {
        for (int j=0; j<3; ++j) {
            dp[i][j] = 0;
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i){ 
        for (int j=0; j<3; ++j) {
            for (int k=0; k<3; ++k) {
                if (j==k) continue;
                chmax(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    long long res = 0;
    for (int i=0; i<3; ++i) chmax(res, dp[n][i]);
    cout << res << endl;
}