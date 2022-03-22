//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int MAX = 501;
//
//struct Info{
//    int r,c,dist,h,uh;
//};
//
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,-1,1};
//int N, H, D;
//int visited[MAX][MAX];
//char maze[MAX][MAX];
//queue<Info> q;
////https://jisunshine.tistory.com/183 참고
////해당 위치 방문 여부 : 내가 이동하려고 하는 곳의 값보다 현재 체력 + 우산 내구도가 더 크면 이동 가능
//
//bool is_In(int row, int col) {
//    return row >= 1 && row <= N && col >= 1 && col <= N;
//}
//
//int bfs(){
//    while(!q.empty()) {
//        auto [r, c, dist, h, u_h] = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nr = r + dy[i];
//            int nc = c + dx[i];
//            int nh = h;
//            int nuh = u_h;
//            if (is_In(nr,nc)) {
//                if (maze[nr][nc] == 'E') return dist+1;
//                if (maze[nr][nc] == 'U') nuh = D;
//                if (nuh) nuh--;
//                else nh--;
//                if (nh == 0) continue;
//                if (visited[nr][nc] < nh + nuh) {
//                    visited[nr][nc] = nh + nuh;
//                    q.push({nr,nc,dist+1, nh, nuh});
//                }
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> H >> D;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> maze[i][j];
//            if (maze[i][j] == 'S') {
//                q.push({i, j, 0, H, 0});
//            }
//        }
//    }
//    cout << bfs();
//}