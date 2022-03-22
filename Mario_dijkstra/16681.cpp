/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
const int MAX = 100010;
const long long INF = 1987654321987654321;
int n,m,d,e;
vector<int> h;
vector<vector<pii>> mountain;
long long cost1[MAX];
long long cost2[MAX];
bool visited[MAX];
priority_queue<pii, vector<pii>, greater<>> pq;

void dijkstra(int start, long long cost[], int flag) { //0이면 등산 1이면 하산
    cost[start] = 0; //성취감 - 소모한 체력
    pq.push({0, start});
    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visited[cur]);
        if (visited[cur]) break;
        visited[cur] = true;
        for (auto &p : mountain[cur]) {
            int nxt = p.first; int distance = p.second;
            if (h[cur] < h[nxt]) { //증가하는 방향
                if (cost[nxt] > cost[cur] + distance) {
                    cost[nxt] = cost[cur] + distance;
                    pq.push({cost[nxt], nxt});
                }
            }
        }
    }
}

int main() {
    fast_io;
    cin >> n >> m >> d >> e;
    h = vector<int>(n+1);
    for (int i = 1; i <= n; i++) cin >> h[i];
    mountain = vector<vector<pii>>(n+1);
    for (int i = 0; i < m; i++) {
        int u,v,c;
        cin >> u >> v >> c;
        mountain[u].emplace_back(v,c);
        mountain[v].emplace_back(u,c);
    }

    fill(cost1+1, cost1+1+n, INF);
    fill(cost2+1, cost2+1+n, INF);
    fill(visited+1, visited+1+n, false);
    dijkstra(1, cost1, 0);
    fill(visited+1, visited+1+n, false);
    dijkstra(n,cost2, 1);
    long long ans = -INF;
    for (int i = 2; i < n; i++) {
        if (cost1[i] != INF && cost2[i] != INF) {
            ans = max(ans, h[i] * e - (cost1[i] + cost2[i]) * d);
        }
    }
    (ans == -INF) ? cout << "Impossible" << '\n' : cout << ans << '\n';
}*/
