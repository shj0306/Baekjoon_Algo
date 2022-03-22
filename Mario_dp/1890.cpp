//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 100;
//int n, chess[MAX][MAX];
//long long dp[MAX][MAX];
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> chess[i][j];
//        }
//    }
//
//    dp[0][0] = 1;
//
//    for (int r = 0; r < n; r++) {
//        for (int c = 0; c < n; c++) {
//            if (chess[r][c] == 0) continue;
//            if (dp[r][c] != 0) {
//                int nr = r + chess[r][c];
//                int nc = c + chess[r][c];
//
//                if (nr < n) dp[nr][c] += dp[r][c];
//                if (nc < n) dp[r][nc] += dp[r][c];
//            }
//        }
//    }
//    cout << dp[n-1][n-1];
//}
////top-down, 재귀로 풀면 무조건 메모리 초과
////bot_up으로만 풀어야 한다.
