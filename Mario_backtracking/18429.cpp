//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K, ans, check[9];
//vector<int> weight;
//
//void back_tracking(int day, int w) {
//    if (day == N) {
//        ans++;
//        return;
//    }
//
//    for (int i = 0; i < N; i++) {
//        int diff = w + weight[i] - K;
//        if (!check[i] && diff >= 0) {
//            check[i] = 1;
//            back_tracking(day+1, diff);
//            check[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> K;
//    weight.resize(N);
//
//    for (int i = 0; i < N; i++) cin >> weight[i];
//    back_tracking(0,0);
//    cout << ans;
//}