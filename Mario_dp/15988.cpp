//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T,N;
//const int MOD = 1e9+9;
//const int MAX = 1e6;
//ll dp[MAX+1];
//
//int main() {
//    fast_io;
//    cin >> T;
//
//    dp[1] = 1; dp[2] = 2; dp[3] = 4;
//    for (int num = 4; num <= MAX; num++) {
//        dp[num] = ((dp[num-1] + dp[num-2]) % MOD + dp[num-3]) % MOD;
//    }
//
//    while(T--) {
//        cin >> N;
//
//        cout << dp[N] << '\n';
//    }
//}