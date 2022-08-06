#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, dp[5001];

int solve(int weight) {
    if (weight == 0) return 0;
    if (weight < 0) return INF;
    int &ret = dp[weight];
    if (ret != -1) return ret;
    ret = solve(weight-3) + 1;
    ret = min(ret, solve(weight-5) + 1);
    return ret;
}

//dp[weight] : weight만큼의 무게를 담을 수 있는 봉지의 최소 개수

int main() {
    fast_io;
    cin >> N;

    fill(dp, dp+N+1, INF);
    dp[3] = dp[5] = 1;

    for (int i = 3; i <= N; i++) {
        if (i < 5) dp[i] = min(dp[i], dp[i-3] + 1);
        else dp[i] = min(dp[i], min(dp[i-3]+1, dp[i-5]+1));
    }

    cout << (dp[N] == INF ? -1 : dp[N]) << '\n';
}