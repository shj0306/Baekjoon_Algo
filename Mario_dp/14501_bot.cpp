#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, T[16], P[16], dp[16];

int main() {
    fast_io;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> P[i];
        dp[i] = P[i];
    }

    for (int day = 2; day <= N; day++) {
        for (int pday = 1; pday < day; pday++) {
            if (day - pday >= T[pday]) {
                dp[day] = max(dp[day], P[day] + dp[pday]);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i + T[i] <= N + 1) {
            ans = max(ans, dp[i]);
        }
    }
    cout << ans;
}