#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 10001;
int N,p,c,w,max_dist,max_node;
bool visited[MAX];
vector<vector<pii>> tree;
//https://cocoon1787.tistory.com/471
//루트에서 가장 먼 노드를 찾고, 해당 노드에서 가장 먼 노드를 찾으면 트리의 지름이된다.
void dfs(int cur, int cur_dist) {

    visited[cur] = true;
    for (auto [nxt, d] : tree[cur]) {
        int dist = cur_dist + d;
        if (!visited[nxt]) {
            if (max_dist < dist) {
                max_dist = dist;
                max_node = nxt;
            }
            dfs(nxt, dist);
        }
    }
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N + 1);

    for (int i = 1; i < N; i++) {
        cin >> p >> c >> w;
        tree[p].emplace_back(c, w);
        tree[c].emplace_back(p, w);
    }

    //root에서 가장 먼 노드를 찾는다.
    dfs(1, 0);
    memset(visited, false, sizeof(visited));
    max_dist = 0;
    dfs(max_node, 0);

    cout << max_dist;
}