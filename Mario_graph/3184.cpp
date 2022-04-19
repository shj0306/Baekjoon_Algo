//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int R, C, wolf, sheep;
//char bg[251][251];
//bool visited[251][251];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//
//void dfs(int y, int x) {
//    visited[y][x] = true;
//    if (bg[y][x] == 'v') wolf++;
//    if (bg[y][x] == 'o') sheep++;
//
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx < 1 || nx > C || ny < 1 || ny > R) continue;
//        if (!visited[ny][nx] && bg[ny][nx] != '#') {
//            dfs(ny, nx);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> R >> C;
//
//    int total_sheep = 0, total_wolf = 0;
//
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            cin >> bg[i][j];
//            if (bg[i][j] == 'o') total_sheep++;
//            if (bg[i][j] == 'v') total_wolf++;
//        }
//    }
//
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            if (!visited[i][j] && (bg[i][j] == 'v' || bg[i][j] == 'o')) {
//                wolf = sheep = 0;
//                dfs(i, j);
//                if (sheep > wolf) total_wolf -= wolf;
//                else total_sheep -= sheep;
//            }
//        }
//    }
//
//    cout << total_sheep << ' ' << total_wolf;
//}