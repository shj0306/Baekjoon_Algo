//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, m;
//char zone[1001][1001];
//int p[1000001];
//
//int find(int d) {
//    if (p[d] == d) return d;
//    return p[d] = find(p[d]);
//}
//
//void union_set(int d1, int d2) {
//    int r1 = find(d1);
//    int r2 = find(d2);
//    if (r1 == r2) return;
//
//    if (r1 < r2) p[r2] = p[r1];
//    else p[r1] = p[r2];
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    int idx = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> zone[i][j];
//            p[idx++] = idx;
//        }
//    }
//
//    int res = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            int d1 = i * m + j, d2;
//            if (zone[i][j] == 'U') {
//                d2 = (i-1) * m + j;
//                if (find(d1) == find(d2)) res++;
//                else union_set(d1, d2);
//            }else if (zone[i][j] == 'L') {
//                d2 = i * m + j-1;
//                if (find(d1) == find(d2)) res++;
//                else union_set(d1,d2);
//            }else if (zone[i][j] == 'R') {
//                d2 = i * m + j+1;
//                if (find(d1) == find(d2)) res++;
//                else union_set(d1,d2);
//            }else if (zone[i][j] == 'D') {
//                d2 = (i+1) * m + j;
//                if (find(d1) == find(d2)) res++;
//                else union_set(d1,d2);
//            }
//        }
//    }
//
//    cout << res;
//}