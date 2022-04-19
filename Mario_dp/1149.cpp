//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//int N, dp[1001][3], arr[1001][3];
////dp[idx][prev] : 이전 집을 칠한 색이 prev일 때 idx번째 집까지의 최대값
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < 3; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < 3; j++)
//            dp[i][j] = INF;
//    }
//
//    for (int i = 0; i < 3; i++) dp[1][i] = arr[1][i];
//
//    for (int i = 2; i <= N; i++) {
//        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
//        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
//        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];
//    }
//
//    cout << min(dp[N][2], min(dp[N][0], dp[N][1]));
//}