//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, m;
//int dp[1001], indegree[1001];
//vector<int> pre[1001];
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int u, v; cin >> u >> v;
//        indegree[v]++;
//        pre[u].push_back(v);
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= n; i++) {
//        if (indegree[i] == 0) q.push(i);
//    }
//
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        for (auto nxt : pre[cur]) {
//
//            if (--indegree[nxt] == 0) {
//                q.push(nxt);
//                dp[nxt] = max(dp[nxt], dp[cur] + 1);
//            }
//        }
//    }
//    for (int i = 1; i <= n; i++) cout << dp[i]+1 << ' ';
//}