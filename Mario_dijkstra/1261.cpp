/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 101;
const int INF = 1e9;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n,m;
vector<vector<char>> maze;
int cost[MAX][MAX]; bool visited[MAX][MAX];
priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<>> pq;

int dijkstra(int r, int c) {
    cost[r][c] = 0;
    pq.push({0, {r,c}});
    while(!pq.empty()) {
        pair<int,int> cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur.first][cur.second]);
        if (visited[cur.first][cur.second]) break;
        visited[cur.first][cur.second] = true;

        for (int i = 0; i < 4; i++) {
            int nr = cur.first + dy[i];
            int nc = cur.second + dx[i];

            if (nr < 1 || nc < 1 || nr > n || nc > m) continue;
            if (visited[nr][nc]) continue;
            if (cost[nr][nc] > cost[cur.first][cur.second] + (maze[nr][nc]-'0')) {
                cost[nr][nc] = cost[cur.first][cur.second] + (maze[nr][nc]-'0');
                pq.push({cost[nr][nc], {nr,nc}});
            }
        }
    }
    return cost[n][m];
}

int main() {
    fast_io;
    cin >> m >> n;
    maze = vector<vector<char>>(n+1, vector<char>(m+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> maze[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) fill(cost[i]+1, cost[i]+1+m, INF);
    cout << dijkstra(1,1) << '\n';
    return 0;
}
// 1,1 ~ n,m까지 이동하는 동안 최소로 1을 밟고 가자
*/
