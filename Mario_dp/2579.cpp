//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, stair[301], dp[301];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) cin >> stair[i];
//
//    dp[0] = 0;
//    dp[1] = stair[1];
//    dp[2] = dp[1] + stair[2];
//
//    for (int i = 3; i <= N; i++) {
//        dp[i] = max(dp[i-3] + stair[i-1], dp[i-2]) + stair[i];
//    }
//    cout << dp[N];
//}