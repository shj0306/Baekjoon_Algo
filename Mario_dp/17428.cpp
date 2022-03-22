//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//int N;
//ll K;
//ll dp[2][51][102];
///***
// *
// * @param v : 닫힌 괄호가 열린괄호를 초과하는 경우
// * @param pos : 현재 위치
// * @param diff : ( 개수 - ) 개수
// * @return
// */
//ll solve(int v, int pos, int diff) {
//    if (pos == N) return !v && diff == 50;
//    ll &ret = dp[v][pos][diff];
//    if (ret != -1) return ret;
//    ret = solve(v, pos+1, diff+1) + solve(v || diff - 1 < 50, pos + 1, diff - 1);
//    return ret;
//}
//
//void skip(int v, int pos, int diff, ll k) {
//    if (pos == N) return;
//    ll pivot = solve(v, pos + 1, diff + 1);
//    if (k < pivot) {
//        cout << '(';
//        skip(v, pos + 1, diff + 1, k);
//    }else {
//        cout << ')';
//        skip(v || diff - 1 < 50, pos + 1, diff - 1, k - pivot);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    memset(dp, -1, sizeof(dp));
//    if (solve(0, 0, 50) < K + 1) puts("-1");
//    else skip(0,0,50,K);
//}