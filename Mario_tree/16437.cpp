#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
using pll = pair<ll, ll>;
const int MAX = 123457;
char c;
int N, num, v, visited[MAX];
ll island[MAX];
vector<vector<int>> adj;

ll DFS(int cur) {
    if (adj[cur].empty()) return (island[cur] > 0 ? island[cur] : 0);
    ll res = island[cur];
    for (int nxt: adj[cur]) res += DFS(nxt);
    return res > 0 ? res : 0;
}

int main() {
    fast_io;
    cin >> N;
    adj.resize(N + 1);
    for (int i = 2; i <= N; i++) {
        cin >> c >> num >> v;
        adj[v].push_back(i);
        if (c == 'S') island[i] = num;
        else island[i] = -num;
    }
    cout << DFS(1);
}