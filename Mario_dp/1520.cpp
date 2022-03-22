//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//
//int R, C;
//int dist[501][501];
//int dp[501][501];
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//
//bool is_in(int r, int c) {
//    return r >= 1 && r <= R && c >= 1 && c <= C;
//}
//
//int dfs(int r, int c) {
//    if (r == R && c == C) return 1;
//    int &ret = dp[r][c];
//    if (ret != -1) return ret;
//    ret = 0;
//    for (int i = 0; i < 4; i++) {
//        int nr = r + dy[i];
//        int nc = c + dx[i];
//        if (is_in(nr,nc) && dist[r][c] > dist[nr][nc]) ret += dfs(nr,nc);
//    }
//    return ret;
//}
////dp[i][j] : 1,1 ~ i,j로 가는 경우의 수
//int main() {
//    fast_io;
//    cin >> R >> C;
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            cin >> dist[i][j];
//        }
//    }
//    memset(dp,-1,sizeof(dp));
//    cout << dfs(1,1);
//}