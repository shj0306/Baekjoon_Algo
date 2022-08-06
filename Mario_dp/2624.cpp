#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T, K, dp[101][10001];
vector<pii> coins;

int solve(int idx, int cost) {
    if (cost >= T) return cost == T;

    int &ret = dp[idx][cost];
    if (ret != -1) return ret;
    ret = 0;
    for (int i = idx; i < K; i++) {
        auto [coin, cnt] = coins[i];
        for (int j = 1; j <= cnt; j++) {
            if (cost + coin * j <= T)
                ret += solve(i+1, cost + coin * j);
        }
    }
    return ret;
}

int main() {
    fast_io;
    cin >> T >> K;
    memset(dp,-1,sizeof(dp));
    coins.resize(K);
    for (int i = 0; i < K; i++)
        cin >> coins[i].first >> coins[i].second;
    cout << solve(0, 0);
}