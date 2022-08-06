//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MOD = 1e9+7;
//const int MAX = 1e6+1;
//int N; ll dp[MAX];
////https://dlog0518.tistory.com/41?category=929729
//
//ll solve(int val) {
//    if (val == 0 || val == 1) return val+1;
//    if (val == 2) return 7;
//    ll &ret = dp[val];
//    if (ret != 0) return ret;
//    ret = (3 * solve(val-2) + 2 * solve(val-1)) % MOD;
//    for (int i = 3; i <= val; i++)
//        ret += 2 * solve(val - i) % MOD;
//
//    return ret % MOD;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    cout << solve(N);
//}