/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;
int N,M,K,sz;
vector<long long> tree;
ll arr[1000001];

ll sum(int nodeL, int nodeR, int nodeNum, int l, int r) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return sum(nodeL, mid, nodeNum*2, l, r) + sum(mid+1, nodeR, nodeNum*2+1, l, r);
}

void update(int n, int s, int e, int i, ll val) {
    if (s <= i && i <= e) tree[n] += val;
    else return;
    if (s == e) return;
    int mid = (s+e) / 2;
    update(n*2, s, mid, i, val);
    update(n*2+1, mid+1, e, i, val);
}

ll construct(int n, int s, int e) {
    if (s == e) return tree[n] = arr[s];
    int m = (s + e) / 2;
    tree[n] = construct(n * 2, s, m) + construct(n * 2 + 1, m + 1, e);
    return tree[n];
}

int main() {
    fast_io;
    cin >> N >> M >> K;

    int height = ceil(log2(N));
    sz = 1 << (height + 1);

    for (int i = 0; i < N; i++) cin >> arr[i];

    tree = vector<long long>(sz);
    construct(1, 0, N-1);

    for (int i = 0; i < M + K; i++) {
        int a,b;
        cin >> a;
        if (a == 1){
            ll c, diff;
            cin >> b >> c;
            diff = c - arr[b-1];
            arr[b-1] = c;
            update(1, 0, N-1, b-1, diff);
        }
        if (a == 2) {
            int c;
            cin >> b >> c;
            //print prefix_sum
            cout << sum(0, N-1, 1, b-1, c-1) << '\n';
        }
    }
}*/
