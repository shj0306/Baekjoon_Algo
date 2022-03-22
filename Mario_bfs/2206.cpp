/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char arr[MAX][MAX];
int dist[MAX][MAX][2]; //row, col, 벽을 부쉈는 지 여부

struct WALL{
    int row;
    int col;
    int flag;
};
int n, m;

int bfs() {
    queue<WALL> q;
    q.push({1,1,0});
    dist[1][1][0] = 1;
    while(!q.empty()) {
        int row = q.front().row;
        int col = q.front().col;
        int f = q.front().flag;
        q.pop();
        if (row == n && col == m) return dist[row][col][f];
        for (int i = 0; i < 4; i++) {
            int nr = row + dy[i];
            int nc = col + dx[i];
            if (nr >= 1 && nr <= n && nc >= 1 && nc <= m && !dist[nr][nc][f]) {
                if (arr[nr][nc] == '0') {
                    dist[nr][nc][f] = dist[row][col][f] + 1;
                    q.push({nr,nc,f});
                }
                else if (arr[nr][nc] == '1' && !f) {
                    dist[nr][nc][1] = dist[row][col][f] + 1;
                    q.push({nr,nc,1});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = bfs();
    cout << ans << '\n';
}
*/
