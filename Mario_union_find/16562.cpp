//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 10001;
//int n, m, k;
//int cost[MAX], p[MAX];
//
//int find(int f) {
//    if (p[f] == f) return f;
//    return p[f] = find(p[f]);
//}
//
//void union_set(int f1, int f2) {
//    int r1 = find(f1);
//    int r2 = find(f2);
//
//    if (r1 == r2) return;
//    if (cost[r1] < cost[r2]) p[r2] = r1;
//    else p[r1] = r2;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m >> k;
//
//    for (int i = 1; i <= n; i++) {
//        cin >> cost[i];
//        p[i] = i;
//    }
//
//    for (int i = 1; i <= m; i++) {
//        int u, v; cin >> u >> v;
//        union_set(u,v);
//    }
//
//    int ans = 0;
//    for (int i = 1; i <= n; i++) {
//        if (p[i] == i) ans += cost[i];
//    }
//    if (ans <= k) cout << ans;
//    else cout << "Oh no";
//}