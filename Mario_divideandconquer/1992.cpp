//#include <bits/stdc++.h>
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//char paper[65][65];
//
//bool check(int x, int y, int n) {
//
//    for (int i = x; i < x + n; i++) {
//        for (int j = y; j < y + n; j++) {
//            if (paper[x][y] != paper[i][j]) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//void solved(int x, int y, int n) {
//
//    if (check(x,y,n)) {
//        cout << paper[x][y];
//        return;
//    }else {
//        cout << "(";
//        int z = n / 2;
//        solved(x, y, z);
//        solved(x , y + z, z);
//        solved(x + z, y, z);
//        solved(x + z, y + z, z);
//        cout << ")" ;
//    }
//}
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> paper[i][j];
//        }
//    }
//
//    solved(0, 0, n);
//}