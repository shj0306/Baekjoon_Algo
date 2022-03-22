//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int N, M, arr[1025][1025];
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            int num; cin >> num;
//            arr[i][j] = arr[i-1][j] + arr[i][j-1] + num - arr[i-1][j-1];
//        }
//    }
//
//    for (int i = 1; i <= M; i++) {
//        int x1,y1,x2,y2;
//        cin >> y1 >> x1 >> y2 >> x2;
//        cout << arr[y2][x2] - (arr[y2][x1-1] + arr[y1-1][x2] - arr[y1-1][x1-1]) << '\n';
//    }
//}