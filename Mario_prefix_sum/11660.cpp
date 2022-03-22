//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 1025;
//int N, M;
//int arr[MAX][MAX];
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> arr[i][j];
//            arr[i][j] += arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
//        }
//    }
//
//    for (int i = 1; i <= M; i++) {
//        int r1, c1, r2, c2;
//        cin >> r1 >> c1 >> r2 >> c2;
//        cout << arr[r2][c2] - (arr[r1-1][c2] + arr[r2][c1-1]) + arr[r1-1][c1-1] << '\n';
//    }
//}