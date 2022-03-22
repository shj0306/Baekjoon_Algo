//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int N, M, max_val, min_val = 10001;
//vector<int> arr;
//
//int possible(int grade) {
//    int cnt = 1;
//    int _min = arr[0], _max = arr[0];
//    for (int i = 1; i < N; i++) {
//        if (arr[i] > _max) _max = arr[i];
//        if (arr[i] < _min) _min = arr[i];
//        if (_max - _min > grade) {
//            cnt++;
//            _max = _min = arr[i];
//        }
//    }
//    return cnt <= M;
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    arr = vector<int>(N);
//    for (int i = 0; i < N; i++) {
//        cin >> arr[i];
//        max_val = max(max_val, arr[i]);
//        min_val = min(min_val, arr[i]);
//    }
//
//    int lo = 0, hi = max_val - min_val;
//    int ans = hi;
//    while(lo <= hi) {
//        int mid = (lo+hi) / 2;
//        if (possible(mid)) {
//            hi = mid - 1;
//            ans = min(ans, mid);
//        }else lo = mid + 1;
//
//    }
//    cout << ans;
//}