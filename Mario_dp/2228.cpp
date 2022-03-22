//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int INF = 1e9;
//int n, m;
//int dp[100][51]; //dp[i][j] => i : 배열 인덱스, j : 구간 개수
//int sum[101];
///*
// * DP, Prefix_Sum
// * 참고: https://velog.io/@asdsa2134/%EB%B0%B1%EC%A4%80-2228-%EA%B5%AC%EA%B0%84-%EB%82%98%EB%88%84%EA%B8%B0
// * 테이블(dp[i][j])를 i개의 배열로 j개의 구간을 선택했을 때 최대 값이라고 설정함
// * 그럼 dp[i][j]가 되는 경우는 i번째를 포함하지 않으면서 j개의 구간을 선택하는 값과
// * i번째를 포함하면서 j-1번째 구간이 i-2를 넘지 않는 경우들 중 가장 큰 값을 선택한다.
// *
// * FOR i in (1, n):
// *  FOR j in (1, m):
// *      dp[i][j] = max(dp[i][j], dp[i-1][j])
// *      FOR k in (1, i):
// *           if k >= 2 dp[i][j] = max(dp[i][j], max(dp[k-2][j-1] + sum[i] - sum[k-1]) k: 1~i
// *           else if (k == 1 && j == 1) dp[i][j] = max(dp[i][j], sum)
// */
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        int x; cin >> x;
//        sum[i] = x + sum[i-1];
//    }
//    //0개의 원소로 구간을 만들 수 없기 때문에
//    for (int i = 1; i <= m; i++) dp[0][i] = -INF;
//
//    for (int i = 1; i <= n; i++) { //배열 위치
//        for (int j = 1; j <= m; j++) { //구간 개수
//            dp[i][j] = max(dp[i][j], dp[i-1][j]);
//            for (int k = 1; k <= i; k++) {//현재보다 같거나 작은 인덱스
//                if (k >= 2) dp[i][j] = max(dp[i][j], dp[k-2][j-1] + sum[i] - sum[k-1]);
//                else if (k == 1 && j == 1) {
//                    dp[i][j] = max(dp[i][j], sum[i]);
//                }
//            }
//        }
//    }
//    cout << dp[n][m];
//}