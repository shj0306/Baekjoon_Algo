//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, price[1001];
//int dp[1001];
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        cin >> price[i];
//        dp[i] = price[i];
//    }
//    for (int i = 2; i <= N; i++) {
//        for (int k = 1; k < i; k++)
//            dp[i] = max(dp[i], dp[i-k] + dp[k]);
//    }
//    cout << dp[N];
//}