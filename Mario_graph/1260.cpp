//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, V;
//bool visited[1001];
//vector<vector<int>> graph;
//
//void input() {
//    cin >> N >> M >> V;
//    graph.resize(N+1);
//    for (int i = 1; i <= M; i++) {
//        int u, v; cin >> u >> v;
//        graph[u].push_back(v);
//        graph[v].push_back(u);
//    }
//    for (int i = 1; i <= N; i++)
//        sort(all(graph[i]));
//}
//
//void dfs(int cur) {
//    stack<int> stk;
//    stk.push(cur);
//    visited[cur] = true;
//    cout << cur << ' ';
//    while(!stk.empty()) {
//        int now = stk.top();
//        bool flag = false;
//        for (int nxt : graph[now]) {
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                flag = true;
//                stk.push(nxt);
//                cout << nxt << ' ';
//                break;
//            }
//        }
//        if (!flag) stk.pop();
//    }
//}
//
//void bfs(int cur) {
//    queue<int> q;
//    memset(visited, false, sizeof(visited));
//    q.push(cur);
//    visited[cur] = true;
//    while(!q.empty()) {
//        int now = q.front();
//        q.pop();
//        cout << now << ' ';
//        for (int nxt : graph[now]) {
//            if (!visited[nxt]) {
//                visited[nxt] = true;
//                q.push(nxt);
//            }
//        }
//    }
//}
//
//void solve() {
//    dfs(V);
//    cout << '\n';
//    bfs(V);
//}
//
//int main() {
//    fast_io;
//    input();
//    solve();
//}