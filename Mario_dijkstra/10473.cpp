/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 110;
const int INF = 1e9;
using pff = pair<float,float>;
float sx, sy, dx, dy;
int n;
float cost[MAX];
bool visited[MAX];
vector<pff> cannon;
//0 : 출발 n+1 : 도착

priority_queue<pair<float,int>, vector<pair<float,int>>, greater<>> pq;

float calc_time(int i, int j, bool is_cannon) {
    float distance = sqrt(pow((cannon[i].first - cannon[j].first),2)
                          + pow((cannon[i].second - cannon[j].second),2));

    return (is_cannon) ? abs(distance - 50) / 5 + 2 : distance / 5;
}

float dijkstra(int start) {
    cost[start] = 0;
    pq.push({0.0, 0});
    while(!pq.empty()) {
        int cur; bool is_cannon = false;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);
        if (visited[cur]) break;
        visited[cur] = true;
        if (cur != 0 && cur != n + 1) is_cannon = true;
        for (int i = 0; i <= n+1; i++) {
            if (visited[i]) continue;
            float time = calc_time(i, cur, is_cannon);
            if (cost[i] > cost[cur] + time) {
                cost[i] = cost[cur] + time;
                pq.push({cost[i], i});
            }
        }
    }
    return cost[n+1];
}


int main() {
    fast_io;
    cin >> sx >> sy >> dx >> dy;
    cin >> n;
    cannon = vector<pff> (n+2);

    cannon[0].first = sx; cannon[0].second = sy;
    for (int i = 1; i <= n; i++)cin >> cannon[i].first >> cannon[i].second;
    cannon[n+1].first = dx; cannon[n+1].second = dy;
    fill(visited, visited+n+2, false);
    fill(cost, cost+n+2, INF);
    cout << dijkstra(0) << '\n';
}*/
