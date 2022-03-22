/*
#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int dp[101][101];
int n, m1, m2, m, p, c;
vector<vector<int>> relation;
int bfs(int start) {
    q.push(start);
    while(!q.empty()) {
        int h = q.front();
        q.pop();
        for (auto &ch : relation[h]) {
            if (!dp[h][ch]) {
                q.push(ch);
                dp[h][ch]++;
                dp[start][ch] = dp[start][h] + dp[h][ch];
            }
            if (ch == m2) {
                return dp[start][ch];
            }
        }
    }
    return -1;
}

int main() {
    cin >> n;
    cin >> m1 >> m2;
    cin >> m;
    relation = vector<vector<int>>(n+1);
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < m; i++) {
        cin >> p >> c;
        relation[p].push_back(c);
        relation[c].push_back(p);
    }
    int ans = bfs(m1);
    cout << ans << '\n';
    return 0;
}
*/
