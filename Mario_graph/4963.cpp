//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int W, H, island[51][51];
//bool visited[51][51];
//
//int dx[] = {1,-1,0,0, 1, 1, -1, -1};
//int dy[] = {0,0,1,-1, 1,-1,1,-1};
//
//
//void dfs(int y, int x) {
//    visited[y][x] = true;
//
//    for (int i = 0; i < 8; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (nx < 1 || nx > W || ny < 1 || ny > H) continue;
//        if (!visited[ny][nx] && island[ny][nx]) {
//            dfs(ny, nx);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    while(true) {
//        cin >> W >> H;
//        if (W == 0 && H == 0) break;
//        memset(visited, false, sizeof(visited));
//
//        for (int i = 1; i <= H; i++)  {
//            for (int j = 1; j <= W; j++) {
//                cin >> island[i][j];
//            }
//        }
//
//        int island_cnt = 0;
//        for (int i = 1; i <= H; i++)  {
//            for (int j = 1; j <= W; j++) {
//                if (!visited[i][j] && island[i][j]) {
//                    dfs(i, j);
//                    island_cnt++;
//                }
//            }
//        }
//        cout << island_cnt << '\n';
//    }
//}