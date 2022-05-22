#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1001;
int N, k, a, val, root, prev_node, arr[MAX];
int P[MAX];
vector<vector<int>> tree;
/*
 * k 부모의 부모의 자식(자신의 부모 제외)의 자식들의 수
 */

int main() {
    fast_io;

    while(true) {
        cin >> N >> k;
        if (N == 0 && k == 0) break;
        tree.clear();
        tree.resize(N+1);
        memset(arr, 0, sizeof(arr));
        memset(P, 0, sizeof(P));

        cin >> root;
        int cur_root = 1;

        for (int i = 2; i <= N; i++) {
            cin >> val;
            if (val == k) k = i;
            if (i == 2 || prev_node + 1 == val) tree[cur_root].push_back(i);
            else tree[++cur_root].push_back(i);
            P[i] = cur_root;
            prev_node = val;
        }

        int node = P[P[k]], ans = 0;
        for (auto ch : tree[node]) {
            if (ch == P[k]) continue;
            ans += (int)tree[ch].size();
        }

        cout << ans << '\n';
    }
}