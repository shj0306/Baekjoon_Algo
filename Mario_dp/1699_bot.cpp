#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
const int INF = 1e5+1;
int N, dp[MAX];
int main() {
    fast_io;
    cin >> N;

    fill(dp, dp+N+1, INF);
    for (int i = 1; i * i <= N; i++) dp[i*i] = 1;

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[N];
}