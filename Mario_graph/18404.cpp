//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, M, sr, sc, dist[501][501];
//int dx[] = {2,1,2,1,-2,-1,-2,-1};
//int dy[] = {1,2,-1,-2, 1,2,-1,-2};
//vector<pii> chess;
//
//
//void init() {
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            dist[i][j] = INF;
//        }
//    }
//}
//
//void bfs() {
//    queue<pii> q;
//    init();
//    q.push({sr,sc});
//    dist[sr][sc] = 0;
//
//    while(!q.empty()) {
//
//        auto[r, c] = q.front();
//        q.pop();
//
//        for (int i = 0; i < 8; i++) {
//            int nr = r + dy[i];
//            int nc = c + dx[i];
//
//            if (nr < 1 || nr > N || nc < 1 || nc > N) continue;
//            if (dist[nr][nc] > dist[r][c] + 1) {
//                dist[nr][nc] = dist[r][c] + 1;
//                q.push({nr, nc});
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    cin >> sr >> sc;
//    for (int i = 0; i < M; i++) {
//        int r, c;
//        cin >> r >> c;
//        chess.emplace_back(r,c);
//    }
//
//    bfs();
//
//    for (auto [r, c] : chess) {
//        cout << dist[r][c] << ' ';
//    }
//}