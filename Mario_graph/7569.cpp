//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e7;
//
//struct Info {
//    int h, r, c;
//};
//
//int R, C, H;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//int dz[] = {-1,1};
//int box[101][101][101];
//int dist[101][101][101];
//vector<Info> ripe;
//
//void init() {
//    for (int i = 1; i <= H; i++) {
//        for (int j = 1; j <= R; j++) {
//            for (int k = 1; k <= C; k++) {
//                dist[i][j][k] = INF;
//            }
//        }
//    }
//}
//
//bool is_in(int h, int r, int c) {
//    return h >= 1 && h <= H && r >= 1 && r <= R && c >= 1 && c <= C;
//}
//
//int bfs() {
//    queue<Info> q;
//    init();
//
//    for (auto [h,r,c] : ripe) {
//        q.push({h,r,c});
//        dist[h][r][c] = 0;
//    }
//
//    while(!q.empty()) {
//        int sz = (int)q.size();
//        for (int i = 0; i < sz; i++) {
//            auto [h, r, c] = q.front();
//            q.pop();
//
//            for (int d = 0; d < 4; d++) {
//                int nh = h;
//                int nr = r + dy[d];
//                int nc = c + dx[d];
//
//                if (!is_in(nh,nr,nc)) continue;
//                if (box[nh][nr][nc] == -1 || box[nh][nr][nc] == 1) continue;
//                if (dist[nh][nr][nc] > dist[h][r][c] + 1) {
//                    box[nh][nr][nc] = 1;
//                    dist[nh][nr][nc] = dist[h][r][c] + 1;
//                    q.push({nh,nr,nc});
//                }
//            }
//
//            for (int d = 0; d < 2; d++) {
//                int nh = h + dz[d];
//                int nr = r;
//                int nc = c;
//
//                if (!is_in(nh,nr,nc)) continue;
//                if (box[nh][nr][nc] == -1 || box[nh][nr][nc] == 1) continue;
//                if (dist[nh][nr][nc] > dist[h][r][c] + 1) {
//                    box[nh][nr][nc] = 1;
//                    dist[nh][nr][nc] = dist[h][r][c] + 1;
//                    q.push({nh,nr,nc});
//                }
//            }
//        }
//    }
//
//    int max_day = 0;
//
//    for (int i = 1; i <= H; i++) {
//        for (int j = 1; j <= R; j++) {
//            for (int k = 1; k <= C; k++) {
//                if (box[i][j][k] == 0) return -1;
//                if (dist[i][j][k] != INF)
//                    max_day = max(max_day, dist[i][j][k]);
//            }
//        }
//    }
//    return max_day;
//}
//
//int main() {
//    fast_io;
//    cin >> C >> R >> H;
//    bool no_ripe = false;
//
//    for (int i = 1; i <= H; i++) {
//        for (int j = 1; j <= R; j++) {
//            for (int k = 1; k <= C; k++) {
//                cin >> box[i][j][k];
//                if (box[i][j][k] == 1)
//                    ripe.push_back({i, j, k});
//                else if (box[i][j][k] == 0) no_ripe = true;
//            }
//        }
//    }
//
//    if (!no_ripe) {
//        cout << 0 << '\n';
//        return 0;
//    }
//    cout << bfs();
//}