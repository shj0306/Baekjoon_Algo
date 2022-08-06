#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 32001;
int N, M, a, b, indegree[MAX];
vector<vector<int>> adj;

int main() {
    fast_io;
    cin >> N >> M;
    adj.resize(N+1);

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        indegree[b]++;
        adj[a].push_back(b);
    }

    priority_queue<int, vector<int>, greater<>> pq;

    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) pq.push(i);
    }

    while(!pq.empty()) {
        int cur = pq.top();
        pq.pop();
        cout << cur << ' ';
        for (auto nxt : adj[cur]) {
            if (--indegree[nxt] == 0) pq.push(nxt);
        }
    }
}
