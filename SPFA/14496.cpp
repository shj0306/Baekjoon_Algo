//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 1001;
//vector<int> adj[MAX];
//int a, b, n, m;
//bool visited[MAX];
//
//int bfs() {
//    queue<pair<int,int>> q;
//    q.push({a,0});
//    while(!q.empty()) {
//        auto [cur, cnt] = q.front();
//        q.pop();
//        if (cur == b) return cnt;
//        for (auto nxt : adj[cur]) {
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                q.push({nxt, cnt + 1});
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> a >> b >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int u, v; cin >> u >> v;
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//    cout << bfs();
//}