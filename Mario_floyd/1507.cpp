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
//                if (dist[i][j] > dist[i][k] + dist[k][j]) //���
//                    return -1;
//                else if (dist[i][j] == dist[i][k] + dist[k][j]) {
//                    //i���� j���� ���� �ִܰ�� �߰��� k�� �� �� �ִ� ���
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