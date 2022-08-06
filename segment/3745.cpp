#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, arr[MAX], tree[4*MAX];
vector<pii> lis;

bool cmp(pii p, pii q) {
    if (p.first == q.first) return p.second > q.second;
    return p.first < q.first;
}

int LIS(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return max(LIS(l, r, nodeNum * 2, nodeL, mid),
                               LIS(l, r, nodeNum * 2 + 1, mid + 1, nodeR));
}

void update(int s, int e, int nodeNum, int idx, int new_val) {
    if (idx < s || idx > e) return;
    if (s == e) {
        tree[nodeNum] = new_val;
        return;
    }
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx, new_val);
    update(mid+1, e, nodeNum * 2 + 1, idx, new_val);
    tree[nodeNum] = max(tree[nodeNum * 2], tree[nodeNum * 2 + 1]);
}

int main() {
    fast_io;
    while(cin >> N) {
        memset(tree, 0, sizeof(tree));
        memset(arr, 0, sizeof(arr));

        for (int i = 1; i <= N; i++) {
            cin >> arr[i];
            lis.emplace_back(arr[i], i);
        }
        sort(all(lis), cmp);
        for (auto [val, idx] : lis) {
            int new_val = LIS(1, idx, 1, 1, N);
            update(1, N, 1, idx, new_val + 1);
        }

        cout << tree[1] << '\n';
        lis.clear();
    }
}