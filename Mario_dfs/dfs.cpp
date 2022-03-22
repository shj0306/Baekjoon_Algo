//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//using namespace std;
//
//class Graph {
//public:
//    int n;
//    vector<vector<int>> adj;
//    vector<bool> visited;
//
//    Graph(): n(0) {}
//    Graph(int n) : n(n) {
//        adj.resize(n);
//        visited.resize(n);
//    }
//
//    void addEdge(int u, int v) {
//        adj[u].push_back(v);
//        adj[v].push_back(u);
//    }
//
//    void sortList() {
//        for (int i = 0; i < n; i++) {
//            sort(adj[i].begin(), adj[i].end());
//        }
//    }
//
//    void dfs() {
//        fill(begin(visited), end(visited), false);
//        dfs(0);
//    }
//
//private:
//    void dfs(int curr) {
//        visited[curr] = true;
//        cout << "node " << curr << "visited" << '\n';
//        for (int next : adj[curr]) {
//            if (!visited[next]) dfs(next);
//        }
//    }
//};
//
//int main() {
//    Graph G(9);
//    G.addEdge(0, 1);
//    G.addEdge(0, 2);
//    G.addEdge(1, 3);
//    G.addEdge(1, 5);
//    G.addEdge(3, 4);
//    G.addEdge(4, 5);
//    G.addEdge(2, 6);
//    G.addEdge(2, 8);
//    G.addEdge(6, 7);
//    G.addEdge(6, 8);
//    G.sortList();
//    G.dfs();
//}
