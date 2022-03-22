/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1001;
const int INF = 1e9;
int n, m, x;
bool visited[MAX];
int dist1[MAX]; //x에서 각 마을로 가는 최단 거리
int dist2[MAX]; //역방향 간선그래프로 각 마을에서 x로 가는 최단 거리를 구한다.
vector<vector<pair<int,int>>> adj1;
vector<vector<pair<int,int>>> adj2;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
void dijkstra(int start, int dist[], vector<vector<pair<int,int>>> &v) {
    dist[start] = 0;
    fill(visited+1, visited+1+n, false);
    pq.push({0,start});
    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visited[cur]);
        if (visited[cur]) break;
        visited[cur] = true;
        for (auto &p : v[cur]) {
            int nxt = p.first; int time = p.second;
            if (dist[nxt] > dist[cur] + time) {
                dist[nxt] = dist[cur] + time;
                pq.push({dist[nxt],nxt});
            }
        }
    }
}

int main() {
    fast_io;
    cin >> n >> m >> x;
    adj1 = vector<vector<pair<int,int>>>(n+1);
    adj2 = vector<vector<pair<int,int>>>(n+1);
    for (int i = 0; i < m; i++) {
        int u1, u2, w;
        cin >> u1 >> u2 >> w;
        adj1[u1].emplace_back(u2,w);
        adj2[u2].emplace_back(u1,w);
    }

    int max_time = 0;
    fill(dist1 + 1, dist1 + 1 + n, INF);
    fill(dist2 + 1, dist2 + 1 + n, INF);
    dijkstra(x, dist1, adj1); //x에서 각 마을로 돌아가는 최단거리
    dijkstra(x, dist2, adj2); //각 마을에서 x로 가는 최단거리

    for (int i = 1; i <= n; i++) {
        max_time = max(max_time, dist1[i] + dist2[i]);
    }

    cout << max_time << '\n';
}
*/
