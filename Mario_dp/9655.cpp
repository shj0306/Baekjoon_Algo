#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int N, dp[1001];
int main() {
    fast_io;
    cin >> N;
    dp[1] = dp[3] = 0;
    for (int i = 2; i <= N; i++) {
        if (1 < i && i < 3) dp[i] = ~dp[i-1];
        else if (i > 3) dp[i] = ~dp[i-3];
    }
    if (dp[N]) cout << "CY";
    else cout << "SK";
}