/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 125;
const int INF = 1e9;
int n;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<vector<int>> maze;
bool visited[MAX][MAX];
int dist[MAX][MAX];
priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<>> pq;

int dijkstra(int r, int c, int cost) {

    pq.push({cost, {r,c}});
    dist[r][c] = cost;
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

            if (nr < 0 || nc < 0 || nr >= n || nc >= n) continue;
            if (visited[nr][nc]) continue;
            if (dist[nr][nc] > dist[cur.first][cur.second] + maze[nr][nc]) {
                dist[nr][nc] = dist[cur.first][cur.second] + maze[nr][nc];
                pq.push({dist[nr][nc], {nr,nc}});
            }
        }
    }
    return dist[n-1][n-1];
}

int main() {
    fast_io;
    int num = 0;
    while(true) {
        cin >> n;
        if (n == 0) break;
        maze = vector<vector<int>>(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> maze[i][j];
            }
        }

        memset(visited,false, sizeof(visited));
        for (int i = 0; i < n; i++) fill(dist[i], dist[i]+n, INF);
        cout << "Problem " << ++num << ": " << dijkstra(0,0,maze[0][0]) << '\n';
    }
}
*/
