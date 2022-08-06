#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1001;
int N, M, indegree[MAX];
vector<int> ans;
vector<vector<int>> adj;

int main() {
    fast_io;
    cin >> N >> M;
    adj.resize(N+1);

    for (int i = 1; i <= M; i++) {
        int x, val, prev; cin >> x;
        for (int j = 1; j <= x; j++) {
            cin >> val;
            if (j > 1) {
                indegree[val]++;
                adj[prev].push_back(val);
            }
            prev = val;
        }
    }

    queue<int> q;

    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        ans.push_back(cur);

        for (auto nxt : adj[cur]) {
            if (--indegree[nxt] == 0) {
                q.push(nxt);
            }
        }
    }

    if (ans.size() == N) {
        for (int i = 0; i < N; i++)
            cout << ans[i] << '\n';
    }else cout << 0;
}