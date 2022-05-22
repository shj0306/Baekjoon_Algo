#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 200001;
int N, R, a,b,d, dist, giga_node;
bool visited[MAX];
vector<vector<pii>> tree;

//기둥 길이, 기가노드 찾기
void dfs1(int cur) {
    visited[cur] = true;
    giga_node = cur;
    if ((cur == R && tree[cur].size() >= 2) || (cur != R && tree[cur].size() >= 3)) return;
    for (auto [ch, D] : tree[cur]) {
        if (!visited[ch]) {
            dist += D;
            dfs1(ch);
        }
    }
}

//기가노드에서 각 리프노드까지 길이중 가장 긴 길이 찾기
void dfs2(int cur, int D) {
    visited[cur] = true;

    for (auto [ch, Di] : tree[cur]) {
        int nD = D + Di;
        if (!visited[ch]) {
            dist = max(dist, nD);
            dfs2(ch, nD);
        }
    }
}

int main() {
    fast_io;
    cin >> N >> R;
    tree.resize(N+1);

    for (int i = 1; i < N; i++) {
        cin >> a >> b >> d;
        tree[a].emplace_back(b,d);
        tree[b].emplace_back(a,d);
    }

    dfs1(R);
    int pil_dist = dist; dist = 0;
    dfs2(giga_node, 0);

    cout << pil_dist << ' ' << dist;
}