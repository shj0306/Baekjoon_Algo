//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int R, C, t;
//pii room[51][51];
//int dr[] = {0, 0, 1, -1};
//int dc[] = {1, -1, 0, 0};
//queue<pii> dust;
//struct AIR {
//    pii top;
//    pii bottom;
//};
//AIR air_cleaner{};
//bool is_in(int r, int c) {
//    return r >= 1 && r <= R && c >= 1 && c <= C;
//}
//
//void diffuse_dust() {
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            if (room[i][j].first > 0) {
//                int cnt = 0;
//                int val = room[i][j].first / 5;
//                for (int k = 0; k < 4; k++) {
//                    int nr = i + dr[k];
//                    int nc = j + dc[k];
//                    if (is_in(nr,nc) && room[nr][nc].first != -1) {
//                        room[nr][nc].second += val;
//                        cnt++;
//                    }
//                }
//                room[i][j].first -= val * cnt;
//            }
//        }
//    }
//
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            if (room[i][j].second > 0) {
//                room[i][j].first += room[i][j].second;
//                room[i][j].second = 0;
//            }
//        }
//    }
//}
//
//void air_cleaner_on() {
//    auto[top_r, top_c] = air_cleaner.top;
//    auto[bot_r, bot_c] = air_cleaner.bottom;
//
//    for (int i = 1; i < C; i++) {
//        //¿À¸¥ÂÊ 1Ä­
//        if (i == top_c) continue;
//        if (room[top_r][i].first > 0) {
//            if (i + 1 != top_c) room[top_r][i + 1].second = room[top_r][i].first;
//        }
//        room[top_r][i].first = room[top_r][i].second;
//        room[top_r][i].second = 0;
//    }
//    for (int i = top_r; i > 1; i--) {
//        //À§ÂÊ 1Ä­
//        if (top_c == C) continue;
//        if (room[i][C].first > 0) room[i - 1][C].second = room[i][C].first;
//        room[i][C].first = room[i][C].second;
//        room[i][C].second = 0;
//    }
//    for (int i = C; i > 1; i--) {
//        //¿ÞÂÊ 1Ä­
//        if (room[1][i].first > 0) room[1][i - 1].second = room[1][i].first;
//        room[1][i].first = room[1][i].second;
//        room[1][i].second = 0;
//    }
//    for (int i = 1; i < top_r; i++) {
//        //¾Æ·¡ 1Ä­
//        if (room[i][1].first > 0) {
//            if (i+1 != top_r || top_c != 1) room[i+1][1].second = room[i][1].first;
//        }
//        room[i][1].first = room[i][1].second;
//        room[i][1].second = 0;
//    }
//
//    for (int i = 1; i < C; i++) {
//        //right
//        if (i == bot_c) continue;
//        if (room[bot_r][i].first > 0) {
//            if (i+1 != bot_c) room[bot_r][i+1].second = room[bot_r][i].first;
//        }
//        room[bot_r][i].first = room[bot_r][i].second;
//        room[bot_r][i].second = 0;
//    }
//    for (int i = bot_r; i < R; i++) {
//        //bottom
//        if (bot_c == C) continue;
//        if (room[i][C].first > 0) room[i+1][C].second = room[i][C].first;
//        room[i][C].first = room[i][C].second;
//        room[i][C].second = 0;
//    }
//    for (int i = C; i > 1; i--) {
//        //left
//        if (room[R][i].first > 0) room[R][i-1].second = room[R][i].first;
//        room[R][i].first = room[R][i].second;
//        room[R][i].second = 0;
//    }
//    for (int i = R; i > bot_r; i--) {
//        //top
//        if (room[i][1].first > 0) {
//            if (i-1 != bot_r || bot_c != 1) room[i-1][1].second = room[i][1].first;
//        }
//        room[i][1].first = room[i][1].second;
//        room[i][1].second = 0;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> R >> C >> t;
//    bool is_first = true;
//
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            cin >> room[i][j].first;
//            if (room[i][j].first > 0) dust.push({i, j});
//            if (room[i][j].first == -1 && is_first) {
//                is_first = false;
//                air_cleaner.top = {i, j};
//                air_cleaner.bottom = {i+1, j};
//            }
//        }
//    }
//
//    for (int i = 1; i <= t; i++) {
//        diffuse_dust(); //¹Ì¼¼¸ÕÁö È®»ê
//        air_cleaner_on(); //°ø±âÃ»Á¤±â °¡µ¿
//    }
//    int res = 0;
//    for (int i = 1; i <= R; i++) {
//        for (int j = 1; j <= C; j++) {
//            if (room[i][j].first > 0) res += room[i][j].first;
//        }
//    }
//    cout << res;
//}