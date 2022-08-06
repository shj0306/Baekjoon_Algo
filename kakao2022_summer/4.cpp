#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 50001;
const int INF = 1e9;

vector<vector<pii>> graph;
vector<int> gate_info, summit;
set<int> summit_set;

int N;

struct Info {
    //현재 노드 번호, intensity, 봉우리를 밟았는 지 여부
    int cur, cost, flag;
};

int dist[MAX], min_int = INF, min_summ = -1;

void bfs() {
    queue<Info> q;
    fill(dist, dist+N+1, INF);
    for (auto gate : gate_info) {
        q.push({gate, 0, 0});
        while(!q.empty()) {
            auto [cur, val, flag] = q.front();
            int nflag = flag;

            // 해당 정점이 산봉우리면
            // 해당 코드가 필요없는 부분 같다.
            if (summit_set.find(cur) != summit_set.end()) {
                // 산봉우리는 2번 이상 갈 수 없기 때문에
                if (nflag) continue;
                nflag = 1;
            }
            q.pop();

            //해당 정점이 산봉우리가 아니면
            if (summit_set.find(cur) == summit_set.end()) {
                for (auto [nxt, w] : graph[cur]) {
                    //현재까지 intensity값과 가려고 하는 intensity 값 중 큰 값이
                    //현재 nxt까지의 최소 intensity값보다 작다면
                    if (dist[nxt] > max(val, w)) {
                        dist[nxt] = max(val, w);
                        q.push({nxt, dist[nxt], nflag});
                    }
                }
            }// 첫 산봉우리에 도착한 경우
            else if (!flag) {
                if (min_int > val) {
                    min_int = val;
                    min_summ = cur;
                }else if (min_int == val) {
                    if (min_summ > cur)
                        min_summ = cur;
                }
            }
        }
    }
}

vector<int> solution(int n, vector<vector<int>> paths, vector<int> gates, vector<int> summits) {
    gate_info = gates;
    summit = summits;
    N = n;

    // 배열로 했어도 될거 같다.
    for (auto summ : summit)
        summit_set.insert(summ);

    graph.resize(n+1);
    for (auto path : paths) {
        int s = path[0], e = path[1], w = path[2];
        graph[s].emplace_back(e,w);
        graph[e].emplace_back(s,w);
    }

    bfs();
    //봉우리 번호, 가장 작은 intensity 값
    return {min_summ, min_int};
}

int main() {

    vector<int> ans = solution(7, {{1, 4, 4}, {1, 6, 1}, {1, 7, 3}, {2, 5, 2}, {3, 7, 4}, {5, 6, 6}}, {1}, {2,3,4});
    cout << ans[0] << ' ' << ans[1];
}