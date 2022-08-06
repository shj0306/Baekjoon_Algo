#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MOD = 1e4+7;
int N, M, H, num, dp[51][1001];
vector<vector<int>> stud;

int solve(int idx, int val) {

    int &ret = dp[idx][val];
    if (idx == N+1) return val == H;
    if (val > H) return 0;
    if (ret != -1) return ret;
    ret = solve(idx+1, val) % MOD;
    for (auto h : stud[idx]) {
        if (val + h <= H) ret += solve(idx+1, val + h) % MOD;
        ret %= MOD;
    }
    return ret;
}

int main() {
    fast_io;
    cin >> N >> M >> H;
    cin.ignore(1);
    stud.resize(N+1);

    for (int i = 1; i <= N; i++) {
        string tmp;
        getline(cin, tmp);
        int sidx = 0;
        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] == ' ') {
                stud[i].push_back(stoi(tmp.substr(sidx, j)));
                sidx = j+1;
            }
        }
        stud[i].push_back(stoi(tmp.substr(sidx)));
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(1, 0);
}