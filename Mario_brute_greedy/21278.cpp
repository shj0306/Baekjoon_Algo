//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int INF = 1e9;
//int N, M;
//vector<int> tmp;
//vector<vector<int>> combi;
//bool checked[101];
//int dist[101][101];
//
////플로이드 + 브루트포스
//
//void floyd_warshell() {
//    for (int k = 1; k <= N; k++) {
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//}
//
//void select_pos(int idx) {
//    if (tmp.size() == 2) {
//        combi.push_back(tmp);
//        return;
//    }
//    for (int i = idx; i <= N; i++) {
//        if (!checked[i]) {
//            checked[i] = true;
//            tmp.push_back(i);
//            select_pos(i);
//            tmp.pop_back();
//            checked[i] = false;
//        }
//    }
//}
//
//bool cmp(pii p1, pii p2) {
//    if (p1.first == p2.first) return p1.second < p2.second;
//    return p1.first < p2.first;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            if (i == j) dist[i][j] = 0;
//            else dist[i][j] = INF;
//        }
//    }
//
//    for (int i = 1; i <= M; i++) {
//        int u, v;
//        cin >> u >> v;
//        dist[u][v] = 1;
//        dist[v][u] = 1;
//    }
//    floyd_warshell();
//    select_pos(1);
//
//    int res = INF;
//    vector<pii> ans;
//
//    for (auto & comb : combi) {
//        int hs_chic1 = comb[0];
//        int hs_chic2 = comb[1];
//        int tot_dist = 0;
//        for (int i = 1; i <= N; i++)
//            tot_dist += min(dist[i][hs_chic1] * 2, dist[i][hs_chic2] * 2);
//        if (res > tot_dist) {
//            ans.clear();
//            ans.emplace_back(hs_chic1, hs_chic2);
//            res = tot_dist;
//        }else if (res == tot_dist) ans.emplace_back(hs_chic1, hs_chic2);
//    }
//    if (ans.size() > 1) sort(all(ans), cmp);
//    cout << ans[0].first << ' ' << ans[0].second << ' ' << res;
//}