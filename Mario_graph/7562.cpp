//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e5;
//int T, N, dist[300][300];
//int sr, sc, er, ec;
//int dx[] = {2,1,2,1,-2,-1,-2,-1};
//int dy[] = {1,2,-1,-2, 1,2,-1,-2};
//
//void init() {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            dist[i][j] = INF;
//        }
//    }
//}
//
//int bfs() {
//    queue<pii> q;
//    q.push({sr,sc});
//    init();
//    dist[sr][sc] = 0;
//
//    while(!q.empty()) {
//        auto [r, c] = q.front();
//        q.pop();
//
//        if (r == er && c == ec) return dist[er][ec];
//
//        for (int i = 0; i < 8; i++) {
//            int nr = r + dy[i];
//            int nc = c + dx[i];
//
//            if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
//            if (dist[nr][nc] > dist[r][c] + 1) {
//                dist[nr][nc] = dist[r][c] + 1;
//                q.push({nr,nc});
//            }
//
//        }
//    }
//
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N;
//        cin >> sr >> sc >> er >> ec;
//
//        cout << bfs() << '\n';
//    }
//}