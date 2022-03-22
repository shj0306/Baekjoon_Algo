//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, dist[21][21];
//
//int floyd() {
//    int res = 0;
//    for (int i = 1; i <= N; i++) {
//        for (int j = i+1; j <= N; j++) {
//            bool is_road = true;
//            if (i == j) continue;
//            for (int k = 1; k <= N; k++) {
//                if (k == i || k == j) continue;
//                if (dist[i][j] > dist[i][k] + dist[k][j]) //모순
//                    return -1;
//                else if (dist[i][j] == dist[i][k] + dist[k][j]) {
//                    //i에서 j까지 가는 최단경로 중간에 k가 들어갈 수 있는 경우
//                    is_road = false;
//                    break;
//                }
//            }
//            if (is_road) res += dist[i][j];
//        }
//    }
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= N; j++) {
//            cin >> dist[i][j];
//        }
//    }
//
//    cout << floyd();
//}