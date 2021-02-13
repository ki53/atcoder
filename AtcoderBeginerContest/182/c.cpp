#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// functions 
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
string n;

int solve() {
    int mod_3 = 0;
    rep(i, n.length()) {
        mod_3 += ctoi(n[i]);
        mod_3 %= 3;
    }

    if (mod_3 == 0) {
        cout << 0 << endl;
        return 0;

    } else if (mod_3 == 1) {
        int key, mod_2 = 0;
        bool flg = false;
        rep(i, n.length()) {
            key = ctoi(n[i]) % 3;
            if (key == 1) {
                flg = true;
                break;
            }
            if (key == 2) {
                ++mod_2;
            }
        }
        if (flg) {
            if (n.length() > 1) {
                cout << 1 << endl;
                return 0;
            } else {
                cout << "-1" << endl;
                return 0;
            }

        } else {
            if (mod_2 >= 2 && n.length() > 2) {
                cout << 2 << endl;
                return 0;
            } else {
                cout << "-1" << endl;
                return 0;
            }
        }

    } else {
        int key, mod_2 = 0;
        bool flg = false;
        rep(i, n.length()) {
            key = ctoi(n[i]) % 3;
            if (key == 2) {
                flg = true;
                break;
            }
            if (key == 1) {
                ++mod_2;
            }
        }
        if (flg) {
            if (n.length() > 1) {
                cout << 1 << endl;
                return 0;
            } else {
                cout << "-1" << endl;
                return 0;
            }

        } else {
            if (mod_2 >= 2 && n.length() > 2) {
                cout << 2 << endl;
                return 0;
            } else {
                cout << "-1" << endl;
                return 0;
            }
        }

    }


    return 0;
}

int main() {
    cin >> n;

    solve();

    return 0;
}
