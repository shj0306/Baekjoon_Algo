//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int dp[31][31], N, L, I;
//char res[31];
//
//int binary(int n, int m) {
//    int &ret = dp[n][m];
//    if (ret != -1) return ret;
//    if (m == 0 || n == 0) return ret = 1;
//    ret = binary(n-1, m);
//    if (m > 0) ret += binary(n-1, m-1);
//    return ret;
//}
//
//void skip(int n, int m, int k, int p) {
//    if (n == 0) return;
//    if (m == 0) {
//        for (int i = 0; i < n; i++) res[p+i] = '0';
//        return;
//    }
//    int pivot = binary(n-1, m);
//    if (k <= pivot) {
//        res[p] = '0';
//        skip(n-1, m, k, p+1);
//    }else {
//        res[p] = '1';
//        skip(n-1, m-1, k-pivot, p+1);
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> L >> I;
//    memset(dp, -1, sizeof(dp));
//    skip(N, L, I, 0);
//    for (int i = 0; i < N; i++) cout << res[i];
//    return 0;
//}