#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, dp[50];
vector<vector<int>> adj;
/*
 * 어떤 결과값이 1,2,3,4,5분 나왔다고 했을 때, 모두 전파하는 데 5분 걸리는 자식에게 가장
 * 먼저 전파해야(그리디) 최소의 시간이 걸릴것이다.
 * max(5+0,4+1,3+2,2+3,1+4)중 최대값을 택한다.
 *
 * tree dp, Greedy, 재귀, 정렬
 * https://unfunhy.tistory.com/115
 *
 * TIL 용
 */

int solve(int cur) {

    vector<int> v;
    int ret = 0;
    for (int nxt : adj[cur]) v.push_back(solve(nxt));
    sort(all(v), greater<>());
    for (int i = 0; i < v.size(); i++) ret = max(ret, v[i] + i);
    return ret + 1;
}

int main() {
    fast_io;
    cin >> N;
    adj.resize(N);
    for (int i = 0; i < N; i++) {
        int p; cin >> p;
        if (p == -1) continue;
        adj[p].push_back(i);
    }
    memset(dp, -1, sizeof(dp));

    cout << solve(0) - 1;
}