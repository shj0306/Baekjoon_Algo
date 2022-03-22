//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 1e6+1;
//int n, m;
//int p[MAX];
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
//    if (r1 < r2) p[r2] = r1;
//    else p[r1] = r2;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) p[i] = i;
//    for (int i = 1; i <= m; i++) {
//        int func, n1, n2;
//        cin >> func >> n1 >> n2;
//        if (func) cout << (find(n1) == find(n2) ? "YES" : "NO") << '\n';
//        else union_set(n1, n2);
//    }
//}