//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//const long long INF = 3e9;
//
//struct ANS {
//    int x1;
//    int x2;
//    int x3;
//};
//vector<long long> sol;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        int val; cin >> val;
//        sol.push_back(val);
//    }
//    sort(all(sol));
//
//    long long min_val = INF, new_val = INF;
//    ANS ans{};
//    for (int i = 0; i < N-2; i++) {
//        for (int j = i+2; j < N; j++) {
//            long long val = sol[i] + sol[j];
//            int idx = lower_bound(begin(sol)+i+1, begin(sol)+j-1, -val) - begin(sol);
//            if (idx > i + 1 && abs(sol[idx-1]+val) < abs(sol[idx]+val)) idx--;
//            new_val = abs(val + sol[idx]);
//            if (min_val > new_val) {
//                min_val = new_val;
//                ans = {i, idx, j};
//            }
//            if (new_val == 0){
//                cout << sol[i] << ' ' << sol[idx] << ' ' << sol[j];
//                return 0;
//            }
//        }
//    }
//    cout << sol[ans.x1] << ' ' << sol[ans.x2] << ' ' << sol[ans.x3];
//}
///*
// * -24 -6 -3 -2 61 98 100
// * 1. two-pointer O(N^2)
// * 가장 작은 값 고정 후 투 포인터 활용
// * 2. binary-search O(N^2logN)
// * 정렬 후 두 수(i,j)를 고른 후 max(i,j)+1 ~ end까지 이분탐색 실행
// */