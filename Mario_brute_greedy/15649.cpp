//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, check[9];
//vector<int> v;
//
//void solve(int idx, int cnt) {
//    if (cnt == M) {
//        for (auto val : v) cout << val << ' ';
//        cout << '\n';
//        return;
//    }
//    for (int i = 1; i <= N; i++) {
//        if (!check[i]) {
//            check[i] = true;
//            v.push_back(i);
//            solve(i, cnt + 1);
//            v.pop_back();
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    solve(1, 0);
//}