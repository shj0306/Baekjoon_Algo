#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 10001;
int N, M, a,b,c, S,E;
int visited[MAX];
vector<vector<pii>> adj;

//해당 중량의 물품을 옮길 수 있는 지?
bool possible(int weight) {
    queue<int> q;
    memset(visited, 0, sizeof(visited));
    q.push(S);
    visited[S] = 1;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == E) return true;

        for (auto [w, nxt] : adj[cur]) {
            if (weight > w) break;
            if (!visited[nxt]) {
                visited[nxt] = 1;
                q.push(nxt);
            }
        }
    }
    return false;
}

int main() {
    fast_io;
    cin >> N >> M;
    adj.resize(N+1);

    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        adj[a].emplace_back(c,b);
        adj[b].emplace_back(c,a);
    }

    //각 섬에 연결된 도로를 중량제한 기준으로 내림차순 정렬
    for (int i = 1; i <= N; i++) sort(all(adj[i]), greater<>());

    //공장 번호 입력 받는다.
    cin >> S >> E;

    int l = 1, r = 1e9, mid, ans = 0;
    while(l <= r) {

        //옮기려고 하는 물품 중량
        mid = (l + r) / 2;

        //해당 물품을 S->E로 옮길 수 있는 지?
        if (possible(mid)) {
            ans = mid;
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }
    cout << ans;
}