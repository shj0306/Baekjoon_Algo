#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, S, D, x, y, visited[MAX], check[MAX], cnt;
vector<vector<int>> adj;

//s에서 출발하여 거리가 d이하인 곳으로 갈 수 있는 최소 거리

int DFS(int cur, bool is_root) {
    visited[cur] = true;
    if (!is_root && adj[cur].size() == 1)
        return check[cur] = 0;
    for (auto nxt : adj[cur]) {
        if (!visited[nxt]) {
            check[cur] = max(check[cur], DFS(nxt, false) + 1);
        }
    }
    return check[cur];
}

void DFS2(int cur) {
    visited[cur] = true;
    cnt++;
    for (auto nxt : adj[cur]) {
        if (!visited[nxt] && check[nxt] >= D) {
            DFS2(nxt);
        }
    }
}

int main() {
    fast_io;
    cin >> N >> S >> D;
    adj.resize(N+1);

    for (int i = 1; i < N; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    DFS(S, true);
    memset(visited, false, sizeof(visited));
    DFS2(S);

    cout << cnt * 2 - 2 << '\n';
}