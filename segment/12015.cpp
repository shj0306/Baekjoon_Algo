/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int N;
vector<pair<int,int>> arr;
vector<int> tree;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first < b.first) return true;
    if (a.first == b.first) return a.second > b.second;
    return false;
}

int find_max(int s, int e, int idx, int n) {
    if (idx < s) return 0;
    if (0 <= s && e <= idx) return tree[n];
    int mid = (s+e) / 2;
    return max(find_max(s, mid, idx, n * 2), find_max(mid+1, e, idx, n * 2 + 1));
}

void update(int n, int s, int e, int i, int val) {
    if (s <= i && i <= e) tree[n] = max(tree[n], val);
    else return;
    if (s == e) return;
    int mid = (s+e) / 2;
    update(n*2, s, mid, i, val);
    update(n*2+1, mid+1, e, i, val);
}

void construct() {
    for (int i = 0; i < N; i++) {
        int idx = arr[i].second;
        int val = find_max(0, N-1, idx, 1); //0~idx까지 구간의 최댓값
        update(1, 0, N-1, idx, val+1);
    }
}

int main() {
    fast_io;
    cin >> N;
    int height = ceil(log2(N));
    int sz = 1 << (height + 1);
    tree = vector<int> (sz);
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        arr.emplace_back(num, i);
    }
    sort(all(arr), cmp);
    construct();
    cout << tree[1] << '\n';
}*/
