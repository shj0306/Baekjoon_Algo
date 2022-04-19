//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//const int MOD = 1e9;
//int N, dp[101][10][2<<10];
//
//int solve(int idx, int num, int check) {
//
//    if (idx == N) return check == (1 << 10) - 1 ? 1 : 0;
//    int &ret = dp[idx][num][check];
//    if (ret != 0) return ret;
//
//    if (num == 0) ret += solve(idx+1, num+1, check | (1 << (num+1))) % MOD;
//    else if (num == 9) ret += solve(idx+1, num-1, check | (1 << (num-1))) % MOD;
//    else ret += (solve(idx+1, num+1, check | (1 << (num+1))) % MOD
//            + solve(idx+1, num-1, check | (1 << (num-1))) % MOD) % MOD;
//    return ret;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    if (N < 10) {
//        cout << 0 << '\n';
//        return 0;
//    }
//    int res = 0;
//    for (int i = 1; i <= 9; i++) res = (res + solve(1, i, 1<<i)) % MOD;
//    cout << res;
//}