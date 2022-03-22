//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int indegree[101];
//int res[101];
//
//int main() {
//    fast_io;
//    int N, M;
//    cin >> N >> M;
//    vector<vector<pair<int, int>>> adj(N + 1);
//    set<int> s;
//    for (int i = 0; i < M; i++) {
//        int u1, v1, cnt;
//        cin >> u1 >> v1 >> cnt;
//        indegree[v1]++;
//        adj[u1].emplace_back(v1, cnt);
//        s.insert(u1);
//    }
//
//    queue<int> q;
//    q.push(N);
//    res[N] = 1;
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        for (auto[nxt, cnt]: adj[cur]) {
//            res[nxt] += res[cur] * cnt;
//            if (--indegree[nxt] == 0) q.push(nxt);
//        }
//    }
//    for (int i = 1; i <= N; i++) {
//        if (s.find(i) == s.end()) {
//            cout << i << ' ' << res[i] << '\n';
//        }
//    }
//}