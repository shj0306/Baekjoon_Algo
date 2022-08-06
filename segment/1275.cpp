#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, Q, x, y, a;
ll tree[4*MAX], arr[MAX], b, tmp;

ll init(int s, int e, int nodeNum) {
    if (s == e) return tree[nodeNum] = arr[s];
    int mid = (s + e) / 2;
    return tree[nodeNum] = init(s, mid, nodeNum * 2)
            + init(mid + 1, e, nodeNum * 2 + 1);
}

ll sum(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return sum(l, r, nodeNum * 2, nodeL, mid)
    + sum(l, r, nodeNum * 2 + 1, mid + 1, nodeR);
}

void update(int s, int e, int nodeNum, int idx, ll diff) {
    if (idx < s || idx > e) return;
    tree[nodeNum] += diff;
    if (s == e) return;
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx, diff);
    update(mid + 1, e, nodeNum * 2 + 1, idx, diff);
}

int main() {
    fast_io;
    cin >> N >> Q;

    for (int i = 1; i <= N; i++) cin >> arr[i];
    init(1, N, 1);

    for (int i = 1; i <= Q; i++) {
        cin >> x >> y >> a >> b;
        // x ~ y까지 합을 출력
        if (x > y) swap(x, y);
        cout << sum(x,y,1,1,N) << '\n';
        // a번째 수를 b로 바꾼다.
        tmp = arr[a];
        arr[a] = b;
        update(1, N, 1, a, b-tmp);
    }
}