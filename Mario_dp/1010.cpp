#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int T, N, M, dp[30][30], check[30];

//조합으로 그냥 풀리는 문제긴 함.
int solve(int n_idx, int m_idx) {
    if (n_idx == N) return 1;
    int &ret = dp[n_idx][m_idx];
    if (ret != -1) return ret;
    ret = 0;

    for (int i = m_idx; i < M; i++){
        if (!check[i]) {
            check[i] = 1;
            ret += solve(n_idx+1, i);
            check[i] = 0;
        }
    }
    return ret;
}

int main() {
    fast_io;
    cin >> T;
    while(T--) {
        cin >> N >> M;
        memset(dp,-1,sizeof(dp));
        memset(check, 0, sizeof(check));
        cout << solve(0,0) << '\n';
    }
}