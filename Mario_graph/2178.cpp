//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//struct Info {
//    int r, c, dist;
//};
//int N, M;
//int arr[101][101];
//int dc[] = {1,-1,0,0};
//int dr[] = {0,0,1,-1};
//bool visited[101][101];
//
//int bfs() {
//    queue<Info> q;
//    q.push({1,1,1});
//    visited[1][1] = true;
//    while(!q.empty()) {
//        auto [r,c,dist] = q.front();
//        q.pop();
//        if (r == N && c == M) return dist;
//
//        for (int i = 0; i < 4; i++) {
//            int nr = r + dr[i];
//            int nc = c + dc[i];
//
//            if (nr < 1 || nc < 1 || nr > N || nc > M) continue;
//            if (!visited[nr][nc] && arr[nr][nc] == 1) {
//                visited[nr][nc] = true;
//                q.push({nr,nc,dist+1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            char num; cin >> num;
//            arr[i][j] = num - '0';
//        }
//    }
//    cout << bfs();
//}