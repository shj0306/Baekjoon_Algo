//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int INF = 1e9;
//int matrix[501][2];
//int dp[501][501];
//
//int main() {
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int r,c; cin >> r >> c;
//        matrix[i][0] = r;
//        matrix[i][1] = c;
//    }
//
//    for (int i = 1; i < n; i++) {
//        for (int j = 1; j + i <= n; j++) { //j : start, j + i : end
//            dp[j][j+i] = INF;
//            for (int k = j; k <= i + j; k++) {//k : mid idx
//                dp[j][i+j] = min(dp[j][i+j], dp[j][k] + dp[k+1][i+j]
//                + matrix[j][0] * matrix[i][1] * matrix[i+j][1]);
//            }
//        }
//    }
//    cout << dp[1][n];
//}