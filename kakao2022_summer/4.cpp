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
    //���� ��� ��ȣ, intensity, ���츮�� ��Ҵ� �� ����
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

            // �ش� ������ ����츮��
            // �ش� �ڵ尡 �ʿ���� �κ� ����.
            if (summit_set.find(cur) != summit_set.end()) {
                // ����츮�� 2�� �̻� �� �� ���� ������
                if (nflag) continue;
                nflag = 1;
            }
            q.pop();

            //�ش� ������ ����츮�� �ƴϸ�
            if (summit_set.find(cur) == summit_set.end()) {
                for (auto [nxt, w] : graph[cur]) {
                    //������� intensity���� ������ �ϴ� intensity �� �� ū ����
                    //���� nxt������ �ּ� intensity������ �۴ٸ�
                    if (dist[nxt] > max(val, w)) {
                        dist[nxt] = max(val, w);
                        q.push({nxt, dist[nxt], nflag});
                    }
                }
            }// ù ����츮�� ������ ���
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

    // �迭�� �߾ �ɰ� ����.
    for (auto summ : summit)
        summit_set.insert(summ);

    graph.resize(n+1);
    for (auto path : paths) {
        int s = path[0], e = path[1], w = path[2];
        graph[s].emplace_back(e,w);
        graph[e].emplace_back(s,w);
    }

    bfs();
    //���츮 ��ȣ, ���� ���� intensity ��
    return {min_summ, min_int};
}

int main() {

    vector<int> ans = solution(7, {{1, 4, 4}, {1, 6, 1}, {1, 7, 3}, {2, 5, 2}, {3, 7, 4}, {5, 6, 6}}, {1}, {2,3,4});
    cout << ans[0] << ' ' << ans[1];
}