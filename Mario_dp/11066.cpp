//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int T, k, dp[501][501], pSum[501];
//const int INF = 1e7;
//vector<int> files;
//
////dp[s][e] : s~e 구간 합치는 비용 최솟값
////정답은 배열 전체 합 + dp[s][e] 값
//int solve(int s, int e) {
//    int &ret = dp[s][e];
//    if (ret != -1) return ret;
//    if (s == e) return ret = 0;
//    if (s + 1 == e) return ret = files[s] + files[e];
//
//    ret = INF;
//    for (int i = s; i <= e; i++) {
//        ret = min(ret, solve(s, i) + solve(i+1, e));
//    }
//    return ret += pSum[e] - pSum[s-1];
//}
//
//int main() {
//    fast_io;
//    cin >> T;
//    while(T--) {
//        cin >> k;
//        files = vector<int>(k+1);
//
//        for (int i = 1; i <= k; i++) {
//            cin >> files[i];
//            pSum[i] = pSum[i-1] + files[i];
//        }
//        memset(dp,-1,sizeof(dp));
//        cout << solve(1, k) << '\n';
//    }
//}