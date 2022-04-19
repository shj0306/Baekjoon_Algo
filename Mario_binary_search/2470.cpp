//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int INF = 2e9;
//int N;
//// two pointer로 하는게 훨 쉬움
//int main() {
//    fast_io;
//    cin >> N;
//    vector<int> sol(N);
//
//    for (int i = 0; i < N; i++) cin >> sol[i];
//    sort(all(sol));
//
//    pii res;
//    int min_diff = INF;
//    for (int i = 0; i < N-1; i++) {
//        int val = sol[i];
//        int idx = lower_bound(all(sol), -val) - begin(sol);
//        int final_idx;
//        if (idx == N) final_idx = N-1;
//        else if (idx > i+1) {
//            int dif1 = abs(val + sol[idx]);
//            int dif2 = abs(val + sol[idx-1]);
//            if (dif1 > dif2) final_idx = idx-1;
//            else final_idx = idx;
//        }else if (idx == i+1) final_idx = idx;
//        else final_idx = i + 1;
//
//        if (min_diff > abs(val + sol[final_idx])) {
//            min_diff = abs(val + sol[final_idx]);
//            res = {val, sol[final_idx]};
//        }
//    }
//    cout << res.first << ' ' << res.second << '\n';
//}