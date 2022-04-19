//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, M, indegree[32001];
//vector<vector<int>> graph;
//bool check[32001];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    graph.resize(N + 1);
//    for (int i = 0; i < M; i++) {
//        int a, b;
//        cin >> a >> b;
//        graph[a].push_back(b);
//        indegree[b]++;
//    }
//
//    queue<int> q;
//    for (int i = 1; i <= N; i++) {
//        if (indegree[i] == 0) q.push(i);
//    }
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        cout << cur << ' ';
//
//        for (int nxt: graph[cur]) {
//            if (--indegree[nxt] == 0)
//                q.push(nxt);
//        }
//    }
//}