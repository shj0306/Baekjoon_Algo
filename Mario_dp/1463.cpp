#pragma comment(linker, "/STACK:16777216")
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
int N, dp[MAX];

int solve(int x) {
    if (x == 1) return 0;
    int &ret = dp[x];
    if (ret != -1) return ret;
    ret = solve(x-1) + 1;
    if (x % 3 == 0) ret = min(ret, solve(x/3) + 1);
    if (x % 2 == 0) ret = min(ret, solve(x/2) + 1);
    return ret;
}

int main() {
    fast_io;
    cin >> N;
    memset(dp, -1, sizeof(dp));
    cout << solve(N) << '\n';
}