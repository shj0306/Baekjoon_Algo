#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using pdd = pair<double, double>;
using pdi = pair<double, int>;
using ll = long long;
const int INF = 1000;
int N, visited[110];
bool is_cannon;
double sx, sy, dx, dy, dist[110]; //0 : 출발, N + 1 : 도착
vector<pdd> Info;

double ret_dist(double x1, double y1, double x2, double y2) {

    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main() {
    fast_io;
    cin >> sx >> sy >> dx >> dy;
    cin >> N;
    Info.resize(N+2);

    Info[0] = {sx, sy};
    for (int i = 1; i <= N; i++) cin >> Info[i].first >> Info[i].second;
    Info[N+1] = {dx, dy};

    fill(dist, dist+N+2, INF);
    dist[0] = 0;

    priority_queue<pdi, vector<pdi>, greater<>> pq;
    pq.push({dist[0], 0});

    while(!pq.empty()) {
        int cur;
        do {
            cur = pq.top().second;
            pq.pop();
        }while(!pq.empty() && visited[cur]);

        if (visited[cur]) break;
        visited[cur] = 1;

        auto [cur_x, cur_y] = Info[cur];
        if (cur >= 1 && cur <= N) is_cannon = true;
        else is_cannon = false;

        for (int i = 0; i <= N+1; i++) {
            if (visited[i]) continue;
            auto [c_x, c_y] = Info[i];
            double time;
            if (is_cannon)
                time = abs(ret_dist(cur_x, cur_y, c_x, c_y) - 50) / 5 + 2;
            else
                time = ret_dist(cur_x, cur_y, c_x, c_y) / 5;

            if (dist[i] > dist[cur] + time) {
                dist[i] = dist[cur] + time;
                pq.push({dist[i], i});
            }
        }
    }
    printf("%.6f\n", dist[N+1]);
}