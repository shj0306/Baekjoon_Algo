//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, m;
//int dp[1001];
//priority_queue<pii, vector<pii>, greater<>> pq;
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int u, v; cin >> u >> v;
//        pq.push(make_pair(u,v));
//    }
//    while(!pq.empty()) {
//        auto [u,v] = pq.top();
//        pq.pop();
//        dp[v] = max(dp[v], dp[u]+1);
//    }
//    for (int i = 1; i <= n; i++) cout << dp[i]+1 << ' ';
//}