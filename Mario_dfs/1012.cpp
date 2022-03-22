//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//using namespace std;
//
//int t, m, n, k;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//bool visited[55][55];
//vector<vector<int>> field;
//
//void dfs(int r, int c) {
//    visited[r][c] = true;
//    for (int i = 0; i < 4; i++) {
//        int nr = r + dy[i];
//        int nc = c + dx[i];
//        if (nr < 0 || nr >= n || nc < 0 || nc >= m || visited[nr][nc]) continue;
//        if (field[nr][nc]) dfs(nr,nc);
//    }
//}
//
//int solve() {
//    int node = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (!visited[i][j] && field[i][j]) { //아직 방문하지 않은 배추인 경우
//                dfs(i,j);
//                node++;
//            }
//        }
//    }
//    return node;
//}
//
//int main() {
//    cin >> t;
//    while(t--) {
//        cin >> m >> n >> k; //col, row, 배추 개수
//        field = vector<vector<int>>(n, vector<int> (m, 0));
//        memset(visited, false, sizeof visited);
//        for (int i = 0; i < k; i++) {
//            int x, y;
//            cin >> x >> y;
//            field[y][x] = 1;
//        }
//        cout << solve() << '\n';
//    }
//    return 0;
//}
