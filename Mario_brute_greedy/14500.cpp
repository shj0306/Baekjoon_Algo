//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, M, res;
//int tetro[501][501];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//bool visited[501][501];
//
//bool is_In(int r, int c) {
//    return r >= 1 && r <= N && c >= 1 && c <= M;
//}
//
//int dfs(int r, int c, int cnt) {
//    if (cnt == 4) return tetro[r][c];
//
//    int sum = 0;
//    for (int i = 0; i < 4; i++) {
//        int nr = r + dy[i];
//        int nc = c + dx[i];
//
//        if (is_In(nr,nc) && !visited[nr][nc]) {
//            visited[nr][nc] = true;
//            sum = max(sum, dfs(nr,nc,cnt+1) + tetro[r][c]);
//            visited[nr][nc] = false;
//        }
//    }
//    return sum;
//}
//
//int mid_finger(int r, int c) {
//    int val = 0;
//    if (r > 1 && r < N && c < M) //ぬ
//        val = max(val, tetro[r][c-1] + tetro[r][c] + tetro[r][c+1] + tetro[r+1][c]);
//    if (r > 1 && r < N && c < M) //で
//        val = max(val, tetro[r][c-1] + tetro[r][c] + tetro[r][c+1] + tetro[r-1][c]);
//    if (r > 1 && r < N && c < M) //た
//        val = max(val, tetro[r][c] + tetro[r][c+1] + tetro[r-1][c] + tetro[r+1][c]);
//    if (r > 1 && r < N && c > 1) //っ
//        val = max(val, tetro[r][c] + tetro[r][c-1] + tetro[r-1][c] + tetro[r+1][c]);
//    return val;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            cin >> tetro[i][j];
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            visited[i][j] = true;
//            res = max(res, dfs(i,j,1));
//            res = max(res, mid_finger(i,j));
//            visited[i][j] = false;
//        }
//    }
//    cout << res;
//}
////https://jaimemin.tistory.com/623