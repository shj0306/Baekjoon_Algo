#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MOD = 1e9;
int N, K;

//dp[N][K] => K개를 더해서 합이 N이 되는 경우의 수
long long dp[201][201];

int main() {
    fast_io;
    cin >> N >> K;

    for (int i = 0; i <= N; i++) dp[1][i] = 1;

    for (int k = 1; k <= K; k++) {
        for (int n = 0; n <= N; n++) {
            for (int l = 0; l <= n; l++) {
                dp[k][n] += dp[k-1][n-l] % MOD;
                dp[k][n] %= MOD;
            }
        }
    }

    cout << dp[K][N];
}