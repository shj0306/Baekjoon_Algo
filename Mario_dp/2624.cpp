//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const int MAX = 10001;
//int t, k;
//int dp[MAX];
//vector<pii> coin;
//
//int main() {
//    fast_io;
//    cin >> t >> k;
//
//    for (int i = 0; i < k; i++) {
//        int p, n; cin >> p >> n;
//        coin.emplace_back(p,n);
//    }
//
//    //������������ �� ��� �ߺ��Ǵ� ���� ���� �� �ֱ� ������ ������������ �ذ��Ѵ�.
//    dp[0] = 1;
//    for (int i = 0; i < k; i++) {
//        auto [val, coin_cnt] = coin[i];
//        for (int j = t; j >= 0; j--) {
//            for (int jj = 1; jj <= coin_cnt; jj++) {
//                if (j - val * jj >= 0) dp[j] += dp[j-val*jj];
//            }
//        }
//    }
//    cout << dp[t];
//}
////https://nicotina04.tistory.com/15