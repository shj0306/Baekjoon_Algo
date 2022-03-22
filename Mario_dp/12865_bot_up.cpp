//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n,k;
//vector<pii> v;
//int dp[101][100001];
//
//bool cmp(pii a, pii b) {
//    if (a.first == b.first) return a.second > b.second;
//    return a.first < b.first;
//}
//
//int knapsack() {
//    for (int i = v[1].first; i <= k; i++) {
//        for (int j = 1; j <= n; j++) {
//            //넣을 수 없다면
//            if (v[j].first > i) dp[j][i] = dp[j-1][i];
//            //넣을 수 있다면
//            else dp[j][i] = max(v[j].second + dp[j-1][i-v[j].first], dp[j-1][i]);
//        }
//    }
//    return dp[n][k];
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    v.resize(n+1);
//    for (int i = 1; i <= n; i++) cin >> v[i].first >> v[i].second;
//
//    sort(all(v), cmp);
//
//    int ans = knapsack();
//    cout << ans;
//}