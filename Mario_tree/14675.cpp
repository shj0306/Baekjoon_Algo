#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 100001;
int N, Q, u, v, t, k, number, discover[MAX];
bool isCut[MAX];
vector<vector<int>> tree;
//https://www.crocus.co.kr/1164

int dfs(int cur, int isRoot) {
    discover[cur] = ++number;
    int ret = discover[cur];
    int child = 0; //자식 수

    for (auto nxt : tree[cur]) {
        /*
        만약 이미 DFS에서 탐색된 정점이라면
        현재 정점의 방문순서와 탐색된 정점의 방문 순서중 min값을 찾는다.
        이 방법을 이용해야
        " A번 정점에서 자식 노드들이 정점 A를 거치지 않고
        정점 A보다 빠른 방문번호를 가진 정점으로 갈 수 없다면 단절점이다. "
        를 찾을 수 있다.
       */

        if (discover[nxt]) {
            ret = min(ret, discover[nxt]);
            continue;
        }
        child++;
        int prev = dfs(nxt, false);

        /*
         * 정점 A가 루트가 아니라면 A번 정점에서 자식 노드들이 정점 A를 거치지 않고
         * 정점 A보다 빠른 방문번호를 가진 정점으로 갈 수 없다면 단절점이다.
        */
        if (!isRoot && prev >= discover[cur])
            isCut[cur] = true;
        ret = min(ret, prev);
    }
    if (isRoot) isCut[cur] = (child >= 2);
    return ret;
}

int main() {
    fast_io;
    cin >> N;
    tree.resize(N+1);

    for (int i = 1; i < N; i++) {
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        if (!discover[i])
            dfs(i, true);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> t >> k;
        if (t == 1) { //단절점
            cout << (isCut[k] ? "yes" : "no") << '\n';
        }else {//단절선(트리는 사이클이 없기 때문에)
            cout << "yes" << '\n';
        }
    }
}