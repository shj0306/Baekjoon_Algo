//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int INF = 1e9;
//int n;
//int dp[50001];
//
//int solve(int num) {
//    if (num == 0) return 0;
//    int &ret = dp[num];
//    if (ret != -1) return ret;
//    ret = INF;
//    for (int i = (int)sqrt(num); i >= 1; i--) {
//        ret = min(ret, solve(num - i*i) + 1);
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    memset(dp,-1,sizeof(dp));
//    cout << solve(n);
//}