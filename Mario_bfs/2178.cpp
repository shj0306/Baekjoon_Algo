/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
queue<pair<int,int>> route;
int n, m;
vector<vector<char>> maze;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dist[101][101];

int bfs(int r, int c) {
    route.push({r,c});
    while(!route.empty()) {
        pair<int,int> cur = route.front();
        route.pop();
        for (int i = 0; i < 4; i++) {
            int nr = cur.first + dy[i];
            int nc = cur.second + dx[i];
            if (nr >= 1 && nr <= n && nc >= 1 && nc <= m && !dist[nr][nc] && maze[nr][nc] == '1') {
                dist[nr][nc] = dist[cur.first][cur.second] + 1;
                route.push({nr,nc});
            }
            if (nr == n && nc == m) return dist[nr][nc] + 1;
        }
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    maze = vector<vector<char>>(n+1, vector<char>(m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> maze[i][j];
        }
    }
    memset(dist, 0, sizeof(dist));

    cout << bfs(1,1) << '\n';
    return 0;
}*/
