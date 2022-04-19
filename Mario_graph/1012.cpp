//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N, M, K, ground[50][50];
//bool visited[50][50];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//
//void dfs(int r, int c) {
//    visited[r][c] = true;
//    for (int d = 0; d < 4; d++) {
//        int nr = r + dy[d];
//        int nc = c + dx[d];
//        if (nr < 0 || nr >= N || nc < 0 || nc >= M) continue;
//        if (!visited[nr][nc] && ground[nr][nc]) {
//            dfs(nr,nc);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> M >> N >> K;
//        memset(ground, 0, sizeof(ground));
//        memset(visited, false, sizeof(visited));
//        for (int i = 0; i < K; i++) {
//            int r, c; cin >> c >> r;
//            ground[r][c] = 1;
//        }
//        int cnt = 0;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                if (!visited[i][j] && ground[i][j]) {
//                    dfs(i, j);
//                    cnt++;
//                }
//            }
//        }
//        cout << cnt << '\n';
//    }
//}