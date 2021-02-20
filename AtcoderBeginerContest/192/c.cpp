#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;
using ll = long long;
using ull = unsigned long long;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// tool functions 
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}
template<class T> inline int binary_search(vector<T>& a, int key) {
    int ng = -1;
    int ok = (int)a.size();
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (a[mid] >= key) ok = mid;
        else ng = mid;
    }
    return ok;
}
inline int ctoi(char c) {return (int)c-48;}
inline char itoc(int i) {return (char)(i+48);}

// const
const long long INF = 1LL << 60;
const int MAX_W = 10000;
const int MAX_H = 10000;

// for bfs
int w, h;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
string a[MAX_H];
queue<P> que;
inline bool canMove(int ny, int nx) {
    if (0 <= nx && nx < w && 0 <= ny && ny < h && a[ny][nx] != '#') return true;
    else return false;
}

// input 
long long n, k;

long long f(long long x){
    string tmp = to_string(x);
    sort(tmp.begin(), tmp.end());
    long long g_2 = stoi(tmp);
    sort(tmp.begin(), tmp.end(), greater<int>());
    long long g_1 = stoi(tmp);

    // cout << "g1 " << g_1 << " g2: " << g_2 << endl; 

    return g_1 - g_2;
}

int solve() {
    if (k == 0) {
        cout << n << endl;
        return 0;
    }

    long long ans = f(n);
    for (int i=0; i<k-1; ++i) {
        long long tmp = ans;
        ans = f(ans);
        if (tmp == ans) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

int main() {
    cin >> n >> k;

    solve();

    return 0;
}
