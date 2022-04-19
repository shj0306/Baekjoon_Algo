//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, dp1[2][3], dp2[2][3];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < 3; j++) {
//            cin >> dp1[1][j];
//            dp2[1][j] = dp1[1][j];
//        }
//
//        dp1[1][0] += max(dp1[0][0], dp1[0][1]);
//        dp1[1][1] += max(dp1[0][0], max(dp1[0][1], dp1[0][2]));
//        dp1[1][2] += max(dp1[0][1], dp1[0][2]);
//
//        dp2[1][0] += min(dp2[0][0], dp2[0][1]);
//        dp2[1][1] += min(dp2[0][0], min(dp2[0][1], dp2[0][2]));
//        dp2[1][2] += min(dp2[0][1], dp2[0][2]);
//
//        for (int k = 0; k < 3; k++) {
//            dp1[0][k] = dp1[1][k];
//            dp1[1][k] = 0;
//            dp2[0][k] = dp2[1][k];
//            dp2[1][k] = 0;
//        }
//    }
//
//    int max_score = 0, min_score = 1e6;
//    for (int i = 0; i < 3; i++) {
//        max_score = max(max_score, dp1[0][i]);
//        min_score = min(min_score, dp2[0][i]);
//    }
//
//    cout << max_score << ' ' << min_score;
//}