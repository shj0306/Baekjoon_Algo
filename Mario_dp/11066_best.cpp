//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e7;
//int T, N, files[501], pSum[501], num[501][501], dp[501][501]; //dp[s][e] : s~e 구간 1개로 합치는 최솟값
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
//        //num[s][e] : dp[s][e]를 만족하게 하는 k값
//        for (int i = 1; i <= N; i++) {
//            num[i-1][i] = i;
//        }
//        for (int d = 2; d <= N; d++) {
//            for (int s = 0; s <= N - d; s++) {
//                int e = s + d;
//                dp[s][e] = INF;
//                for (int k = num[s][e-1]; k <= num[s+1][e]; k++) {
//                    int v = dp[s][k] + dp[k][e] + pSum[e] - pSum[s];
//                    if (dp[s][e] > v) {
//                        dp[s][e] = v;
//                        num[s][e] = k;
//                    }
//                }
//            }
//        }
//
//        cout << dp[0][N] << '\n';
//    }
//}