/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;

int N, Q;
vector<ll> tree;

ll sum(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return tree[n];
    int mid = (s+e) / 2;
    return sum(n*2, s, mid, l, r) + sum(n*2+1, mid+1, e, l, r);
}

//구간에 p가 들어가는 위치에 q값만큼 갱신
ll construct(int n, int s, int e, int p, int q) {
    if (p < s || p > e) return tree[n];
    if (s == e) return tree[n] += q;
    int mid = (s + e) / 2;
    return tree[n] = construct(n*2, s, mid, p, q) + construct(n*2+1, mid+1, e, p, q);
}

int main() {
    fast_io;
    cin >> N >> Q;
    int height = ceil(log2(N));
    int sz = 1 << (height + 1);
    tree = vector<ll>(sz);
    for (int i = 0; i < Q; i++) {
        int a,p,q; cin >> a >> p >> q;
        if (a == 1) //생후 p일에 x를 추가한다
            construct(1, 1, N, p, q);
        if (a == 2) { //생후 p일부터 q일까지 변화한 양을 출력
            cout << sum(1, 1, N, p, q) << '\n';
        }
    }
}*/
