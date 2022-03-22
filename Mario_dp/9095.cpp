//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int n,dp[11];
//
//int solve(int num) {
//    if (num == 0) return 1;
//    int &ret = dp[num];
//    if (ret != 0) return ret;
//
//    ret += solve(num-1);
//    if (num >= 2) ret += solve(num-2);
//    if (num >= 3) ret += solve(num-3);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    int t; cin >> t;
//    while(t--) {
//        cin >> n;
//        memset(dp,0,sizeof(dp));
//        cout << solve(n) << '\n';
//    }
//}