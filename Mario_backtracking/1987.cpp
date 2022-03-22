/*
#include <bits/stdc++.h>
using namespace std;

int visited[21][21], memory[26];
char vec[21][21];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int r,c,res = 1;

void dfs(int sr, int sc, int dist) {

    for (int i = 0; i < 4; i++) {
        int nr = sr + dy[i];
        int nc = sc + dx[i];
        if (visited[nr][nc]) continue;
        if (nr >= 1 && nc >= 1 && nr <= r && nc <= c && memory[vec[nr][nc] - 'A'] == 0) {
            visited[nr][nc] = 1;
            memory[vec[nr][nc] - 'A'] = 1;
            dfs(nr, nc, dist + 1);
            visited[nr][nc] = 0;
            memory[vec[nr][nc] - 'A'] = 0;
        }
    }
    res = max(res, dist);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> r >> c;
    memset(visited, 0, sizeof(visited));
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> vec[i][j];
        }
    }
    visited[1][1] = 1;
    memory[vec[1][1] -'A'] = 1;
    dfs(1, 1, 1);
    cout << res << '\n';
    return 0;
}
*/
