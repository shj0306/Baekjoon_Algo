#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
string S;
int M, res, dp[1001];
vector<pair<string, int>> scores;

int solve(int idx) {
    if (idx == S.length()) return 0;
    int &ret = dp[idx];
    if (ret != -1) return ret;

    ret = solve(idx+1) + 1;
    for (auto [word, score] : scores) {
        int id = (int)S.find(word, idx);
        if (id == idx) {
            ret = max(ret, solve(id+word.length()) + score);
        }
    }
    return ret;
}

int main() {
    fast_io;
    cin >> S >> M;
    scores.resize(M);
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < M; i++)
        cin >> scores[i].first >> scores[i].second;

    cout << solve(0);
}