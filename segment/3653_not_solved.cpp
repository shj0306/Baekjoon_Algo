/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int N, M;
vector<int> arr;
vector<int> tree;

void update(int n, int s, int e, int idx, int diff) {
    if (idx < s || idx > e) return;
    tree[n] += diff;
    int mid = (s+e) / 2;
    if (s^e) {
        update(n*2, s, mid, idx, diff);
        update(n*2+1, mid+1, e, idx, diff);
    }
}

int sum(int node, int start, int end, int left, int right){
    if(left>end || right<start){
        return 0;
    }
    if(left<=start && end<=right){
        return tree[node];
    }
    return sum(node*2, start, (start+end)/2, left, right)
    + sum(node*2+1, (start+end)/2+1, end, left, right);
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N >> M;
        arr = vector<int>(N+M+1);
        tree = vector<int>(4 * (N+M+1));

        for (int i = M + 1; i <= M + N; i++) {
            update(1, 1, M+N, i, 1);
            arr[i-M] = i;
        }

        int idx = M;

        for(int i=0; i<M; i++){
            int v; cin >> v;
            cout << sum(1, 1, N+M, 1, arr[v]-1) << " ";
            update(1, 1, N+M, arr[v], -1);
            arr[v] = idx--;
            update(1, 1, N+M, arr[v], 1);
        }
        cout << "\n";
    }
}*/
