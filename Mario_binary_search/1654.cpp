//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, K;
//vector<int> line;
//
//int main() {
//    fast_io;
//    cin >> K >> N;
//    line.resize(K);
//    for (int i = 0; i < K; i++) {
//        cin >> line[i];
//    }
//    ll l = 1, r = 2147483647, mid, res = 1;
//
//    while(l <= r) {
//        //만들 수 있는 랜선의 길이
//        mid = (l + r) / 2;
//        ll cnt = 0;
//        for (int i = 0; i < K; i++)
//            cnt += line[i] / mid;
//        if (cnt >= N) {
//            res = max(res, mid);
//            l = mid + 1;
//        }else r = mid - 1;
//    }
//
//    cout << res;
//}