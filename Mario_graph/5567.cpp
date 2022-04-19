//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//vector<vector<int>> graph;
//bool checked[501];
//
//int bfs() {
//    queue<pii> q;
//    q.push({1,0});
//    checked[1] = true;
//    int cnt = 0;
//
//    while(!q.empty()) {
//        auto [cur, depth] = q.front();
//        q.pop();
//        if (depth == 3) continue;
//        cnt++;
//
//        for (int nxt : graph[cur]) {
//            if (!checked[nxt]) {
//                checked[nxt] = true;
//                q.push({nxt, depth+1});
//            }
//        }
//    }
//    return cnt - 1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    graph.resize(N+1);
//
//    for (int i = 0; i < M; i++) {
//        int u, v;
//        cin >> u >> v;
//        graph[u].push_back(v);
//        graph[v].push_back(u);
//    }
//
//    cout << bfs() << '\n';
//}