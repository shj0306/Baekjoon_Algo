#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
const int MAX = 1e6 + 1;
int N, M, a, b, c, arr[MAX];
ll tree[4 * MAX];

ll sum(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return sum(l, r, nodeNum * 2, nodeL, mid)
            + sum(l, r, nodeNum * 2 + 1, mid + 1, nodeR);
}

void modify(int s, int e, int nodeNum, int idx, int diff) {
    if (idx < s || idx > e) return;
    tree[nodeNum] += diff;
    if (s == e) return;
    int mid = (s + e) / 2;
    modify(s, mid, nodeNum * 2, idx, diff);
    modify(mid + 1, e, nodeNum * 2 + 1, idx, diff);
}

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= M; i++) {
        cin >> a >> b >> c;
        if (a) { //modify
            int tmp = arr[b];
            arr[b] = c;
            modify(1, N, 1, b, c - tmp);
        }else { //sum
            if (b > c) swap(b, c);
            cout << sum(b, c, 1, 1, N) << '\n';
        }
    }
}