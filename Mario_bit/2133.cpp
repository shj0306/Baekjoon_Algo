//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MAX = 31;
//int N;
//int dp[MAX][1<<3]; //dp[col][state] : col-1열까지 전부 완성되었을 때 col열의 상태 state
//
//int solve(int cur, int state) {
//    if (cur == N) return state == 1 || state == 4 || state == 7 ? 1 : 0;
//    int &ret = dp[cur][state];
//    if (ret != 0) return ret;
//    switch (state) {
//        case 0:
//            ret += solve(cur+1, 1);
//            ret += solve(cur+1, 4);
//            ret += solve(cur+1, 7);
//            break;
//        case 1:
//            ret += solve(cur+1, 0);
//            ret += solve(cur+1, 6);
//            break;
//        case 2:
//            ret += solve(cur+1, 5);
//            break;
//        case 3:
//            ret += solve(cur+1, 4);
//            break;
//        case 4:
//            ret += solve(cur+1, 0);
//            ret += solve(cur+1, 3);
//            break;
//        case 5:
//            ret += solve(cur+1, 2);
//            break;
//        case 6:
//            ret += solve(cur+1, 1);
//            break;
//        case 7:
//            ret += solve(cur+1, 0);
//            break;
//        default:
//            break;
//    }
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    memset(dp, 0, sizeof(dp));
//    if (N % 2) cout << 0 << '\n';
//    else cout << solve(1, 0) << '\n';
//}