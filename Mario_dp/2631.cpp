//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, res;
//vector<int> v;
//int dp[201];
//
////LIS 알고리즘 응용
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    v = vector<int>(n);
//    for (int i = 0; i < n; i++) cin >> v[i];
//
//    dp[0] = 1;
//    for (int i = 1; i < n; i++) {
//        dp[i] = 1;
//        for (int j = 0; j < i; j++) {
//            if (v[i] > v[j]) dp[i] = max(dp[i], dp[j] + 1);
//        }
//        res = max(res, dp[i]);
//    }
//    cout << n - res << '\n';
//}