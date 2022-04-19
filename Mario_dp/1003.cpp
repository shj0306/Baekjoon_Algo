//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, N;
//pii dp[41];
//
//int main() {
//    fast_io;
//    cin >> T;
//    dp[0] = make_pair(1,0);
//    dp[1] = make_pair(0,1);
//    for (int i = 2; i <= 40; i++) {
//        dp[i] = make_pair(dp[i-1].first + dp[i-2].first,
//                          dp[i-1].second + dp[i-2].second);
//    }
//    for (int t = 0; t < T; t++) {
//        cin >> N;
//        cout << dp[N].first << ' ' << dp[N].second << '\n';
//    }
//}