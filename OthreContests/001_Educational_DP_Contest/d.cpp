#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int n, w; cin >> n >> w;
    long long weight[110], value[110];
    for (int i=0; i<n; ++i) cin >> weight[i] >> value[i];
    long long dp[110][100100] = {0};
    
    for (int i=0; i<n; i++) {
        for (int sum_w = 0; sum_w <= w; ++sum_w) {
            if (sum_w - weight[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[n][w] << endl;
}
