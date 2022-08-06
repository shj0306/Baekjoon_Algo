#include <vector>
#include <queue>
/*#define INF 2e8
using namespace std;
typedef pair<int,int> pii;

vector<int> dijkstra(int src, int n, vector<vector<pii>> aa) {
    vector<int> dist(n+1, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[src] = 0;
    pq.push({src, 0});
    while(!pq.empty()) {
        int v = pq.top().first;
        int d = pq.top().second;
        pq.pop();

        if (dist[v] < d) continue;
        for (auto &adj : aa[v]) {
            int adj_v = adj.first;
            int adj_d = d + adj.second;
            if (adj_d < dist[adj_v]) {
                dist[adj_v] = adj_d;
                pq.push({adj_v, dist[adj_v]});
            }
        }
    }
    return dist;
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = INF;
    vector<vector<pii>> aa(n+1);

    for (auto & fare : fares) {
        int src = fare[0];
        int dest = fare[1];
        int money = fare[2];
        aa[src].emplace_back(dest, money);
        aa[dest].emplace_back(src,money);
    }

    vector<int> cost_sn = dijkstra(s,n,aa);
    vector<int> cost_an = dijkstra(a,n,aa);
    vector<int> cost_bn = dijkstra(b,n,aa);

    for (int i = 1; i <= n; i++) {
        answer = (answer > cost_sn[i] + cost_an[i] + cost_bn[i])
                ? cost_sn[i] + cost_an[i] + cost_bn[i] : answer;
    }
    return answer;
}

int main() {
    solution(7,3,4,1,{{5, 7, 9}, {4, 6, 4}, {3, 6, 1}, {3, 2, 3}, {2, 1, 6}});
}*/
//출발지점에서 각 지점까지 최단 거리 전부구함
//각 도착지점에서 모든 지점의 최단 거리를 구한다
//for문 이용
//answer = min(answer, (d[s][k] + d[a][k] + d[b][k])
//플로이드 와샬 알고리즘 1번 vs 다이젝스트라 3번
//{{5, 7, 9}, {4, 6, 4}, {3, 6, 1}, {3, 2, 3}, {2, 1, 6}}
