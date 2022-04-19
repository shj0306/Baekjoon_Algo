/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, visited[10001];
struct INFO {
    int num;
    vector<int> road;
};
vector<INFO> tree;
int dp[10001][2]; //dp[root][isGood] : 루트가 root인 서브트리, isGood은 루트가 우수마을인지 여부

int solve(int root, bool is_good) {
    if (dp[root][is_good] != -1) return dp[root][is_good];
    int res = (is_good) ? tree[root].num : 0;
    visited[root] = 1;
    for (auto &child : tree[root].road) {
        if (!visited[child]) {
            if (is_good) {
                res += solve(child, false);
            }else {
                res += max(solve(child, true), solve(child, false));
            }
        }
    }
    visited[root] = 0;
    return dp[root][is_good] = res;
}
int main() {
    fast_io;
    cin >> n; int src, des;
    tree = vector<INFO>(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> tree[i].num;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> src >> des;
        tree[src].road.push_back(des);
        tree[des].road.push_back(src);
    }
    memset(dp, -1, sizeof(dp));
    int ans = max(solve(1, true), solve(1, false));
    cout << ans << '\n';
    return 0;
}*/
