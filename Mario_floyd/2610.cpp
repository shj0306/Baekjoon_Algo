#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, M, K, u, v, dist[101][101], visited[101];
vector<vector<int>> graph, commit;
vector<int> tmp, ans;

void init() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            dist[i][j] = INF;
        }
    }
}

void DFS(int cur) {
    visited[cur] = true;
    tmp.push_back(cur);
    for (auto nxt : graph[cur]) {
        if (!visited[nxt]) {
            DFS(nxt);
        }
    }
}

void floyd() {
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M;
    graph.resize(N+1);
    init();

    for (int i = 1; i <= M; i++) {
        cin >> u >> v;
        dist[u][v] = 1;
        dist[v][u] = 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            DFS(i);
            commit.push_back(tmp);
            K++;
            tmp.clear();
        }
    }
    floyd();
    cout << K << '\n';

    int rep, tmp_rep, tmp_max, max_val;
    for (int i = 0; i < K; i++) {
        rep = commit[i][0], max_val = N+1;
        for (int j = 0; j < commit[i].size(); j++) {
            tmp_rep = commit[i][j], tmp_max = 0;
            for (int k : commit[i]) {
                if (tmp_rep == k) continue;
                tmp_max = max(tmp_max, dist[tmp_rep][k]);
            }
            if (max_val > tmp_max) {
                max_val = tmp_max;
                rep = tmp_rep;
            }
        }
        ans.push_back(rep);
    }

    sort(all(ans));
    for (auto val : ans)
        cout << val << '\n';
}