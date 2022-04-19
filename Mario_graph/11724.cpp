//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//int graph[1001][1001];
//bool visited[1001];
//
//void dfs(int cur) {
//    visited[cur] = true;
//    for (int nxt = 1; nxt <= N; nxt++) {
//        if (cur == nxt) continue;
//        if (visited[nxt]) continue;
//        if (graph[cur][nxt]) {
//            dfs(nxt);
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 0; i < M; i++) {
//        int u, v; cin >> u >> v;
//        graph[u][v] = 1;
//        graph[v][u] = 1;
//    }
//
//    int connected_elem = 0;
//    for (int i = 1; i <= N; i++) {
//        if (!visited[i]) {
//            dfs(i);
//            connected_elem++;
//        }
//    }
//
//    cout << connected_elem;
//}