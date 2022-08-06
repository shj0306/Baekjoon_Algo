#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
const int INF = 1e9+7;
int N, M, arr[MAX], a, b;
pii tree[4 * MAX];

void init(int s, int e, int nodeNum) {
    if (s == e) {
        tree[nodeNum] = make_pair(arr[s], arr[s]);
        return;
    }
    int mid = (s+e) / 2;

    init(s, mid, nodeNum * 2);
    init(mid+1, e, nodeNum * 2 + 1);
    tree[nodeNum].first = max(tree[nodeNum * 2].first, tree[nodeNum * 2 + 1].first);
    tree[nodeNum].second = min(tree[nodeNum * 2].second, tree[nodeNum * 2 + 1].second);
}

int find_max(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum].first;
    int mid = (nodeL + nodeR) / 2;
    return max(find_max(l, r, nodeNum * 2, nodeL, mid),
                                     find_max(l, r, nodeNum * 2 + 1, mid+1, nodeR));
}

int find_min(int l, int r, int nodeNum , int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return INF;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum].second;
    int mid = (nodeL + nodeR) / 2;
    return min(find_min(l, r, nodeNum * 2, nodeL, mid),
                                     find_min(l, r, nodeNum * 2 + 1, mid+1, nodeR));
}

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    init(1, N, 1);

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        cout << find_min(a, b, 1, 1, N) << ' ' << find_max(a, b, 1, 1, N) << '\n';
    }
}