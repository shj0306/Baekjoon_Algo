#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, dp[101][100001];
vector<pii> items;

int solve(int idx, int weight) {
    if (idx == N+1) return 0;
    int &ret = dp[idx][weight];
    if (ret != -1) return ret;
    ret = solve(idx+1, weight);

    auto [w, v] = items[idx];
    if (weight >= w) ret = max(ret, solve(idx+1, weight-w) + v);
    return ret;
}

int main() {
    fast_io;
    cin >> N >> K;
    items.resize(N+1);

    for (int i = 1; i <= N; i++)
        cin >> items[i].first >> items[i].second;
    memset(dp,-1,sizeof(dp));

    cout << solve(1, K);
}