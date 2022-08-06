#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;

const int MAX = 1e6+1;
int N, arr[MAX], tree[MAX*4];
vector<pii> vec;

int sum(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return max(sum(l, r, nodeNum * 2, nodeL, mid),
               sum(l, r, nodeNum * 2 + 1, mid + 1, nodeR));
}

void update(int s, int e, int nodeNum, int idx, int new_val) {
    if (idx < s || idx > e) return;
    if (s == e) {
        tree[nodeNum] = new_val;
        return;
    }
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx, new_val);
    update(mid + 1, e, nodeNum * 2 + 1, idx, new_val);
    tree[nodeNum] = max(tree[nodeNum * 2], tree[nodeNum * 2 + 1]);
}

bool cmp(pii p, pii q) {
    if (p.first == q.first) return p.second > q.second;
    return p.first < q.first;
}

int main() {
    fast_io;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        vec.emplace_back(arr[i], i);
    }

    sort(all(vec), cmp);

    for (auto [val, idx] : vec) {
        int lis = sum(1, idx, 1, 1, N);
        update(1, N, 1, idx, lis + 1);
    }

    cout << tree[1];
}