//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 1e5;
//
//int n, arr[MAX], dp[MAX], res;
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//    dp[0] = arr[0];
//    res = arr[0];
//    for (int i = 1; i < n; i++) {
//        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
//        res = max(res, dp[i]);
//    }
//    cout << res;
//}