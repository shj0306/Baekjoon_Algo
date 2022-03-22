//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int r,c,n,res;
//bool used[100];
//vector<pii> sticker;
//vector<int> tmp;
//vector<pii> combi; //스티커 2장 조합
//
//bool is_possible(int r1, int c1, int r2, int c2) {
//
//    //그대로 사용
//    if (c1 + c2 <= c && max(r1,r2) <= r) return true;
//    if (r1 + r2 <= r && max(c1,c2) <= c) return true;
//    //1만 뒤집음
//    if (r1 + c2 <= c && max(c1,r2) <= r) return true;
//    if (c1 + r2 <= r && max(r1,c2) <= c) return true;
//    //2만 뒤집음
//    if (c1 + r2 <= c && max(r1,c2) <= r) return true;
//    if (r1 + c2 <= r && max(c1,r2) <= c) return true;
//    //둘다 뒤집음
//    if (r1 + r2 <= c && max(c1,c2) <= r) return true;
//    if (c1 + c2 <= r && max(r1,r2) <= c) return true;
//    return false;
//}
//
//void select_sticker(int idx) {
//    if (tmp.size() == 2) {
//        combi.emplace_back(tmp[0],tmp[1]);
//        return;
//    }
//    for (int i = idx; i < n; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            tmp.push_back(i);
//            select_sticker(i);
//            used[i] = false;
//            tmp.pop_back();
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> r >> c >> n;
//    for (int i = 0; i < n; i++) {
//        int row, col; cin >> row >> col;
//        sticker.emplace_back(row,col);
//    }
//
//    select_sticker(0);
//
//    for (auto[id1,id2] : combi) {
//        auto[r1,c1] = sticker[id1];
//        auto[r2,c2] = sticker[id2];
//        if (is_possible(r1,c1,r2,c2)) res = max(res, r1*c1+r2*c2);
//    }
//    cout << res;
//}
///*
// * 스티커 2장 뽑는다.
// * 1) 가로로 길게 늘이는 경우
// * 두 스티커 세로 길이 중 더 긴 길이 <= 모눈종이 세로 길이
// * 두 스티커 가로 길이 합 <= 모눈종이 가로길이
// * 2) 세로로 길게 늘이는 경우
// * 두 스티커 가로 길이 중 더 긴 길이 <= 모눈종이 가로 길이
// * 두 스티커 세로 길이 합 <= 모눈종이 세로길이
// */