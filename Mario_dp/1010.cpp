//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//int n,m;
//int dp[30][30]; //���ݱ��� ������ �ٸ� ������ �׶� ���� ������ ������ �ٸ� �ּ� �ε���
//
//int solve(int cnt, int idx_m) {
//    if (cnt == n || idx_m == m) return cnt == n ? 1 : 0;
//    int &ret = dp[cnt][idx_m];
//    if (ret != 0) return ret;
//    for (int i = idx_m; i <= m - (n - cnt); i++) ret += solve(cnt + 1, i+1);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    while(T--) {
//        cin >> n >> m;
//        memset(dp,0,sizeof(dp));
//        cout << solve(0, 0) << '\n';
//    }
//}