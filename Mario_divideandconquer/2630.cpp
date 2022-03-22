//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n, paper[129][129], blue, white;
//
//bool is_cut(int sr, int sc, int er, int ec) {
//
//    int prev = -1;
//    for (int i = sr; i <= er; i++) {
//        for (int j = sc; j <= ec; j++) {
//            if (prev == -1) prev = paper[i][j];
//            else if (paper[i][j] != prev) return false;
//        }
//    }
//    return true;
//}
//
//void solve(int sr, int sc, int er, int ec) {
//    if (!is_cut(sr,sc,er,ec)) {
//        solve(sr,sc,sr+(er-sr)/2, sc+(ec-sc)/2);
//        solve(sr,sc+(ec-sc)/2+1,sr+(er-sr)/2, ec);
//        solve(sr+(er-sr)/2+1, sc, er, sc+(ec-sc)/2);
//        solve(sr+(er-sr)/2+1,sc+(ec-sc)/2+1,er,ec);
//    }else paper[sr][sc] == 1 ? blue++ : white++;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> paper[i][j];
//        }
//    }
//    solve(1,1,n,n);
//    cout << white << '\n' << blue;
//}