//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//const int INF = -1e9;
//int arr[101];
//int dp[101][51];
//
//int calc(int n, int m) {
//    if (m == 0) return 0;
//    if (n <= 0) return INF;
//    int &ret = dp[n][m];
//    if (ret != -1) return dp[n][m];
//
//    int sum = 0;
//    // n번째 인덱스가 구간에 포함되지 않는 경우, 재귀이기 때문에 그 이전의 모든 경우의 수가 계산된다.
//    ret = calc(n-1, m);
//    for (int i = n; i > 0; i--) {
//        // 누적합을 이용해서 1개의 구간을 구한다.
//        sum += arr[i];
//        // 인접하지 않는 범위에서 m-1개의 구간의 합의 최댓값을 구한다.
//        ret = max(ret,calc(i-2, m-1) + sum);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    int n,m; cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//        for (int j = 1; j <= n / 2; j++) dp[i][j] = -1;
//    }
//
//    cout << calc(n,m);
//}