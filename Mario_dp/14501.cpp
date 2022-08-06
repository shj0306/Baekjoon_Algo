#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, T[16], P[16], dp[16];

int solve(int day) {
    if (day > N+1) return 0;
    int &ret = dp[day];
    if (ret != -1) return ret;

    ret = solve(day+1);
    if (day+T[day] <= N+1) {
        ret = max(ret, solve(day+T[day]) + P[day]);
    }

    return ret;
}

int main() {
    fast_io;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> T[i] >> P[i];

    memset(dp,-1,sizeof(dp));

    cout << solve(1);
}