//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int INF = 1e9;
//const int MAX = 1001;
//
//int N,M,res = INF;
//int arr[MAX][MAX], dp[MAX][MAX][3];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int k = 0; k < M; k++) {
//        dp[0][k][0] = arr[0][k];
//        dp[0][k][1] = arr[0][k];
//        dp[0][k][2] = arr[0][k];
//    }
//
//    //dp[Y][X][위쪽에서 오는방향] = (Y,X에 도달했을때 연료의 합)
//    //한 방향이 연속으로 올 수 없다.
//    for (int i = 1; i < N; i++) {
//        for (int k = 0; k < M; k++) {
//            if (k == 0) {
//                dp[i][k][0] = INF;
//                dp[i][k][1] = dp[i - 1][k][2] + arr[i][k];
//                dp[i][k][2] = min(dp[i - 1][k+1][0], dp[i - 1][k+1][1]) + arr[i][k];
//            }
//            else if (k == M - 1) {
//                dp[i][k][0] = min(dp[i - 1][k-1][1], dp[i - 1][k-1][2]) + arr[i][k];
//                dp[i][k][1] = dp[i - 1][k][0] + arr[i][k];
//                dp[i][k][2] = INF;
//            }
//            else {
//                dp[i][k][0] = min(dp[i - 1][k-1][1], dp[i - 1][k-1][2]) + arr[i][k];
//                dp[i][k][1] = min(dp[i - 1][k][0], dp[i - 1][k][2]) + arr[i][k];
//                dp[i][k][2] = min(dp[i - 1][k+1][0], dp[i - 1][k+1][1]) + arr[i][k];
//            }
//        }
//    }
//    for (int k = 0; k < M; k++)
//        for (int h = 0; h < 3; h++)
//            if (res > dp[N - 1][k][h])
//                res = dp[N - 1][k][h];
//
//    cout << res;
//}
////https://dlwnsdud205.tistory.com/27 참고