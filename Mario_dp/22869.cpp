//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N, K, rock[5001];
//int dp[5001];
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    for (int i = 1; i <= N; i++) cin >> rock[i];
//    dp[1] = 1;
//
//    for (int i = 2; i <= N; i++) {
//        for (int j = 1; j < i; j++) {
//            if (dp[j] && (i-j) * (1 + abs(rock[i]-rock[j])) <= K) {
//                dp[i] = 1;
//                break;
//            }
//        }
//    }
//    cout << (dp[N] == 1 ? "YES" : "NO") << '\n';
//}