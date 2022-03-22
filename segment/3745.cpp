/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 100000;
pair<int,int> arr[MAX];
vector<int> tree;

bool cmp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.first < p2.first) return true;
    else if (p1.first == p2.first) return p1.second > p2.second;
    return false;
}

//0~idx구간의 최댓값 출력
int find_max(int n, int s, int e, int idx) {
    if (idx < s) return 0;
    if (idx >= e) return tree[n];
    int mid = (s+e) / 2;
    return max(find_max(n*2, s, mid, idx), find_max(n*2+1,mid+1, e, idx));
}

int update(int n, int s, int e, int t, int val) {
    if (t < s || e < t) return tree[n];
    if (s == e) return tree[n] = val;
    int mid = (s+e) / 2;
    return tree[n] = max(update(n*2, s, mid, t, val), update(n*2+1, mid+1, e, t, val));
}

int main() {
    fast_io;
    int N, h, sz;
    while(true) {
        N = -1; cin >> N;
        if (N == -1) break;
        h = ceil(log2(N));
        sz = 1 << (h+1);
        tree = vector<int>(sz);

        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(begin(arr), begin(arr)+N, cmp);

        for (int i = 0; i < N; i++) {
            int idx = arr[i].second;
            int val = find_max(1, 0, N-1, idx);
            update(1, 0, N-1, idx, val+1);
        }
        cout << tree[1] << '\n';
    }
}*/
