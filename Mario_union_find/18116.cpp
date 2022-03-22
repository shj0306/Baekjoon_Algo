//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int n, p[1000001], cnt[1000001];
//
//int find(int d) {
//    if (p[d] == d) return d;
//    return p[d] = find(p[d]);
//}
//
//void merge(int p1, int p2) {
//    int r1 = find(p1);
//    int r2 = find(p2);
//
//    if (r1 == r2) return;
//    if (r1 < r2) {
//        p[r2] = p[r1];
//        cnt[r1] += cnt[r2];
//    }else {
//        p[r1] = p[r2];
//        cnt[r2] += cnt[r1];
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    for (int i = 1; i <= 1e6; i++) {
//        p[i] = i; cnt[i] = 1;
//    }
//
//    for (int i = 1; i <= n; i++) {
//        char q; int a, b, c;
//        cin >> q;
//        if (q == 'I') {
//            cin >> a >> b;
//            merge(a,b);
//        }else if (q == 'Q') {
//            cin >> c;
//            cout << cnt[find(c)] << '\n';
//        }
//    }
//}