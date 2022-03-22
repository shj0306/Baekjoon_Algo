//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int K, N; cin >> K >> N;
//    vector<int> v(K);
//    for (int i = 0; i < K; i++) cin >> v[i];
//    long long st = 1, en = 0x7fffffff;
//    while(st < en) {
//        long long mid = (st+en+1) / 2; //최대 랜선 길이
//        long long cnt = 0;
//        for (auto line : v) cnt += line / mid;
//        if (cnt >= N) st = mid;
//        else en = mid - 1;
//    }
//    cout << st;
//}