//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 1e9;
//
////op[i] : +, -, *, /
//int N, op[4], arr[12];
//int max_val = -INF;
//int min_val = INF;
//
//void solve(int idx, int res) {
//    if (idx == N) {
//        max_val = max(max_val, res);
//        min_val = min(min_val, res);
//        return;
//    }
//    for (int i = 0; i < 4; i++) {
//        if (op[i] == 0) continue;
//        op[i]--;
//        switch(i) {
//            case 0:
//                solve(idx+1, res + arr[idx]);
//                break;
//            case 1:
//                solve(idx+1, res - arr[idx]);
//                break;
//            case 2:
//                solve(idx+1, res * arr[idx]);
//                break;
//            case 3:
//                int val;
//                if (res < 0) {
//                    val = abs(res) / arr[idx];
//                    val = -val;
//                }else val = res / arr[idx];
//                solve(idx+1, val);
//                break;
//            default:
//                break;
//        }
//        op[i]++;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    for (int i = 0; i < 4; i++) cin >> op[i];
//
//    solve(1,arr[0]);
//    cout << max_val << '\n' << min_val;
//}