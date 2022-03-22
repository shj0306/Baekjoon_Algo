/*
#include <bits/stdc++.h>
using namespace std;
int f, src, des, u, d, control[2];
queue<pair<int,int>> q;
vector<bool> visited;

int bfs(int start) {
    q.push({start,0});
    visited[start] = true;
    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();
        for (int cont : control) {
            int next = cur.first + cont;
            if (next >= 1 && next <= f && !visited[next]) {
                visited[next] = true;
                q.push({next, cur.second + 1});
            }
            if (next == des) return cur.second + 1;
        }
    }
    return -1;
}
int main() {
    cin >> f >> src >> des >> u >> d;
    visited = vector<bool>(f+1, false);
    control[0] = u; control[1] = -d;
    if (src == des) {
        cout << 0 << '\n';
        return 0;
    }
    int ans = bfs(src);
    if (ans == -1) cout << "use the stairs" << '\n';
    else cout << ans << '\n';
    return 0;
}*/
