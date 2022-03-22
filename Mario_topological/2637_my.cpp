//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int indegree[101];
//int res[101][101];
//
//int main() {
//    fast_io;
//    int N, M;
//    cin >> N >> M;
//    vector<vector<pair<int, int>>> adj(N + 1);
//    for (int i = 0; i < M; i++) {
//        int u1, v1, cnt;
//        cin >> u1 >> v1 >> cnt;
//        indegree[u1]++;
//        adj[v1].emplace_back(u1, cnt);
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) {
//            q.push(i);
//            res[i][i] = 1;
//        }
//    }
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        for (auto[nxt, cnt]: adj[cur]) {
//            for (int i = 1; i <= N; i++) {
//                res[nxt][i] += res[cur][i] * cnt;
//            }
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//    for (int i = 1; i <= N; i++) {
//        if (res[N][i]) cout << i << ' ' << res[N][i] << '\n';
//    }
//}