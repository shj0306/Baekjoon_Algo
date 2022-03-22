//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//const int MOD = 1e9+7;
//map<long long, long long> dp;
//
//long long fib(int n) {
//    if (n <= 0) return 0;
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//    if (dp.count(n) > 0) return dp[n];
//    int k;
//    if (n & 1) k = (n+1) / 2;
//    else k = n / 2;
//
//    if (n & 1) dp[n] = (fib(k) * fib(k) + fib(k-1) * fib(k-1)) % MOD;
//    else dp[n] = ((2 * fib(k-1) + fib(k)) * fib(k)) % MOD;
//    return dp[n];
//}
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    cout << fib(N) << ' ' << N - 2;
//}