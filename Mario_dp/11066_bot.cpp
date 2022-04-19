//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e7;
//int T, N, files[501], pSum[501], dp[501][501]; //dp[s][e] : s~e 구간 1개로 합치는 최솟값
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> N;
//        for (int i = 1; i <= N; i++) {
//            cin >> files[i];
//            pSum[i] = pSum[i-1] + files[i];
//        }
//
//        for (int d = 1; d < N; d++) {
//            for (int s = 1; s <= N - d; s++) {
//                int e = s + d;
//                dp[s][e] = INF;
//                for (int k = s; k < e; k++) {
//                    dp[s][e] = min(dp[s][e], dp[s][k] + dp[k+1][e] + pSum[e] - pSum[s-1]);
//                }
//            }
//        }
//        cout << dp[1][N] << '\n';
//    }
//}