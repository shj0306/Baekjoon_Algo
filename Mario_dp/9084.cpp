#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T, N, M, dp[10001];
vector<int> coins;

int main() {
    fast_io;
    cin >> T;

    while(T--) {
        cin >> N;
        coins.resize(N);
        for (int i = 0; i < N; i++) cin >> coins[i];
        cin >> M;
        fill(dp, dp+M+1, 0);

        for (auto coin : coins) {
            dp[coin]++;
            for (int j = coin; j <= M; j++) {
                dp[j] += dp[j - coin];
            }
        }
        cout << dp[M] << '\n';
        coins.clear();
    }
}