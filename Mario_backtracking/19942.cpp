//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N, res[4], nut[4], check[15], min_cost = 10000;
//vector<int> ans, tmp;
//int vec[15][5];
//
//void calc() {
//
//    int t[5] = {0,0,0,0,0};
//
//    for (int i = 0; i < tmp.size(); i++) {
//        for (int j = 0; j < 5; j++) {
//            t[j] += vec[tmp[i]][j];
//        }
//    }
//
//    if (t[0] >= nut[0] && t[1] >= nut[1] && t[2] >= nut[2] && t[3] >= nut[3] && t[4] < min_cost) {
//        min_cost = t[4];
//        ans = tmp;
//    }
//}
//
//
//void back_tracking(int idx, int cost) {
//    if (min_cost < cost) return;
//    for (int i = idx; i < N; i++) {
//        if (!check[i]) {
//            check[i] = 1;
//            tmp.push_back(i);
//            calc();
//            back_tracking(i, cost + vec[i][4]);
//            tmp.pop_back();
//            check[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> nut[0] >> nut[1] >> nut[2] >> nut[3];
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < 5; j++) {
//            cin >> vec[i][j];
//        }
//    }
//
//    back_tracking(0, 0);
//    if (min_cost == 10000) cout << -1 << '\n';
//    else {
//        cout << min_cost << '\n';
//        for (auto val: ans) cout << val + 1 << ' ';
//    }
//}