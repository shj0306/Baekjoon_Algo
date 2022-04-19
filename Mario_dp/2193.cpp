//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//ll dp[91];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    dp[1] = 1; dp[2] = 1;
//
//    for (int i = 3; i <= N; i++) {
//        dp[i] = dp[i-1] + dp[i-2];
//    }
//    cout << dp[N];
//}