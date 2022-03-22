//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int INF = 1e9;
//int N;
//int dp[5001]; //N킬로 설탕을 배달하는 최소 봉지 개수
//
//int solve(int weight) {
//    if (weight < 0) return INF;
//    if (weight == 0) return 0;
//    int &ret = dp[weight];
//    if (ret != -1) return ret;
//    //3kg 봉지
//    ret = INF;
//    ret = min(ret, solve(weight-3) + 1);
//    //5kg 봉지
//    ret = min(ret, solve(weight-5)+1);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    memset(dp,-1,sizeof(dp));
//    int res = solve(N);
//    cout << (res == INF ? -1 : res) << '\n';
//}