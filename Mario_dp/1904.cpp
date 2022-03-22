/*
#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
const int MOD = 15746;
long long dp[MAX];

int solve(int n) {
    if (n == 1 || n == 2) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = solve(n-1) + solve(n-2);
    dp[n] %= MOD;
    return dp[n];
}

int main() {
    int n; cin >> n;
    memset(dp, -1, sizeof(dp));
    int ans = solve(n);
    cout << ans % MOD << '\n';
}*/
