/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

vector<int> dp;
const int IMP = 1e6;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    dp = vector<int>(n+1, IMP);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[n] << '\n';
    return 0;
}*/
