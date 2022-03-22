//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int N, M; cin >> N >> M;
//    long long max_val = 0;
//    vector<int> vec(N);
//    for (int i = 0; i < N; i++) {
//        cin >> vec[i];
//        max_val = max(max_val, (long long)vec[i]);
//    }
//    long long int st = 1, en = max_val * M;
//    long long int ans = en;
//    while(st <= en) {
//        long long mid = (st+en) / 2; //M명을 심사하는 데 걸린 시간
//        long long cnt = 0;
//        for (auto time : vec) cnt += mid / time;
//        if (cnt >= M) {
//            ans = min(ans, mid);
//            en = mid - 1;
//        }else st = mid + 1;
//    }
//    cout << ans;
//}