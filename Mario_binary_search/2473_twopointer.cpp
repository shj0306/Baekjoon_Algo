//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using ll = long long;
//const ll INF = 3e9;
//
//struct ANS {
//    ll x1;
//    ll x2;
//    ll x3;
//};
//vector<ll> sol;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        int val; cin >> val;
//        sol.push_back(val);
//    }
//    sort(all(sol));
//    ll min_val = INF;
//    ANS ans{};
//
//    for (int i = 0; i < N-2; i++) {
//        long long sol1 = sol[i];
//        int st = i+1, en = N-1;
//        while(st < en) {
//            long long new_val = sol1 + sol[st] + sol[en];
//            if (min_val > abs(new_val)) {
//                ans = {sol1, sol[st], sol[en]};
//                min_val = abs(new_val);
//            }
//            if (new_val > 0) en--;
//            else if (new_val < 0) st++;
//            else {
//                cout << sol1 << ' ' << sol[st] << ' ' << sol[en];
//                return 0;
//            }
//        }
//    }
//    cout << ans.x1 << ' ' << ans.x2 << ' ' << ans.x3;
//}
///*
// * -24 -6 -3 -2 61 98 100
// * 1. two-pointer O(N^2)
// * 가장 작은 값 고정 후 투 포인터 활용
// * 2. binary-search O(N^2logN)
// * 정렬 후 두 수(i,j)를 고른 후 max(i,j)+1 ~ end까지 이분탐색 실행
// */