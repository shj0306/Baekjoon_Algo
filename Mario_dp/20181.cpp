//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//const int MAX = 100001;
//int n, k;
//vector<int> v;
//int dp[MAX]; //dp[i] : 1~i까지 탈피에너지 최댓값
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    v.resize(n + 1);
//    for (int i = 1; i <= n; i++) cin >> v[i];
//
//    int st = 1, en = 1;
//    int sum = v[st];
//
//    while(st <= en && en <= n) {
//        dp[en] = max(dp[en], dp[en-1]);
//        if (sum < k) {
//            if (en == n) break;
//            sum += v[++en];
//        }
//        else {
//            dp[en] = max(dp[en], dp[st-1] + sum - k);
//            if (st < en) sum -= v[st++];
//            else if (st == en) {
//                if (en == n) break;
//                st++; en++;
//                sum = v[en];
//            }
//        }
//    }
//    cout << dp[n] << '\n';
//}