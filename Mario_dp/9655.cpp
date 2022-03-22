//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N;
//int dp[1001][1001]; //남은 돌의 개수, 현재 시도 횟수
//
//int solve(int cnt, int tried) {
//    if (cnt == 0) return tried % 2 ? 1 : 0;
//    int &ret = dp[cnt][tried];
//    if (ret != -1) return ret;
//    ret = solve(cnt-1, tried+1);
//    if (cnt >= 3) ret = solve(cnt-3, tried+1);
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    memset(dp, -1, sizeof(dp));
//    cout << (solve(N,0) == 1 ? "SK" : "CY") << '\n';
//}