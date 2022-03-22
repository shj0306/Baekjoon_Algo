//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//long long dp[100][21];
//int n, a[100];
//
//long long solve(int idx, int sum) {
//    if (idx == n-1) return sum == a[idx];
//    long long &ret = dp[idx][sum];
//    if (ret != 0) return ret;
//    if (sum + a[idx] <= 20) ret += solve(idx+1, sum + a[idx]);
//    if (sum - a[idx] >= 0) ret += solve(idx+1, sum - a[idx]);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> a[i];
//    memset(dp,0,sizeof(dp));
//    cout << solve(1, a[0]);
//}
//
