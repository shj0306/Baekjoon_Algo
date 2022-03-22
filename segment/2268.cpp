/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 1000000;
int N, M;
vector<long long> tree;

long long update(int n, int s, int e, int t, int val) {
    if (s > t || e < t) return tree[n];
    if (s == e) return tree[n] = val;
    int mid = (s+e) / 2;
    return tree[n] = update(n*2, s, mid, t, val) + update(n*2+1, mid+1, e, t, val);
}

long long sum(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return tree[n];
    int mid = (s+e) / 2;
    return sum(n*2, s, mid, l, r) + sum(n*2+1, mid+1, e, l, r);
}

int main() {
    fast_io;
    cin >> N >> M;
    int h = ceil(log2(N));
    int sz = 1 << (h+1);
    tree = vector<long long>(sz);

    for (int i = 0; i < M; i++) {
        int a, x, y;
        cin >> a >> x >> y;
        if (a) update(1, 0, N-1, x-1, y);
        else {
            if (x > y) swap(x,y);
            cout << sum(1, 0, N-1, x-1, y-1) << '\n';
        }
    }
}*/
