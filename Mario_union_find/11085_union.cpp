//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//int n, m, p[1000];
//int bw, cw;
//
//int find(int d) {
//    if (p[d] == d) return d;
//    return p[d] = find(p[d]);
//}
//
//void union_set(int d1, int d2) {
//    int r1 = find(d1);
//    int r2 = find(d2);
//
//    if (r1 == r2) return;
//    p[r1] = r2;
//}
//
//struct Info {
//    int src,des,width;
//};
//
//bool cmp(Info i1, Info i2) {
//    return i1.width > i2.width;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m >> bw >> cw;
//
//    vector<Info> vec;
//    for (int i = 0; i < n; i++) p[i] = i;
//
//    for (int i = 1; i <= m; i++) {
//        int u, v, cost; cin >> u >> v >> cost;
//        vec.push_back({u,v,cost});
//    }
//
//    sort(all(vec), cmp);
//
//    for (auto [src, des, width] : vec) {
//        union_set(src, des);
//        if (find(bw) == find(cw)) {
//            cout << width << '\n';
//            return 0;
//        }
//    }
//}