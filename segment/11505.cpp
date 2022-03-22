/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;
const int MOD = 1000000007;
const int MAX = 1000000;
int N,M,K, sz;
int arr[MAX];
vector<ll> tree;

ll mul(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 1;
    if (l <= s && e <= r) return tree[n];
    int mid = (s+e) / 2;
    return (mul(n*2, s, mid, l, r) * mul(n*2+1, mid+1, e, l, r)) % MOD;
}

ll construct(int n, int s, int e) {
    if (s == e) return tree[n] = arr[s];
    int mid = (s + e) / 2;
    return tree[n] = (construct(n * 2, s, mid) * construct(n * 2 + 1, mid + 1, e)) % MOD;
}

ll update(int n, int s, int e, int i, ll val) {
    if (s > i || e < i) return tree[n];
    if (s == e) return tree[n] = val;
    int mid = (s+e) / 2;
    return tree[n] = (update(n*2, s, mid, i, val) * update(n*2+1, mid+1, e, i, val)) % MOD;
}

int main() {
    fast_io;
    cin >> N >> M >> K;

    int height = ceil(log2(N));
    sz = 1 << (height + 1);
    for (int i = 0; i < N; i++) cin >> arr[i];
    tree = vector<ll>(sz);

    construct(1, 0, N-1);

    for (int i = 0; i < M + K; i++) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 1) update(1, 0, N-1, b-1, c);
        if (a == 2) cout << mul(1, 0, N-1, b-1, c-1) << '\n';
    }
}
//https://ghdic.github.io/ps/boj-11505/ 참고*/
