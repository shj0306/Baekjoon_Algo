#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e6;
int N, val, min_dp[2][3], max_dp[2][3], max_ans, min_ans = INF;

int main() {
    fast_io;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> max_dp[1][j];
            min_dp[1][j] = max_dp[1][j];
        }

        max_dp[1][0] += max(max_dp[0][0], max_dp[0][1]);
        max_dp[1][1] += max(max_dp[0][0], max(max_dp[0][1], max_dp[0][2]));
        max_dp[1][2] += max(max_dp[0][1], max_dp[0][2]);

        min_dp[1][0] += min(min_dp[0][0], min_dp[0][1]);
        min_dp[1][1] += min(min_dp[0][0], min(min_dp[0][1], min_dp[0][2]));
        min_dp[1][2] += min(min_dp[0][1], min_dp[0][2]);

        for (int j = 0; j < 3; j++) {
            min_dp[0][j] = min_dp[1][j];
            max_dp[0][j] = max_dp[1][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        min_ans = min(min_ans, min_dp[0][i]);
        max_ans = max(max_ans, max_dp[0][i]);
    }

    cout << max_ans << ' ' << min_ans;
}