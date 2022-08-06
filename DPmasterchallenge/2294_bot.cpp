//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e5;
//int N, K, coin[100], res;
//int dp[10001];
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    for (int i = 0; i < N; i++) cin >> coin[i];
//
//    dp[0] = 0;
//    for (int i = 1; i <= K; i++) dp[i] = INF;
//
//    for (auto money : coin) {
//        for (int i = money; i <= K; i++) {
//            dp[i] = min(dp[i], dp[i-money] + 1);
//        }
//    }
//
//    cout << (dp[K] == INF ? -1 : dp[K]) << '\n';
//}