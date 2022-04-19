//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1000;
//int N, M, h1, h2, cnt;
//int dist[101];
//vector<vector<int>> family;
//
//void init() {
//    fill(dist, dist + 101, INF);
//}
//
//int bfs() {
//    queue<int> q;
//    q.push(h1);
//    init();
//    dist[h1] = 0;
//
//    while(!q.empty()) {
//        int cur = q.front();
//        q.pop();
//
//        if (cur == h2) return dist[h2];
//        for (int nxt : family[cur]) {
//            if (dist[nxt] > dist[cur] + 1) {
//                dist[nxt] = dist[cur]+1;
//                q.push(nxt);
//            }
//        }
//    }
//    return -1;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> h1 >> h2 >> M;
//    family.resize(N+1);
//
//    for (int i = 0; i < M; i++) {
//        int u, v; cin >> u >> v;
//        family[u].push_back(v);
//        family[v].push_back(u);
//    }
//
//    cout << bfs() << '\n';
//}