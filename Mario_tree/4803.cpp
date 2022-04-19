/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, m;
vector<vector<int>> graph;
int edge, vertex = 1, visited[501];

void find_tree(int root) {
    visited[root] = 1;
    for (auto &child : graph[root]) {
        edge++;
        if (!visited[child]) {
            vertex++;
            find_tree(child);
        }
    }
}

int main() {
    fast_io;
    int test_cnt = 1;
    while(true) {
        cin >> n >> m;
        graph = vector<vector<int>>(n+1);
        memset(visited, 0, sizeof(visited));

        int tree_cnt = 0;
        if (n == 0 && m == 0) break;
        for (int i = 0; i < m; i++) {
            int node1, node2;
            cin >> node1 >> node2;
            graph[node1].push_back(node2);
            graph[node2].push_back(node1);
        }

        for (int r = 1; r <= n; r++) {
            vertex = 1; edge = 0;
            if (!visited[r]) {
                find_tree(r);
                if (vertex - (edge / 2) == 1) tree_cnt++;
            }
        }
        if (tree_cnt > 1)
            cout << "Case " << test_cnt <<": A forest of " << tree_cnt << " trees." <<'\n';
        else if (tree_cnt == 1)
            cout << "Case " << test_cnt <<": There is one tree." <<'\n';
        else
            cout << "Case " << test_cnt <<": No trees." << '\n';
        test_cnt++;
    }
    return 0;
}*/
