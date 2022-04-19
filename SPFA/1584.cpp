//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//struct INFO{
//    int x;
//    int y;
//    int cost;
//};
//const int INF = 1e9;
//int N, M;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//int game_map[501][501]; //safe : 0, danger : 1, death : 2
//int dist[501][501];
//
//struct cmp {
//    bool operator() (INFO inf1, INFO inf2) {
//        return inf1.cost > inf2.cost;
//    }
//};
//
//bool isIn(int x, int y) {
//    return x >= 0 && y >= 0 && x <= 500 && y <= 500;
//}
//
//int bfs() {
//    priority_queue<INFO, vector<INFO>, cmp> pq;
//    pq.push({0,0,0});
//    dist[0][0] = 0;
//    while(!pq.empty()) {
//        auto [x, y, cost] = pq.top();
//        pq.pop();
//        if (x == 500 && y == 500) return cost;
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//            if (isIn(nx, ny) && game_map[ny][nx] != 2 && dist[ny][nx] > dist[y][x] + game_map[ny][nx]) {
//                dist[ny][nx] = dist[y][x] + game_map[ny][nx];
//                pq.push({nx,ny,dist[ny][nx]});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    for (int i = 0; i <= 500; i++) fill(dist[i], dist[i]+501, INF);
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        for (int k = min(x1,x2); k <= max(x1,x2); k++) {
//            for (int j = min(y1,y2); j <= max(y1,y2); j++) {
//                game_map[k][j] = 1;
//            }
//        }
//    }
//    cin >> M;
//    for (int i = 0; i < M; i++) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        for (int k = min(x1,x2); k <= max(x1,x2); k++) {
//            for (int j = min(y1,y2); j <= max(y1,y2); j++) {
//                game_map[k][j] = 2;
//            }
//        }
//    }
//    cout << bfs();
//}