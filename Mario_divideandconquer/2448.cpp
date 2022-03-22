//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//char db[][6] = {
//        "  *  ",
//        " * * ",
//        "*****"
//};
//
//char MAP[3100][6200];
//
//void solve(int n, int y, int x) {
//    if (n == 1) {
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 5; j++) {
//                MAP[y+i][x+j] = db[i][j];
//            }
//        }
//        return;
//    }
//    solve(n/2,y,x+3*n/2);
//    solve(n/2,y+3*n/2,x);
//    solve(n/2,y+3*n/2,x+3*n);
//}
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//    solve(n/3,0,0);
//    for (int i = 0; i < n; i++, puts(" ")) {
//        for (int j = 0; j < 2 * n-1; j++) {
//            cout << (MAP[i][j] == '*' ? '*' : ' ');
//        }
//    }
//}