#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}

const long long INF = 1LL << 60;

int main(){
    int h,w; cin >> h>> w; 
    int a[110][110]; 
    int min_a = 110;
    for (int i=0; i<h; ++i) {
        for (int j=0; j<w; j++) {
            cin >> a[i][j];
            chmin(min_a, a[i][j]);
        }
    }
    int ans = 0;
    for (int i=0; i<h; ++i) {
        for (int j=0; j<w; j++) {
            ans += a[i][j] - min_a;
        }
    }
    cout << ans << endl;
}
