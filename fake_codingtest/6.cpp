//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//int N, M, sx, sy;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//vector<pii> ghost;
//bool check[1001][1001], check2[1001][1001];
//char maze[1001][1001];
//
//bool is_in(int x, int y) {
//    return x >= 1 && x <= M && y >= 1 && y <= N;
//}
//
//bool bfs() {
//    queue<pii> nam, G;
//    nam.push({sx, sy});
//    check[sy][sx] = true;
//
//    for (auto [x, y] : ghost) G.push({x,y});
//
//    while(!nam.empty()) {
//        int sz = (int)nam.size();
//        for (int i = 0; i < sz; i++) {
//            auto [x, y] = nam.front();
//            nam.pop();
//
//            if (maze[y][x] == 'D') return true;
//
//            for (int d = 0; d < 4; d++) {
//                int nx = x + dx[d];
//                int ny = y + dy[d];
//
//                if (is_in(nx, ny) && !check[ny][nx] && maze[ny][nx] != '#' && maze[ny][nx] != 'G') {
//                    check[ny][nx] = true;
//                    nam.push({nx,ny});
//                }
//            }
//        }
//
//        sz = (int)G.size();
//
//        for (int i = 0; i < sz; i++) {
//            auto [gx, gy] = G.front();
//            G.pop();
//            if (maze[gy][gx] == 'G') maze[gy][gx] = '.';
//            if (maze[gy][gx] == 'D') return false;
//
//            for (int d = 0; d < 4; d++) {
//                int nx = gx + dx[d];
//                int ny = gy + dy[d];
//
//                if (is_in(nx, ny) && !check2[ny][nx]) {
//                    check2[ny][nx] = true;
//                    G.push({nx,ny});
//                    if (maze[ny][nx] == '.' || maze[ny][nx] == 'N') maze[ny][nx] = 'G';
//                }
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> maze[i][j];
//            if (maze[i][j] == 'N') {
//                sx = j;
//                sy = i;
//            }else if (maze[i][j] == 'G') {
//                ghost.emplace_back(j,i);
//            }
//        }
//    }
//
//    cout << (bfs() ? "Yes" : "No") << '\n';
//}