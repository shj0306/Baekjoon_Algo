/*
#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 100000;
int N;
vector<pair<int,int>> arr;
vector<int> tree;

int construct(int n, int s, int e) {
    if (s == e) return tree[n] = 1;
    int mid = (s+e) / 2;
    return tree[n] = construct(n * 2, s, mid) + construct(n*2+1, mid+1, e);
}

int sum(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return 0;
    if (l <= s && e <= r) return tree[n];
    int mid = (s+e) / 2;
    return sum(n*2, s, mid, l, r) + sum(n*2+1, mid+1, e, l, r);
}

int update(int n, int s, int e, int idx) {
    if (idx < s || e < idx) return tree[n];
    if (s == e) return tree[n] = 0;
    int mid = (s+e) / 2;
    return tree[n] = update(n*2, s, mid, idx) + update(n*2+1, mid+1, e, idx);
}

int main() {
    fast_io;
    cin >> N;
    int h = ceil(log2(N));
    int sz = 1 << (h+1);
    tree = vector<int>(sz);

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        arr.emplace_back(num, i);
    }

    sort(all(arr));
    construct(1, 0, N-1);

    for (int i = 0; i < N/2; i++) {
        int min_idx = arr[i].second;
        int max_idx = arr[N-(i+1)].second;
        //min 구간합 구하고
        cout << sum(1, 0, N-1, 0, min_idx-1) << '\n';
        //update
        update(1, 0, N-1, min_idx);
        //max 구간합 구한다.
        cout << sum(1, 0, N-1, max_idx+1, N-1) << '\n';
        //update
        update(1, 0, N-1, max_idx);
    }
    if (N % 2 == 1) cout << 0 << '\n';
}*/
