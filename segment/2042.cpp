#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
int N, M, K;
ll a, b, c, arr[MAX], *tree;

ll init(int s, int e, int node) {
    if (s == e) return tree[node] = arr[s];
    int mid = (s + e) / 2;
    return tree[node] = init(s, mid, node * 2) + init(mid + 1, e, node * 2 + 1);
}
/***
 *
 * @param l : 구하려는 구간의 왼쪽
 * @param r : 구하려는 구간의 오른쪽
 * @param nodeNum : 현재 보고 있는 노드번호
 * @param nodeL  : 현재 구간 왼쪽
 * @param nodeR : 현재 구간 오른쪽
 * @return l~r 구간의 합
 */
ll sum(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return sum(l, r, nodeNum * 2, nodeL, mid)
    + sum(l, r, nodeNum * 2 + 1, mid + 1, nodeR);
}

/***
 *
 * @param s : 시작 범위
 * @param e : 끝 범위
 * @param nodeNum : 현재 노드 번호
 * @param idx : 수정하려는 노드 번호
 * @param diff : 수정될 때 값의 변화량
 */
void update(int s, int e, int nodeNum, int idx, ll diff) {
    // 범위 밖에 있는 경우
    if (idx < s || idx > e) return;
    tree[nodeNum] += diff;
    if (s == e) return;
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx, diff);
    update(mid+1, e, nodeNum * 2 + 1, idx, diff);
}

int main() {
    fast_io;
    cin >> N >> M >> K;

    int height = ceil(log2(N));
    tree = new ll[1 << (height + 1)];

    for (int i = 1; i <= N; i++) cin >> arr[i];
    init(1, N, 1);

    for (int i = 1; i <= M + K; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            ll val = c - arr[b];
            arr[b] = c;
            update(1, N, 1, b, val);
        }else {
            cout << sum(b,c, 1, 1, N) << '\n';
        }
    }
}