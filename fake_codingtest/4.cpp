//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, arr[1001][1001];
//int dp[1001][1001][2];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for(int i = 1; i <= N; i++)
//        for(int j = 1; j <= N; j++)
//            cin >> arr[i][j];
//
//    for (int i = 0; i <= N; i++) {
//        for (int j = 0; j <= N; j++) {
//            for (int k = 0; k < 2; k++) {
//                dp[i][j][k] = INT_MIN;
//            }
//        }
//    }
//
//    dp[1][1][0] = arr[1][1];
//    dp[1][1][1] = arr[1][1] * 2;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (i == 1 && j == 1) continue;
//
//            //스프링쿨러를 추가적으로 설치하는 경우
//            dp[i][j][1] = max(dp[i-1][j][0], dp[i][j-1][0]) + arr[i][j] * 2;
//
//            //스프링쿨러를 추가적으로 설치하지 않는 경우
//            for (int k = 0; k < 2; k++) {
//                int cand = max(dp[i-1][j][k], dp[i][j-1][k]) + arr[i][j];
//                dp[i][j][k] = max(dp[i][j][k], cand);
//            }
//        }
//    }
//
//    cout << dp[N][N][1];
//}