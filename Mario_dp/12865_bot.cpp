#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, dp[101][100001];
vector<pii> wv;

int main() {
    fast_io;
    cin >> N >> K;
    wv.resize(N+1);

    for (int i = 1; i <= N; i++)
        cin >> wv[i].first >> wv[i].second;

    for (int i = 1; i <= N; i++) {
        //무게 j로 얻을 수 있는 최대 가치
        for (int j = 1; j <= K; j++) {
            auto [w, v] = wv[i];
            if (j >= w) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[N][K];
}