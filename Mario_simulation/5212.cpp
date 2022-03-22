//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//int r, c;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//char island[11][11];
//char island_cpy[11][11];
//vector<pii> isl;
//
//bool is_in(int ro, int co) {
//    return ro >= 1 && ro <= r && co >= 1 && co <= c;
//}
//
//bool is_removed(int ro, int co) {
//    int cnt = 0;
//    for (int i = 0; i < 4; i++) {
//        int nr = ro + dy[i];
//        int nc = co + dx[i];
//        if (!is_in(nr,nc) || island[nr][nc] == '.') cnt++;
//    }
//    return cnt >= 3;
//}
//
//bool cmp(pii p, pii q) {
//    if (p.second == q.second) return p.first < q.first;
//    return p.second > q.second;
//}
//
//pii ret_row() {
//    int min_r = r+1, max_r = 0;
//    for (auto[row, col] : isl) {
//        min_r = min(min_r, row);
//        max_r = max(max_r, row);
//    }
//    return {min_r, max_r};
//}
//
//pii ret_col() {
//    int min_c = c+1, max_c = 0;
//    for (auto[row, col] : isl) {
//        min_c = min(min_c, col);
//        max_c = max(max_c, col);
//    }
//    return {min_c, max_c};
//}
//
//int main() {
//    fast_io;
//    cin >> r >> c;
//    for (int i = 1; i <= r; i++) {
//        for (int j = 1; j <= c; j++) {
//            cin >> island[i][j];
//        }
//    }
//
//    for (int i = 1; i <= r; i++) {
//        for (int j = 1; j <= c; j++) {
//            if (island[i][j] == 'X') {
//                if (is_removed(i, j)) island_cpy[i][j] = '.';
//                else {
//                    island_cpy[i][j] = 'X';
//                    isl.emplace_back(i,j);
//                }
//            }else island_cpy[i][j] = '.';
//        }
//    }
//
//    auto [min_r, max_r] = ret_row();
//    auto [min_c, max_c] = ret_col();
//
//    for (int i = min_r; i <= max_r; i++) {
//        for (int j = min_c; j <= max_c; j++) {
//            cout << island_cpy[i][j];
//        }
//        cout << '\n';
//    }
//}