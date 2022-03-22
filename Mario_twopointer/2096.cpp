//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 100001;
//int N, max_dp[3][3], min_dp[3][3], arr[3];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < 3; j++) cin >> arr[j];
//        for (int j = 0; j < 3; j++) {
//            if (j == 0) max_dp[1][j] = max(max_dp[0][j], max_dp[0][j+1]) + arr[j];
//            else if (j == 1) max_dp[1][j] = max(max(max_dp[0][j-1], max_dp[0][j]), max_dp[0][j+1]) + arr[j];
//            else max_dp[1][j] = max(max_dp[0][j], max_dp[0][j-1]) + arr[j];
//        }
//        for (int j = 0; j < 3; j++) {
//            max_dp[0][j] = max_dp[1][j];
//            max_dp[1][j] = 0;
//        }
//
//        for (int j = 0; j < 3; j++) {
//            if (j == 0) min_dp[1][j] = min(min_dp[0][j], min_dp[0][j+1]) + arr[j];
//            else if (j == 1) min_dp[1][j] = min(min(min_dp[0][j-1], min_dp[0][j]), min_dp[0][j+1]) + arr[j];
//            else min_dp[1][j] = min(min_dp[0][j], min_dp[0][j-1]) + arr[j];
//        }
//        for (int j = 0; j < 3; j++) {
//            min_dp[0][j] = min_dp[1][j];
//            min_dp[1][j] = 0;
//        }
//    }
//
//    int max_res, min_res;
//    max_res = max(max(max_dp[0][0], max_dp[0][1]), max_dp[0][2]);
//    min_res = min(min(min_dp[0][0], min_dp[0][1]), min_dp[0][2]);
//
//    cout << max_res << ' ' << min_res;
//}