//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using pll = pair<long long, long long>;
//
//int g, p;
//int par[100001], checked[100001];
//
//int find(int d) {
//    if (par[d] == d) return d;
//    return par[d] = find(par[d]);
//}
//
//void union_set(int d1, int d2) {
//    int r1 = find(d1);
//    int r2 = find(d2);
//
//    if (r1 == r2) return;
//    if (r1 < r2) par[r2] = r1;
//    else par[r1] = r2;
//}
//
//int main() {
//    fast_io;
//    cin >> g >> p;
//
//    for (int i = 1; i <= g; i++) par[i] = i;
//
//    int res = 0;
//    for (int i = 1; i <= p; i++) {
//        int num; cin >> num;
//        if (num > 1) {
//            if (!checked[num]) {
//                checked[num] = 1;
//                union_set(num, num-1);
//            }else {
//                int root = find(num);
//                if (!checked[root]) {
//                    checked[root] = 1;
//                    if (root > 1) union_set(root, root-1);
//                }else break;
//            }
//        }
//        else if (!checked[num]) {
//            checked[num] = 1;
//        }else break;
//        res++;
//    }
//    cout << res;
//}