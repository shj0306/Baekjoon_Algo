#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MOD = 1e9+7;
const int MAX = 1e6+1;
int N, M, K;
ll arr[MAX], tree[MAX * 4], a, b, c;

ll init(int s, int e, int nodeNum) {
    if (s == e) return tree[nodeNum] = arr[s];
    int mid = (s + e) / 2;
    return tree[nodeNum] = (init(s, mid, nodeNum * 2) % MOD
            * init(mid+1, e, nodeNum * 2 + 1) % MOD) % MOD;
}

ll sum(ll l, ll r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 1;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return (sum(l, r, nodeNum * 2, nodeL, mid) % MOD)
    * (sum(l, r, nodeNum*2+1, mid+1, nodeR) % MOD) % MOD;
}

void update(int s, int e, int nodeNum, ll idx, ll new_val) {
    if (idx < s || idx > e) return;
    if (s == e) {
        tree[nodeNum] = new_val;
        return;
    }
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx,  new_val);
    update(mid+1, e, nodeNum * 2 + 1, idx,  new_val);
    tree[nodeNum] = (tree[nodeNum * 2] % MOD * tree[nodeNum * 2 + 1] % MOD) % MOD;
}

int main() {
    fast_io;
    cin >> N >> M >> K;
    for (int i = 1; i <= N; i++) cin >> arr[i];

    init(1, N, 1);

    for (int i = 1; i <= M + K; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
           arr[b] = c;
           update(1, N, 1, b, c);
        }else cout << sum(b, c, 1, 1, N) << '\n';
    }
}