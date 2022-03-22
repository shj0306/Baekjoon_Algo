/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 100000;
int N, Q;
int arr[MAX];
vector<long long> tree;

long long sum(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return tree[n];
    int mid = (s + e) / 2;
    return sum(n*2, s, mid, l, r) + sum(n*2+1, mid+1, e, l, r);
}

long long update(int n, int s, int e, int t, int val) {
    if (t < s || e < t) return tree[n];
    if (s == e) return tree[n] = val;
    int mid = (s+e) / 2;
    return tree[n] = update(n*2, s, mid, t, val) + update(n*2+1, mid+1, e, t, val);
}

long long construct(int n, int s, int e) {
    if (s == e) return tree[n] = arr[s];
    int mid = (s+e) / 2;
    return tree[n] = construct(n*2, s, mid) + construct(n*2+1, mid+1, e);
}

int main() {
    fast_io;
    cin >> N >> Q;
    int height = ceil(log2(N));
    int sz = 1 << (height + 1);
    tree = vector<long long>(sz);
    for (int i = 0; i < N; i++) cin >> arr[i];

    construct(1, 0, N-1);

    for (int i = 0; i < Q; i++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x > y) cout << sum(1, 0, N-1, y-1, x-1) << '\n';
        else cout << sum(1, 0, N-1, x-1, y-1) << '\n';
        update(1, 0, N-1, a-1, b);
    }
}*/
