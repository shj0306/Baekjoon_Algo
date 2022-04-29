#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = 1e9;
int N, C;
int dp[1001];
vector<pii> v;

//dp[human] : �ش� ��� �� �̻��� ���� �� �ִ� �ּ� ���
int solve(int cnt) {
    if (cnt <= 0) return 0;
    int &ret = dp[cnt];
    if (ret != -1) return ret;

    ret = INF;
    for (int i = 1; i <= N; i++) {
        auto [c, w] = v[i];
        ret = min(ret, solve(cnt-w) + c);
    }
    return ret;
}

int main() {
    fast_io;
    cin >> C >> N;
    v.resize(N+1);
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= N; i++) {
        int c, w; //���� �ش� ��뿡 ���� �� ��
        cin >> c >> w;
        v[i] = make_pair(c, w);
    }

    sort(all(v));
    cout << solve(C);
}