//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//const int INF = 1e9;
//
//vector<int> v;
//int N, max_res = -INF, min_res = INF;
//int op[4];
//
//void solve(int idx, int res) {
//    if (idx == N) {
//        max_res = max(max_res, res);
//        min_res = min(min_res, res);
//        return;
//    }
//    for (int i = 0; i < 4; i++) {
//        if (op[i] > 0) {
//            switch(i) {
//                case 0:
//                    op[i]--;
//                    solve(idx+1, res + v[idx]);
//                    op[i]++;
//                    break;
//                case 1:
//                    op[i]--;
//                    solve(idx+1, res - v[idx]);
//                    op[i]++;
//                    break;
//                case 2:
//                    op[i]--;
//                    solve(idx+1, res * v[idx]);
//                    op[i]++;
//                    break;
//                case 3:
//                    if (res < 0) {
//                        int mod = abs(res) / v[idx];
//                        op[i]--;
//                        solve(idx+1, -mod);
//                        op[i]++;
//                    }else {
//                        int mod = res / v[idx];
//                        op[i]--;
//                        solve(idx+1, mod);
//                        op[i]++;
//                    }
//                    break;
//                default:
//                    break;
//            }
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    v = vector<int>(N);
//    for (int i = 0; i < N; i++) cin >> v[i];
//    for (int i = 0; i < 4; i++) cin >> op[i];
//
//    solve(1, v[0]);
//    cout << max_res << '\n' << min_res;
//}