//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//#define inf 2147483647
//using namespace std;
//long long int d[501];
//int n, m;
//vector<vector<pair<int,int>>> adj;
//int main() {
//    fast_io;
//    cin >> n >> m;
//    adj = vector<vector<pair<int,int>>>(n+1);
//    for (int i = 1; i <= m; i++) {
//        int u,v,w;
//        cin >> u >> v >> w;
//        adj[u].emplace_back(v,w);
//    }
//    fill(d, d + n + 1, inf);
//    d[1] = 0;
//    // n-1번 완화
//    for (int i = 0; i < n; i++) {
//        for (int j = 1; j <= n; j++) {
//            for (auto &p : adj[j]) {
//                int nxt = p.first; int dist = p.second;
//                if (d[j] != inf && d[nxt] > d[j] + dist) {
//                    d[nxt] = d[j] + dist;
//                    if (i == n-1) {
//                        cout << -1;
//                        return 0;
//                    }
//                }
//            }
//        }
//    }
//
//    // 출력
//    for (int i = 2; i <= n; i++)
//        (d[i] == inf) ? cout << -1 << '\n' : cout << d[i] << '\n';
//    return 0;
//}