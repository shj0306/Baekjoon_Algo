//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, res = 1e9, money;
//int fb[11][11];
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//bool used[11][11];
//vector<pii> tmp;
//vector<vector<pii>> combi;
//
//void select_points(int r, int c) {
//    if (tmp.size() == 3) {
//        combi.push_back(tmp);
//        return;
//    }
//
//    for (int i = r; i < N; i++) {
//        for (int j = 2; j < N; j++) {
//            if (i == r && j < c) continue;
//            if (!used[i][j]) {
//                used[i][j] = true;
//                tmp.emplace_back(i,j);
//                select_points(i,j);
//                tmp.pop_back();
//                used[i][j] = false;
//            }
//        }
//    }
//}
//
//bool check(int r, int c) {
//    if (used[r][c]) return false;
//    used[r][c] = true;
//    money += fb[r][c];
//    for (int dir = 0; dir < 4; dir++) {
//        int nr = r + dy[dir];
//        int nc = c + dx[dir];
//        if (used[nr][nc]) return false;
//        used[nr][nc] = true;
//        money += fb[nr][nc];
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> fb[i][j];
//        }
//    }
//    select_points(2,2);
//    for (auto &comb : combi) {
//        bool is_possible = true;
//        money = 0;
//        memset(used, false, sizeof(used));
//        for (auto [r,c] : comb) {
//            if (!check(r,c)) {
//                is_possible = false;
//                break;
//            }
//        }
//        if (is_possible) res = min(res, money);
//    }
//    cout << res;
//}
///*
// * 서로 다른 세 씨앗이 모두 꽃이 피게 하면서 가장 싼 가격
// * 씨앗은 서로 다른 위치에 심어야 한다.
// * 꽃잎이 겹치지 않게 심어야 한다.
// * 꽃잎이 화단 밖으로 나가지 않게 심어야 한다.
// */