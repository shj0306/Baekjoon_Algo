//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        if (i == 1) {
//            for (int j = 1; j <= N; j++) {
//                if (j == N) cout << '*';
//                else cout << ' ';
//            }
//        }
//        else {
//            for (int j = 1; j <= N - i; j++) cout << ' ';
//            for (int j = 1; j <= 2 * i - 1; j++) {
//                if (j == 1 || j == 2 * i - 1) cout << '*';
//                else cout << ' ';
//            }
//        }
//        cout << '\n';
//    }
//}