#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX_N = 10001;
int T, K, dp[MAX_N];
vector<pii> coins;


int main() {
    fast_io;
    cin >> T >> K;
    coins.resize(K+1);

    for (int i = 1; i <= K; i++)
        cin >> coins[i].first >> coins[i].second;

    dp[0] = 1;

    for (int i = 1; i <= K; i++) {
        for (int t = T; t >= 1; t--) {
            auto [val, cnt] = coins[i];
            for (int j = 1; j <= cnt; j++) {
                if (t - val * j >= 0) dp[t] += dp[t-val*j];
            }
        }
    }

    cout << dp[T];
}