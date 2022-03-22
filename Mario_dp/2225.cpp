//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define MAX 201
//const int MOD = 1e9;
//int n,k;
//long long dp[MAX][MAX];
//
//long long solve(int num, int cnt) {
//    if (cnt == 0) return num == 0;
//    long long &ret = dp[num][cnt];
//    if (ret != 0) return ret;
//    for (int i = 0; i <= n; i++)
//        if (num >= i) ret += solve(num-i, cnt-1) % MOD;
//    return ret % MOD;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    memset(dp,0,sizeof(dp));
//    cout << solve(n,k);
//}