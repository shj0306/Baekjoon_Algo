//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int N, paper[11][11], used[6];
//vector<pii> one;
//int res = 26; //5종류 5개씩
//
//bool check(int r, int c, int i) {
//    for (int ii = r; ii < r + i; ii++) {
//        for (int jj = c; jj < c + i; jj++) {
//            if (ii < 1 || ii > 10 || jj < 1 || jj > 10) return false;
//            if (paper[ii][jj] == 0) return false;
//        }
//    }
//    return true;
//}
//
//void process_paper(int r, int c, int ii, int val) {
//    for (int i = r; i < r + ii; i++) {
//        for (int j = c; j < c + ii; j++) {
//            paper[i][j] = val;
//        }
//    }
//}
//
//void solve(int idx, int cnt) {
//    if (idx == N) {
//        res = min(res, cnt);
//        return;
//    }
//    if (res <= cnt) return; //back_tracking
//
//    auto [r,c] = one[idx];
//    if (paper[r][c] == 1) {
//        for (int num = 5; num >= 1; num--) {
//            if (used[num] < 5 && check(r,c,num)) {
//                process_paper(r,c,num,0);
//                used[num]++;
//                solve(idx+1, cnt+1);
//                used[num]--;
//                process_paper(r,c,num,1);
//            }
//        }
//    }else solve(idx+1, cnt);
//}
//
//int main() {
//    fast_io;
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 10; j++) {
//            cin >> paper[i][j];
//            if (paper[i][j] == 1) {
//                N++;
//                one.emplace_back(i,j);
//            }
//        }
//    }
//
//    solve(0,0);
//    cout << (res == 26 ? -1 : res) << '\n';
//}