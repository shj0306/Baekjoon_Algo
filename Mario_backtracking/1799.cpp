//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N,M, res1,res2;
//vector<pii> white;
//vector<pii> black;
//int chess[11][11];
//int bishop[11][11];
//
//bool is_possible(int idx, vector<pii> &v) {
//    auto [row, col] = v[idx];
//    for (int i = 0; i < idx; i++) {
//        auto [r,c] = v[i];
//        if (bishop[r][c] && abs(row - r) == abs(col - c)) return false;
//    }
//    return true;
//}
//
//void solve1(int idx, int cnt) {
//    if (idx == black.size()) {
//        res1 = max(res1, cnt);
//        return;
//    }
//
//    auto [r,c] = black[idx];
//    if (is_possible(idx, black)) {
//        bishop[r][c] = 1;
//        solve1(idx+1,cnt+1);
//        bishop[r][c] = 0;
//        solve1(idx+1,cnt);
//    }else solve1(idx+1, cnt);
//}
//void solve2(int idx, int cnt) {
//    if (idx == white.size()) {
//        res2 = max(res2, cnt);
//        return;
//    }
//    auto [r,c] = white[idx];
//    if (is_possible(idx, white)) {
//        bishop[r][c] = 1;
//        solve2(idx+1,cnt+1);
//        bishop[r][c] = 0;
//        solve2(idx+1,cnt);
//    }else solve2(idx+1, cnt);
//}
//
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> chess[i][j];
//            if (chess[i][j]) {
//                if ((i % 2 && j % 2) || (i % 2 == 0 && j % 2 == 0))
//                    black.emplace_back(i,j);
//                else white.emplace_back(i,j);
//            }
//        }
//    }
//
//    solve1(0,0);
//    solve2(0,0);
//    cout << res1+res2;
//}