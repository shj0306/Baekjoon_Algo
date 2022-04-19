//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e8;
//int N, H, D, sx, sy, dist[501][501];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//char arr[501][501];
////https://westmino.tistory.com/97
////체력이 기존에 도착했을 때 체력보다 높아야만 이동 => dist[ny][nx] < nh
//struct Info {
//    int x,y; //내 위치
//    int health; //내 체력
//    int umb; //우산 체력
//    int dist; //이동 횟수
//};
//
//bool is_in(int x, int y) {
//    return x >= 1 && x <= N && y >= 1 && y <= N;
//}
//
//int bfs() {
//    queue<Info> q;
//    q.push({sx,sy,H,0,0});
//    dist[sy][sx] = H;
//
//    while(!q.empty()) {
//        auto [x, y, h, u, di] = q.front();
//        q.pop();
//
//        if (h == 0) continue;
//        if (arr[y][x] == 'E') return di;
//
//        for (int d = 0; d < 4; d++) {
//            int nx = x + dx[d];
//            int ny = y + dy[d];
//            int nu = u;
//            int nh = h;
//            if (!is_in(nx, ny)) continue;
//            if (arr[ny][nx] == '.') {
//                if (nu == 0) nh--;
//                else nu--;
//            }
//            if (arr[ny][nx] == 'U') nu = D-1;
//            if (dist[ny][nx] >= nh) continue;
//            dist[ny][nx] = nh;
//            q.push({nx,ny,nh,nu, di+1});
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> H >> D;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> arr[i][j];
//            if (arr[i][j] == 'S') {
//                sx = j;
//                sy = i;
//            }
//        }
//    }
//
//    cout << bfs();
//
//}