///① 간선들을 가중치 순으로 오름차순 정렬하고 정점들을 각 컴포넌트로 초기화한다.
///② 간선들을 훑으면서 양쪽 정점을 포함한 컴포넌트가 연결되어 있지 않으면 간선을 뽑고 연결한다.
///③ 간선 V-1개가 뽑혔을 때, 그 간선들과 정점들이 이루는 그래프가 MST다.

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, s_idx, P[1001], edge_cnt, ans;

vector<pii> W, edges;

int find(int cur) {
    if (P[cur] == cur) return cur;
    return P[cur] = find(P[cur]);
}

void union_func(int v1, int v2) {
    int r1 = find(v1);
    int r2 = find(v2);

    if (r1 < r2) {
        P[r2] = r1;
    }else if (r1 > r2) {
        P[r1] = r2;
    }
}

int main() {
    fast_io;
    cin >> N >> M;
    edges.resize(M+1);
    W.resize(M+1);
    for (int i = 1; i <= N; i++) P[i] = i;

    for (int i = 1; i <= M; i++) {
        cin >> edges[i].first >> edges[i].second >> W[i].first;
        W[i].second = i;
    }

    sort(all(W));
    s_idx = 1;

    while(edge_cnt < N - 1) {
        auto [cost, idx] = W[s_idx++];
        auto [u, v] = edges[idx];

        if (find(P[u]) != find(P[v])) {
            union_func(u, v);
            edge_cnt++;
            ans += cost;
        }
    }

    cout << ans;
}