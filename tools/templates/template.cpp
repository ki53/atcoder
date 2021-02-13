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
int bfs() {
    int cnt = 0;
    while (que.size()) {
        P p = que.front();
        que.pop();

        rep(i, 4) {
            int nx = p.second + dx[i];
            int ny = p.first + dy[i];

            if (canMove(ny, nx)) {
                que.push(P(ny, nx));
                a[ny][nx] = '#';
            }
        }
    }

    return cnt;
}

// input 
long long n;

int solve() {

    return 0;
}

int main() {

    solve();

    return 0;
}
