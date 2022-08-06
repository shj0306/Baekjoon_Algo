#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, val, arr[MAX], tree[4 * MAX];

int init(int s, int e, int nodeNum) {
    if (s == e) {
        return tree[nodeNum] = 1;
    }
    int mid = (s + e) / 2;
    return tree[nodeNum] = init(s, mid, nodeNum * 2) +
            init(mid + 1, e, nodeNum * 2 + 1);
}

int sum(int l, int r, int nodeNum, int nodeL, int nodeR) {
    if (r < nodeL || nodeR < l) return 0;
    if (l <= nodeL && nodeR <= r) return tree[nodeNum];
    int mid = (nodeL + nodeR) / 2;
    return sum(l, r, nodeNum * 2, nodeL, mid)
    + sum(l, r, nodeNum * 2 + 1, mid + 1, nodeR);
}

void update(int s, int e, int nodeNum, int idx) {
    if (idx < s || idx > e) return;
    tree[nodeNum]--;
    if (s == e) return;
    int mid = (s + e) / 2;
    update(s, mid, nodeNum * 2, idx);
    update(mid + 1, e, nodeNum * 2 + 1, idx);
}

int main() {
    fast_io;
    cin >> N;
    init(1, N, 1);
    for (int i = 1; i <= N; i++) {
        cin >> val;
        arr[val] = i;
    }

    init(1, N, 1);
    int l = 1, r = N, idx = 0, K = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2) { //작은 거
            idx = arr[l];
            K = sum(1, idx, 1, 1, N) - 1;
            update(1, N, 1, idx);
            l++;
        }else { //큰 거
            idx = arr[r];
            K = sum(idx, N, 1, 1, N) - 1;
            update(1, N, 1, idx);
            r--;
        }

        cout << K << '\n';
    }

}