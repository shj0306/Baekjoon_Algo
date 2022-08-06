//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, M, K;
//int dp[11][250][250];
//
///*
// * prev로 시작하는 수열 N자리 개수가 pivot일 때 이 값이 K보다 작으면 적어도
// * 정답은 prev+1이상의 수로 시작한다는 뜻
// */
//
//int solve(int n, int m, int prev) {
//    if (n == 1) return prev <= m;
//    int &ret = dp[n][m][prev];
//    if (ret != -1) return ret;
//    ret = 0;
//    for (int i = prev; i <= m; i++) {
//        if (i > m) break;
//        ret += solve(n - 1, m - i, i);
//    }
//    return ret;
//}
//
//void skip(int n, int m, int prev, int k) {
//    if (n == 1) {
//        cout << m << ' ';
//        return;
//    }
//
//    int pivot = solve(n - 1, m - prev, prev);
//    if (pivot >= k) {
//        cout << prev << ' ';
//        skip(n - 1, m - prev, prev, k);
//    } else skip(n, m, prev + 1, k - pivot);
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M >> K;
//
//    memset(dp, -1, sizeof(dp));
////    cout << solve(N, M, 1);
//    skip(N, M, 1, K);
//}
////https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=jqkt15&logNo=221896973163
////https://baeharam.github.io/posts/ps/ps-boj2291/