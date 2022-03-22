//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//const int MOD = 1e9+7;
//const int MAX = 2e8+1;
//
//typedef vector<vector<long long>> matrix;
//matrix operator * (const matrix &a, const matrix &b) {
//    int n = (int)a.size();
//    matrix c(n, vector<long long>(n));
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            for (int k = 0; k < n; k++) {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//            c[i][j] %= MOD;
//        }
//    }
//    return c;
//}
//
//int main() {
//    int n; cin >> n;
//    if (n <= 1) {
//        cout << n << ' ' << 0 << '\n';
//        return 0;
//    }
//
//    matrix ans = {{1,0}, {0,1}};
//    matrix a = {{1,1}, {1,0}};
//    int tmp_n = n;
//
//    while(tmp_n > 0) {
//        if (tmp_n % 2 == 1) {
//            ans = ans * a;
//        }
//        a = a * a;
//        tmp_n /= 2;
//    }
//    cout << ans[0][1] << ' ' << n - 2 << '\n';
//}
