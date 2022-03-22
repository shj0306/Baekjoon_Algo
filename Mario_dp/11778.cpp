//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//const int MOD = 1e9+7;
//map<long long, long long> dp;
//
//long long fib(long long n) {
//    if (n <= 0) return 0;
//    if (n == 1 || n == 2) return 1;
//    if (dp.count(n) > 0) return dp[n];
//    long long k;
//    if (n & 1) k = (n+1) / 2;
//    else k = n / 2;
//
//    //공식 외우기
//    if (n & 1) dp[n] = (fib(k) * fib(k) + fib(k-1) * fib(k-1)) % MOD;
//    else dp[n] = ((2 * fib(k-1) + fib(k)) * fib(k)) % MOD;
//    return dp[n];
//}
//
//long long gcd(long long n, long long m) {
//    if (m == 0) return n;
//    return gcd(m, n % m);
//}
//
//int main() {
//    fast_io;
//    long long N, M, gcd_num;
//    cin >> N >> M;
//
//    if (N > M) gcd_num = gcd(N, M);
//    else gcd_num = gcd(M, N);
//
//    cout << fib(gcd_num);
//}