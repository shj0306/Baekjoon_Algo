//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//const int MAX = 1001;
//
//int n,m;
//int arr[MAX][MAX], dp[MAX][MAX][4];
//
//int solve(int r, int c, int prev) {
//    if (r == n) return 0;
//    int &ret = dp[r][c][prev];
//    if (ret != -1) return ret;
//    ret = INF;
//    if (prev != 1 && c-1 >= 1) ret = min(ret, solve(r+1,c-1,1) + arr[r+1][c-1]);
//    if (prev != 2) ret = min(ret, solve(r+1,c,2) + arr[r+1][c]);
//    if (prev != 3 && c+1 <= m) ret = min(ret, solve(r+1, c+1, 3) + arr[r+1][c+1]);
//    return ret;
//}
//
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    memset(dp,-1,sizeof(dp));
//    int res = INF;
//    for (int i = 1; i <= m; i++) res = min(res, solve(1, i, 0) + arr[1][i]);
//    cout << res;
//}