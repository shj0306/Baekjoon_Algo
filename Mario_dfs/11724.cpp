/*
#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
int graph[1001][1001];
int v, e, u1, v1, ans;
void dfs(int cur) {
    visited[cur] = true;
    for (int i = 1; i <= v; i++) {
        if (!visited[i] && graph[i][cur]) {
            visited[i] = true;
            dfs(i);
        }
    }
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> v >> e;
    fill(visited, visited+v+1, false);
    for (int i = 0; i < e; i++) {
        cin >> u1>> v1;
        graph[u1][v1] = 1;
        graph[v1][u1] = 1;
    }
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
*/
