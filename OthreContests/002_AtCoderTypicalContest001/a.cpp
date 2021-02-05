#include <bits/stdc++.h>
using namespace std;

// input
int h, w;
string maze[510];
bool reached[510][510] = {false};
int sx, sy, gx, gy;

void dfs_recusive(int x, int y) {
    if (x < 0 || y < 0 || x >= w || y >= h) return;
    if (maze[y][x] == '#') return;
    if (reached[y][x]) return;

    reached[y][x] = true;

  	dfs_recusive(x + 1, y);
    dfs_recusive(x - 1, y);
    dfs_recusive(x, y + 1);
    dfs_recusive(x, y - 1);
    return;
}

int solve() {
    for (int y=0; y<h; ++y) {
        for (int x=0; x<w; ++x) {
            if (maze[y][x] == 's') {
                sx = x;
                sy = y;
            }
            if (maze[y][x] == 'g') {
                gx = x;
                gy = y;
            }
        }
    }

    dfs_recusive(sx, sy);

    if (reached[gy][gx]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

int main() {
    cin >> h >> w;
    for (int i=0; i<h; ++i) {
        cin >> maze[i];
    }

    solve();

    return 0;
}
