//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//vector<vector<pii>> posi;
//int res;
//bool checked[12];
//
//void solve(int idx, int sum) {
//
//    if (idx == 12) {
//        res = max(res, sum);
//        return;
//    }
//    for (auto [player, ability] : posi[idx]) {
//        if (!checked[player]) { //해당 선수가 다른 포지션에 이미 선택된 경우 제외
//            checked[player] = true;
//            solve(idx+1, sum + ability);
//            checked[player] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        posi = vector<vector<pii>>(12);
//        res = 0;
//        for (int i = 1; i <= 11; i++) {
//            for (int j = 1; j <= 11; j++) {
//                int num; cin >> num;
//                if (num) posi[j].emplace_back(i, num);
//            }
//        }
//        solve(1,0);
//        cout << res << '\n';
//    }
//}