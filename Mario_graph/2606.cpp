//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M;
//int virus[101][101];
//bool visited[101];
//
//int dfs(int cur) {
//    visited[cur] = true;
//    int ret = (cur != 1 ? 1 : 0);
//    for (int i = 1; i <= N; i++) {
//        if (cur == i) continue;
//        if (!visited[i] && virus[cur][i]) {
//            ret += dfs(i);
//        }
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < M; i++) {
//        int c1, c2;
//        cin >> c1 >> c2;
//        virus[c1][c2] = 1;
//        virus[c2][c1] = 1;
//    }
//
//    cout << dfs(1);
//}