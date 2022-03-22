//#include <bits/stdc++.h>
//#include <unordered_map>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//const int MAX = 2e5+1;
//
//int n, t, p[MAX], c[MAX];
//
//int find(int f) {
//    if (p[f] == f) return f;
//    return p[f] = find(p[f]);
//}
//
//int union_set(int f1, int f2) {
//    int r1 = find(f1);
//    int r2 = find(f2);
//
//    if (r1 == r2) return c[r1];
//    if (r1 < r2) {
//        p[r2] = p[r1];
//        c[r1] += c[r2];
//        return c[r1];
//    }
//    else {
//        p[r1] = p[r2];
//        c[r2] += c[r1];
//        return c[r2];
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> t;
//    unordered_map<string, int> um;
//
//    while(t--) {
//        um.clear();
//        cin >> n;
//        int idx = 1;
//        for (int i = 1; i <= n * 2; i++) {
//            p[i] = i; c[i] = 1;
//        }
//        for (int i = 1; i <= n; i++) {
//            string f1, f2; cin >> f1 >> f2;
//            if (um.find(f1) == um.end()) um[f1] = idx++;
//            if (um.find(f2) == um.end()) um[f2] = idx++;
//            cout << union_set(um[f1], um[f2]) << '\n';
//        }
//    }
//}