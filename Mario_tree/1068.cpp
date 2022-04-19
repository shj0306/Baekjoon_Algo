/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int N, remove_node, leaf_cnt;
vector<vector<int>> children;
int visited[50];

void find_leaf(int root) {
    if (root == remove_node) return;
    visited[root] = 1;
    for (auto &child : children[root]) {
        if (!visited[child]) {
            find_leaf(child);
        }
    }
    if (children[root].empty()
    || (children[root].size() == 1 && children[root][0] == remove_node)) leaf_cnt++;
}

int main() {
    fast_io;
    cin >> N; int root = 0;
    children = vector<vector<int>>(N);
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < N; i++) {
        int node;
        cin >> node;
        if (node != -1) {
            children[node].push_back(i);
        }else root = i;
    }
    cin >> remove_node;
    find_leaf(root);
    cout << leaf_cnt << '\n';
    return 0;
}*/
