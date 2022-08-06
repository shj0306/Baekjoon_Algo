#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MIN = -3276800;
int N, M, sum[101], dp[101][51];

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        int x; cin >> x;
        sum[i] = sum[i-1] + x;
    }

    for (int i = 1; i <= M; i++) dp[0][i] = MIN;

    //dp[i][j] : i개의 배열로 j개의 구간을 선택했을 때 최대값
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            //i가 포함되지 않은 경우
            dp[i][j] = dp[i-1][j];
            for (int k = 1; k <= i; k++) {
                if (k >= 2)
                    dp[i][j] = max(dp[i][j], dp[k-2][j-1] + sum[i] - sum[k-1]);
                else if (k == 1 && j == 1)
                    dp[i][j] = max(dp[i][j], sum[i]);
            }
        }
    }

    cout << dp[N][M];
}