#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, dp[10001], coin[101];
// https://yabmoons.tistory.com/491
// dp[j] += dp[j-coin[i]] => j-coin[i]원을 만들 수 있는 경우를 더해준다.
int main() {
    fast_io;
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> coin[i];

    dp[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = coin[i]; j <= K; j++) {
            dp[j] += dp[j-coin[i]];
        }
    }
    cout << dp[K];
}