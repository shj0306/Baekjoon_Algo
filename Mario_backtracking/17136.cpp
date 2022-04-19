//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//
////https://11001.tistory.com/21
//int N, paper[11][11], check[11][11];
//int unit_paper[6], ans = 26;
//
//bool is_promising(int r, int c, int k) {
//    for (int i = r; i < r + k; i++) {
//        for (int j = c; j < c + k; j++) {
//            if (!paper[i][j]) return false;
//        }
//    }
//    return true;
//}
//
//void process_paper(int r, int c, int k, int num) {
//    for (int i = r; i < r + k; i++) {
//        for (int j = c; j < c + k; j++) {
//            paper[i][j] = num;
//        }
//    }
//}
//
//void back_tracking(int x, int y, int cnt) {
//    while(paper[y][x] == 0) {
//        if (++x > 10) {
//            if (++y > 10) {
//                ans = min(ans, cnt);
//                return;
//            }
//            x = 1;
//        }
//    }
//
//    //가지 치기
//    if (ans <= cnt) return;
//
//    //모든 크기 내림차순 시도
//    for (int k = 5; k >= 1; k--) {
//        if (x + k > 11 || y + k > 11) continue;
//        if (unit_paper[k] < 5 && is_promising(y, x, k)) {
//            process_paper(y, x, k, 0);
//            unit_paper[k]++;
//
//            back_tracking(x, y, cnt + 1);
//
//            process_paper(y, x, k, 1);
//            unit_paper[k]--;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 10; j++) {
//            cin >> paper[i][j];
//        }
//    }
//    back_tracking(1, 1, 0);
//    cout << (ans == 26 ? -1 : ans) << '\n';
//}