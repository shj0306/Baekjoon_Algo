/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

vector<vector<int>> passage;
bool visited[101][101];
//각 컴포넌트 중 가장 큰 크기 출력
int n, m, k;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int dfs(int r, int c) {
    int node = 1;
    visited[r][c] = true;
    for (int i = 0; i < 4; i++) {
        int nr = r + dy[i];
        int nc = c + dx[i];
        if (nr < 1 || nr > n || nc < 1 || nc > m || visited[nr][nc]) continue;
        if (passage[nr][nc]) node += dfs(nr,nc);
    }
    return node;
}

int main() {
    cin >> n >> m >> k;
    passage = vector<vector<int>> (n+1, vector<int>(m+1,0));
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= k; i++) {
        int y, x;
        cin >> y >> x;
        passage[y][x] = 1;
    }
    int max_ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!visited[i][j] && passage[i][j]) {
                max_ans = max(max_ans, dfs(i, j));
            }
        }
    }
    cout << max_ans << '\n';
}
*/
