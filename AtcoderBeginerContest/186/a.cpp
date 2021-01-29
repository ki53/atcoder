#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int n, w;cin>>n>>w;
    int ans = n / w;
    cout << ans << endl;
}
