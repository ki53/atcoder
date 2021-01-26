#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b; 
        return true; 
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b; 
        return true;
    }
    return false; 
}

int main(){
    const long long INF = 1LL << 60;
    
    long long dp[100010];
    for (int i=0; i<100010; ++i) dp[i] = INF;
    
    int N; cin >> N;
    long long h[N]; for (int i=0; i<N; ++i) cin >> h[i];

    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);
    for (int i=2; i<N; ++i) {
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }
    cout << dp[N-1] << endl;

}