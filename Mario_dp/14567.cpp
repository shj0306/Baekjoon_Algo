#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, indegree[1001], res[1001];
vector<vector<int>> adj;

int main() {
    fast_io;
    cin >> N >> M;
    adj.resize(N+1);

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        indegree[b]++;
    }

    queue<pii> q;
    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0)
            q.push({i,1});
    }

    while(!q.empty()) {
        auto [cur, sem]  = q.front();
        q.pop();

        res[cur] = sem;

        for (auto nxt : adj[cur]) {
            if (--indegree[nxt] == 0)
                q.push({nxt, sem+1});
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << res[i] << ' ';
    }
}