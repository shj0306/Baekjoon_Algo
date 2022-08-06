#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
//shorturl.at/bly02 참고

int T, R, C, ans, tmp, visited[1001][1001], curR, curC, maxR, maxC;
int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};
char maze[1001][1001];

bool is_in(int r, int c) {
    return r >= 1 && r <= R && c >= 1 && c <= C;
}

void DFS(int r, int c, int depth) {
    visited[r][c] = true;
    if (tmp < depth) {
        tmp = depth;
        maxR = r;
        maxC = c;
        ans = depth;
    }
    for (int d = 0; d < 4; d++) {
        int nr = r + dr[d];
        int nc = c + dc[d];
        if (is_in(nr, nc)) {
            if (!visited[nr][nc] && maze[nr][nc] == '.') {
                DFS(nr,nc,depth + 1);
            }
        }
    }
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        //input
        cin >> C >> R;
        memset(visited, false, sizeof(visited));
        ans = 0;
        for (int i = 1; i <= R; i++) {
            for (int j = 1; j <= C; j++) {
                cin >> maze[i][j];
                if (maze[i][j] == '.') {
                    curR = i;
                    curC = j;
                }
            }
        }

        //solve
        tmp = ans = 0;
        DFS(curR, curC, 0); //현재 정점에서 가장 먼 정점에 위치를 구한다.
        memset(visited, false, sizeof(visited));
        DFS(maxR, maxC, 0); //구한 정점에서 가장 먼 정점의 거리를 구한다.

        //output
        cout << "Maximum rope length is " << ans << ".\n";
    }
}