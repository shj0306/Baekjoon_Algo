//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//using ll = long long;
//int N;
//
//int main() {
//    fast_io;
//    cin >> N;
//    if (N == 1) puts("*");
//    else if (N % 2 == 0) {
//        for (int i = 1; i <= 2 * N; i++) {
//            if (i % 2) {
//                for (int j = 1; j <= N-1; j++) {
//                    if (j % 2) cout << '*';
//                    else cout << ' ';
//                }
//            }
//            else {
//                for (int j = 1; j <= N; j++) {
//                    if (j % 2) cout << ' ';
//                    else cout << '*';
//                }
//            }
//            cout << '\n';
//        }
//    }else {
//        for (int i = 1; i <= 2 * N; i++) {
//            if (i % 2) {
//                for (int j = 1; j <= N; j++) {
//                    if (j % 2) cout << '*';
//                    else cout << ' ';
//                }
//            }else {
//                for (int j = 1; j <= N - 1; j++) {
//                    if (j % 2) cout << ' ';
//                    else cout << '*';
//                }
//            }
//            cout << '\n';
//        }
//    }
//}
