#include <bits/stdc++.h>

// using
using namespace std;
using P = pair<int, int>;

// def
#define rep(i, n) for (int i = 0; i < (n); ++i)

// functions 
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return true; } return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return true; } return false;}
template<class T, class U> bool contain(const std::basic_string<T>& s, const U& v) {return s.find(v) != std::basic_string<T>::npos;}
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
int w = 10, h = 10;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
string a[MAX_H];
string a_copy[MAX_H]; 
queue<P> que;
inline bool canMove(int ny, int nx) {
    if (0 <= nx && nx < w && 0 <= ny && ny < h && a_copy[ny][nx] != 'x') return true;
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
                a_copy[ny][nx] = 'x';
            }
        }
    }

    return cnt;
}

// param


int solve() {

    bool ans = false;

    rep(i, 10) {

        // rep(j, 10) {
        //     cout << a_copy[j] << endl;
        // }
        // cout << endl;

        rep(j,10) {
            copy(a, a+10, a_copy);
            a_copy[i][j] = 'o';
            que.push(P(i, j));
            bfs();

            bool there_is_other_island = false;
            rep(k, 10) {
                string s = a_copy[k];
                there_is_other_island = contain(s, 'o');
                if (there_is_other_island) break;
            }

            if (there_is_other_island == false) {
                cout << "YES" << endl;
                return 0;

            }
        }
    }

    cout << "NO" << endl;

    return 0;
}

int main() {

    rep(i, 10) cin >> a[i];

    solve();

    return 0;
}
