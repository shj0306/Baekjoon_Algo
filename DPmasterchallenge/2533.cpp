//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1e6+1;
//const int INF = 1e6+1;
//int N, cnt;
//vector<vector<int>> tree;
//bool visited[MAX];
//int dp[MAX][2]; //정점을 루트로 하는 서브트리에 필요한 최소 얼리어답터 수
//int picked[MAX][2];
//
//int solve(int nodeNum, int state) {
//    int &ret = dp[nodeNum][state];
//    if (ret != -1) return ret;
//    int notpick = INF, pick = 1;
//    visited[nodeNum] = true;
//    for (int nxt : tree[nodeNum])
//        if (!visited[nxt]) pick += solve(nxt, 1);
//    if (state) {
//        notpick = 0;
//        for (int nxt : tree[nodeNum])
//            if (!visited[nxt]) notpick += solve(nxt, 0);
//    }
//    visited[nodeNum] = false;
//    picked[nodeNum][state] = (pick < notpick);
//
//    return ret = min(notpick, pick);
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    tree.resize(N+1);
//    for (int i = 0; i < N-1; i++) {
//        int v1, v2;
//        cin >> v1 >> v2;
//        tree[v1].push_back(v2);
//        tree[v2].push_back(v1);
//    }
//
//    memset(dp, -1, sizeof(dp));
//    memset(picked, -1, sizeof(dp));
//    cout << solve(1,1);
//
//}