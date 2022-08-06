#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, dp[MAX][2], visited[MAX];
vector<vector<int>> route;

/*
 * 현재 노드가 경찰서일 때 자식 노드는 경찰서가 있어도 되고 없어도 된다.
 * 현재 노드가 경찰서가 아닐 때 자식 노드는 경찰서가 있어야 한다.
 *
 * x지점에 경찰서를 설치하지 않아도 자식에 설치 안해도 되는 경우가 있다
 * 이 경우는 말단 정점에 경찰서가 있고, 해당 부모의 부모에 경찰서가 없으며
 * 다른 자식에 경찰서가 있는 경우에만 해당되는데 이것은 NO-NO-YES == NO-YES-NO 구조이기 때문에
 * 그냥 부모에 설치가 안됐다면 자식은 설치되어야 한다라고 해도 무방하다.
 * TIL 용
 */

int solve(int cur, int state) {

    int &ret = dp[cur][state];
    if (ret != -1) return ret;
    ret = (state ? 1 : 0);
    visited[cur] = 1;
    for (auto nxt : route[cur]) {
        int cnt = 0;
        if (!visited[nxt]) {
            //현재 노드가 경찰서면 자식 노드는 경찰서가 있어도 되고 없어도 된다
            if (state) cnt = min(solve(nxt, 1), solve(nxt, 0));
            else cnt = solve(nxt, 1);
        }
        ret += cnt;
    }
    visited[cur] = 0;
    return ret;
}

int main() {
    fast_io;
    cin >> N;
    route.resize(N+1);
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i < N; i++) {
        int u, v;
        cin >> u >> v;
        route[u].push_back(v);
        route[v].push_back(u);
    }

    cout << min(solve(1, 0), solve(1,1)) << '\n';
}