/*
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> chess, dist, visited;
queue<pair<int,int>> q;
int dx[] = {-2,-1,1,2, -2,-1,1,2};
int dy[] = {-1, -2,-2,-1,1,2,2,1};
int src_r, src_c, des_r, des_c, l;

int bfs(int r, int c) {
    visited[r][c] = 1;
    q.push({r,c});
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nr = cur.first + dy[i];
            int nc = cur.second + dx[i];
            if (nr >= 0 && nr < l && nc >= 0 && nc < l && !dist[nr][nc] && !visited[nr][nc]) {
                visited[nr][nc] = 1;
                dist[nr][nc] = dist[cur.first][cur.second] + 1;
                q.push({nr,nc});
            }
            if (nr == des_r && nc == des_c) return dist[nr][nc];
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> l;
        chess = dist = visited = vector<vector<int>> (l, vector<int>(l, 0));

        cin >> src_r >> src_c >> des_r >> des_c;
        if (src_r == des_r && src_c == des_c) cout << 0 << '\n';
        else cout << bfs(src_r, src_c) << '\n';
        while(!q.empty()) q.pop();
    }
    return 0;
}*/
