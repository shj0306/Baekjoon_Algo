//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int n, m, k;
//
//struct Info {
//    int M, S, D;
//};
//
//struct Info2 {
//    int R, C, M, S, D;
//};
//int dir[8][2] = {{-1, 0},
//                 {-1, 1},
//                 {0,  1},
//                 {1,  1},
//                 {1,  0},
//                 {1,  -1},
//                 {0,  -1},
//                 {-1, -1}};
//
//vector<Info> arr[51][51];
//queue<Info2> q;
//
//void move_fireball() {
//    int sz = q.size();
//    while(!q.empty()){
//        auto[r, c, mi, si, di] = q.front();
//        q.pop();
//        int nr = r, nc = c;
//
//        nr += si * dir[di][0];
//        nc += si * dir[di][1];
//
//        nr %= n; nc %= n;
//        if (nr <= 0) nr += n;
//        if (nc <= 0) nc += n;
//
//        arr[nr][nc].push_back({mi, si, di});
//    }
//}
//
//void update_fireball() {
//    for (int r = 1; r <= n; r++) {
//        for (int c = 1; c <= n; c++) {
//            if (arr[r][c].empty()) continue;
//            if (arr[r][c].size() >= 2) {
//                int total_m = 0, total_s = 0, sz = arr[r][c].size();
//                bool is_all = true;
//                int prev = -1;
//                for (auto[mi, si, di]: arr[r][c]) {
//                    total_m += mi;
//                    total_s += si;
//                    if (prev != -1 && (prev % 2 && di % 2 == 0) || (prev % 2 == 0 && di % 2)) is_all = false;
//                    prev = di;
//                }
//                arr[r][c].clear();
//                for (int i = 0; i < 8; i += 2) {
//                    int new_m = total_m / 5;
//                    int new_s = total_s / sz;
//                    if (new_m == 0) break;
//
//                    if (is_all) q.push({r,c,new_m, new_s, i});
//                    else q.push({r,c,new_m, new_s, i + 1});
//                }
//            }else { //size == 1
//                auto [mi, si, di] = arr[r][c][0];
//                q.push({r,c,mi,si,di});
//                arr[r][c].clear();
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m >> k;
//
//    for (int i = 0; i < m; i++) {
//        int ri, ci, mi, si, di;
//        cin >> ri >> ci >> mi >> si >> di;
//        q.push({ri, ci, mi, si, di});
//    }
//
//    for (int i = 0; i < k; i++) {
//        move_fireball();
//        update_fireball();
//    }
//
//    int res = 0;
//    while(!q.empty()) {
//        auto [r,c,mi,si,di] = q.front();
//        q.pop();
//        res += mi;
//    }
//    cout << res;
//}