//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long,long long>;
//const int INF = 1e9+7;
//
//int N,s,b;
//long long ans = INF;
//bool used[11];
//vector<pll> mat;
//vector<int> food;
//
//void solve(int idx) {
//    if (!food.empty()) {
//        long long sum_s = 1;
//        long long sum_b = 0;
//        for (auto f : food) {
//            sum_s *= mat[f].first;
//            sum_b += mat[f].second;
//        }
//        ans = min(ans, abs(sum_s - sum_b));
//    }
//    for (int i = idx; i < N; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            food.push_back(i);
//            solve(i);
//            food.pop_back();
//            used[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        cin >> s >> b;
//        mat.emplace_back(s,b);
//    }
//    solve(0);
//    cout << ans;
//}