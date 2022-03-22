/*
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX_K = 10001;
int n, k;
vector<int> money;
int dp[MAX_K];

int main() {
    fast_io;
    cin >> n >> k;
    money = vector<int>(n);
    for (int i = 0; i < n; i++) cin >> money[i];
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = money[i]; j <= k; j++)
            dp[j] += dp[j - money[i]];
    }
    cout << dp[k] << '\n';
}*/
