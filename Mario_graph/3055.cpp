//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 51 * 51;
//
//int R,C,sr,sc,dr,dc;
//char arr[51][51];
//int dist[51][51];
//vector<pii> water;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//
//void init() {
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            dist[i][j] = INF;
//        }
//    }
//}
//
//int bfs() {
//    queue<pii> Hed_q;
//    queue<pii> wat_q;
//    init();
//    Hed_q.push({sr,sc});
//    dist[sr][sc] = 0;
//    for (auto [wr, wc] : water)
//        wat_q.push({wr,wc});
//
//    while(!Hed_q.empty()) {
//
//        int w_sz = (int)wat_q.size();
//        for (int i = 0; i < w_sz; i++) {
//            auto[wr, wc] = wat_q.front();
//            wat_q.pop();
//            for (int d = 0; d < 4; d++) {
//                int nr = wr + dy[d];
//                int nc = wc + dx[d];
//                if (nr < 1 || nc < 1 || nr > R || nc > C) continue;
//                if (arr[nr][nc] == '.') {
//                    arr[nr][nc] = '*';
//                    wat_q.push({nr, nc});
//                }
//            }
//        }
//        int h_sz = (int)Hed_q.size();
//        for (int i = 0; i < h_sz; i++) {
//            auto[hr, hc] = Hed_q.front();
//            Hed_q.pop();
//            if (hr == dr && hc == dc) return dist[dr][dc];
//            for (int d = 0; d < 4; d++) {
//                int nr = hr + dy[d];
//                int nc = hc + dx[d];
//                if (nr < 1 || nc < 1 || nr > R || nc > C) continue;
//                if (arr[nr][nc] == '.' || arr[nr][nc] == 'D') {
//                    if (dist[nr][nc] > dist[hr][hc] + 1) {
//                        dist[nr][nc] = dist[hr][hc] + 1;
//                        Hed_q.push({nr, nc});
//                    }
//                }
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> R >> C;
//
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            cin >> arr[i][j];
//            if (arr[i][j] == 'S') {
//                sr = i;
//                sc = j;
//            }
//            if (arr[i][j] == 'D') {
//                dr = i;
//                dc = j;
//            }
//            if (arr[i][j] == '*') water.emplace_back(i,j);
//        }
//    }
//    int ans = bfs();
//    if (ans == -1) cout << "KAKTUS";
//    else cout << ans;
//}