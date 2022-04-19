/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
vector<vector<int>> tree;
vector<int> parent, visited;

void find_parent(int root) {
    visited[root] = 1;
    for (auto child : tree[root]) {
        if (visited[child]) continue;
        parent[child] = root;
        find_parent(child);
    }
}

int main() {
    fast_io;
    cin >> n;
    tree = vector<vector<int>>(n+1);
    parent = visited = vector<int>(n+1, 0);
    for (int i = 0; i < n - 1; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }

    find_parent(1);

    for (int i = 2; i <= n; i++) {
        cout << parent[i] << '\n';
    }
    return 0;
}*/
