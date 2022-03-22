//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n, m, p[201];
//vector<int> trip;
//
//int find(int d) {
//    if (p[d] == d) return d;
//    return p[d] = find(p[d]);
//}
//
//void union_set(int n1, int n2) {
//    int r1 = find(n1);
//    int r2 = find(n2);
//
//    if (r1 == r2) return;
//    p[r1] = r2;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) p[i] = i;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            int a; cin >> a;
//            if (a) union_set(i,j);
//        }
//    }
//
//    for (int i = 0; i < m; i++) {
//        int city; cin >> city;
//        trip.push_back(city);
//    }
//
//    int root = -1;
//    for (int i = 0; i < m; i++) {
//        int a; cin >> a;
//        if (!i) root = find(a);
//        else if (root != find(a)) {
//            cout << "NO" << '\n';
//            return 0;
//        }
//    }
//    cout << "YES" << '\n';
//}