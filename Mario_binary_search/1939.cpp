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

//�ش� �߷��� ��ǰ�� �ű� �� �ִ� ��?
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

    //�� ���� ����� ���θ� �߷����� �������� �������� ����
    for (int i = 1; i <= N; i++) sort(all(adj[i]), greater<>());

    //���� ��ȣ �Է� �޴´�.
    cin >> S >> E;

    int l = 1, r = 1e9, mid, ans = 0;
    while(l <= r) {

        //�ű���� �ϴ� ��ǰ �߷�
        mid = (l + r) / 2;

        //�ش� ��ǰ�� S->E�� �ű� �� �ִ� ��?
        if (possible(mid)) {
            ans = mid;
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }
    cout << ans;
}