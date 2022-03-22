//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N, M, k;
//int a[1025][1025];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            int num; cin >> num;
//            a[i][j] = a[i][j-1] + a[i-1][j] - a[i-1][j-1] + num;
//        }
//    }
//    cin >> k;
//    for (int i = 1; i <= k; i++) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << a[x2][y2] - (a[x1-1][y2] + a[x2][y1-1] - a[x1-1][y1-1]) << '\n';
//    }
//}