#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
const int INF = 1e9;
int N, dp[MAX];

int main() {
    fast_io;
    cin >> N;
    fill(dp, dp+N+1, INF);
    dp[0] = dp[1] = 0;
    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i-1] + 1;
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
    }
    cout << dp[N];
}