#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
const int INF = 1e5+1;
int N, dp[MAX];

int solve(int x) {
    if (x == 0) return 0;
    int &ret = dp[x];
    if (ret != -1) return ret;
    ret = INF;
    for (int i = 1; i * i <= x; i++) {
        ret = min(ret, solve(x - i * i) + 1);
    }
    return ret;
}

int main() {
    fast_io;
    cin >> N;
    memset(dp,-1,sizeof(dp));
    cout << solve(N);
}