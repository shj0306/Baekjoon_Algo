#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
const int MOD = 1e9+7;
int N;
ll dp[MAX];

int main() {
    fast_io;
    cin >> N;

    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= N; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }
    cout << dp[N];
}