#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, V, visited[1001];
vector<vector<int>> arr;

void dfs(int cur) {
    visited[cur] = 1;
    cout << cur << ' ';
    for (auto nxt : arr[cur]) {
        if (!visited[nxt]) {
            dfs(nxt);
        }
    }
}

void bfs() {
    queue<int> q;
    memset(visited, 0, sizeof(visited));
    q.push(V);
    visited[V] = 1;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';

        for (auto nxt : arr[cur]) {
            if (!visited[nxt]) {
                visited[nxt] = 1;
                q.push(nxt);
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M >> V;
    arr.resize(N+1);

    for (int i = 1; i <= M; i++) {
        int u, v; cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for (int i = 1; i <= N; i++)
        sort(all(arr[i]));

    dfs(V);
    cout << '\n';
    bfs();
}