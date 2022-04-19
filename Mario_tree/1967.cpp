/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef pair<int,int> pii;

// 루트노드에서 가장 멀리 떨어진 정점을 찾은 뒤
// 해당 정점에서 가장 먼 정점을 찾으면 된다.
int n, max_weight, deepest_node;
int visited[10001];
vector<pii> tree[10001];

void dfs(int root, int weight) { //정점에서 가장 멀리 떨어진 노드 찾기
    visited[root] = 1;
    for (auto &child : tree[root]) {
        if (!visited[child.first]) {
            dfs(child.first, weight + child.second);
        }
    }
    if (max_weight < weight) {
        max_weight = weight; deepest_node = root;
    }
}

int main() {
    fast_io;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int p, c, w;
        cin >> p >> c >> w;
        tree[p].emplace_back(c,w);
        tree[c].emplace_back(p,w);
    }
    dfs(1, 0);
    memset(visited, 0, sizeof(visited));
    max_weight = 0;
    dfs(deepest_node, 0);
    cout << max_weight << '\n';
    return 0;
}*/
