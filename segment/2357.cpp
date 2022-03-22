/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
const int MAX = 100010;
const int INF = 1e9;
int N,M;
int arr[MAX];
vector<pii> tree; //{min,max}

pair<int,int> construct(int n, int s, int e) {
    if (s == e) return tree[n] = {arr[s], arr[s]};
    int mid = (s+e) / 2;
    pii val1 = construct(n * 2, s, mid);
    pii val2 = construct(n*2+1, mid+1, e);
    return tree[n] = make_pair(min(val1.first, val2.first), max(val1.second, val2.second));
}

pair<int,int> find_min_max(int n, int s, int e, int l, int r) {
    if (r < s || e < l) return {INF,-1};
    if (l <= s && e <= r) return tree[n];
    int mid = (s + e) / 2;
    pii val1 = find_min_max(n*2, s, mid, l, r);
    pii val2 = find_min_max(n*2+1, mid+1, e, l, r);
    return make_pair(min(val1.first, val2.first), max(val1.second, val2.second));
}

int main() {
    fast_io;
    cin >> N >> M;
    int height = ceil(log2(N));
    int sz = 1 << (height + 1);
    tree = vector<pii>(sz);

    for (int i = 0; i < N; i++) cin >> arr[i];
    construct(1, 0, N-1);

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        auto ans = find_min_max(1, 0, N-1, a-1,b-1);
        cout << ans.first << ' ' << ans.second << '\n';
    }
}*/
