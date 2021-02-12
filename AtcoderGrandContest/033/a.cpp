#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

// input 
int h, w;
string a[1010];

// param
queue<P> que; 
queue<P> next_que;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

inline bool canMove(int ny, int nx) {
    if (0 <= nx && nx < w && 0 <= ny && ny < h && a[ny][nx] != '#') return true;
    else return false;
}


int bfs() {
    rep(i, h) rep(j, w) {
        if (a[i][j] == '#') que.push(P(i, j));
    }

    int cnt = 0;
    while (true) {
        // cout << que.size() << endl;

        if (que.size() == 0 && next_que.size() == 0) break;

        // next roop 
        if (que.size() == 0) {
            // rep (i, h) cout << a[i] << endl;
            que = move(next_que);
            ++cnt;
        } 

        P p = que.front();
        que.pop();

        rep(i, 4) {
            int nx = p.second + dx[i];
            int ny = p.first + dy[i];

            if (canMove(ny, nx)) {
                next_que.push(P(ny, nx));
                a[ny][nx] = '#';
            }
        }
    }

    return cnt;
}

int solve() {
    int ans = bfs();
    cout << ans << endl;

    return 0;
}

int main() {
    cin >> h >> w;
    rep(i, h) cin >> a[i];

    solve();

    return 0;
}
