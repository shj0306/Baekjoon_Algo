//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//const int INF = 1e9+7;
//int N, M;
//int city[51][51];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//vector<pii> chic, home;
//vector<int> tmp;
//vector<vector<int>> combi;
//vector<bool> check;
//
//void select_chic(int idx, int cnt) {
//    if (tmp.size() == cnt) {
//        combi.push_back(tmp);
//        return;
//    }
//    for (int i = idx; i < chic.size(); i++) {
//        if (!check[i]) {
//            check[i] = true;
//            tmp.push_back(i);
//            select_chic(i, cnt);
//            tmp.pop_back();
//            check[i] = false;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> city[i][j];
//            if (city[i][j] == 2) chic.emplace_back(i,j);
//            if (city[i][j] == 1) home.emplace_back(i,j);
//        }
//    }
//
//    for (int num = 1; num <= M; num++) {
//        check = vector<bool>(chic.size(), false);
//        select_chic(0, num);
//    }
//
//    int res = INF;
//    for (auto &comb : combi) {
//        int tot_dist = 0;
//        for (auto [r, c] : home) {
//            int dist = -1;
//            for (int i : comb) {
//                auto [cr, cc] = chic[i];
//                if (dist == -1) dist = abs(cr-r) + abs(cc-c);
//                else dist = min(dist, abs(cr-r) + abs(cc-c));
//            }
//            tot_dist += dist;
//        }
//        res = min(res, tot_dist);
//    }
//    cout << res;
//}