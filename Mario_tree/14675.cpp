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
    int child = 0; //�ڽ� ��

    for (auto nxt : tree[cur]) {
        /*
        ���� �̹� DFS���� Ž���� �����̶��
        ���� ������ �湮������ Ž���� ������ �湮 ������ min���� ã�´�.
        �� ����� �̿��ؾ�
        " A�� �������� �ڽ� ������ ���� A�� ��ġ�� �ʰ�
        ���� A���� ���� �湮��ȣ�� ���� �������� �� �� ���ٸ� �������̴�. "
        �� ã�� �� �ִ�.
       */

        if (discover[nxt]) {
            ret = min(ret, discover[nxt]);
            continue;
        }
        child++;
        int prev = dfs(nxt, false);

        /*
         * ���� A�� ��Ʈ�� �ƴ϶�� A�� �������� �ڽ� ������ ���� A�� ��ġ�� �ʰ�
         * ���� A���� ���� �湮��ȣ�� ���� �������� �� �� ���ٸ� �������̴�.
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
        if (t == 1) { //������
            cout << (isCut[k] ? "yes" : "no") << '\n';
        }else {//������(Ʈ���� ����Ŭ�� ���� ������)
            cout << "yes" << '\n';
        }
    }
}