#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, M, dp[1001][1001][3];
int arr[1001][1001];

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = 0; k < 3; k++)
                dp[i][j][k] = INF;
        }
    }

    for (int i = 1; i <= M; i++) {
        dp[1][i][0] = arr[1][i];
        dp[1][i][1] = arr[1][i];
        dp[1][i][2] = arr[1][i];
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (j == 1) {
                dp[i][j][0] = min(dp[i-1][j+1][1], dp[i-1][j+1][2]) + arr[i][j];
                dp[i][j][1] = dp[i-1][j][0] + arr[i][j];
            }else if (j == M) {
                dp[i][j][1] = dp[i-1][j][2] + arr[i][j];
                dp[i][j][2] = min(dp[i-1][j-1][0], dp[i-1][j-1][1]) + arr[i][j];
            }else {
                dp[i][j][2] = min(dp[i-1][j-1][1], dp[i-1][j-1][0]) + arr[i][j];
                dp[i][j][1] = min(dp[i-1][j][0], dp[i-1][j][2]) + arr[i][j];
                dp[i][j][0] = min(dp[i-1][j+1][1], dp[i-1][j+1][2]) + arr[i][j];
            }
        }
    }

    int ans = INF;

    for (int i = 1; i <= M; i++) {
        int val = dp[N][i][0];
        for (int d = 1; d < 3; d++) {
            val = min(val, dp[N][i][d]);
        }
        ans = min(ans, val);
    }
    cout << ans;
}