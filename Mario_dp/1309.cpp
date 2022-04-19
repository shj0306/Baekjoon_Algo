//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e5+1;
//const int MOD = 9901;
//int N, dp[MAX][3];
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    dp[1][0] = dp[1][1] = dp[1][2] = 1;
//
//    for (int i = 2; i <= N; i++) {
//        dp[i][0] += ((dp[i-1][0] + dp[i-1][1]) % MOD + dp[i-1][2]) % MOD;
//        dp[i][1] += (dp[i-1][0] + dp[i-1][2]) % MOD;
//        dp[i][2] += (dp[i-1][0] + dp[i-1][1]) % MOD;
//    }
//
//    cout << ((dp[N][0] + dp[N][1]) % MOD + dp[N][2]) % MOD << '\n';
//}