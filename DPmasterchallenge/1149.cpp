//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dp[1001][3]; //dp[idx][color] : idx번째 집에서 어떤 색을 칠했을 때 비용의 최솟값
//struct Info {
//    int r,g,b;
//};
//
//vector<Info> home;
//
//int main() {
//    fast_io;
//    cin >> N;
//    home.resize(N+1);
//    for (int i = 1; i <= N; i++) cin >> home[i].r >> home[i].g >> home[i].b;
//
//    for (int i = 1; i <= N; i++) {
//        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + home[i].r;
//        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + home[i].g;
//        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + home[i].b;
//    }
//
//    cout << min(dp[N][2], min(dp[N][0], dp[N][1]));
//}