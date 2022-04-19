//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, max_val, total;
//vector<int> lec;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    lec.resize(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> lec[i];
//        max_val = max(max_val, lec[i]);
//        total += lec[i];
//    }
//
//    int l = max_val, r = total, mid;
//    int res = r;
//    while(l <= r) {
//        //1개의 블루레이 크기
//        mid = (l + r) / 2;
//
//        int cur_length = 0, cnt = 0;
//        for (int i = 0; i < N; i++) {
//            if (cur_length + lec[i] <= mid)
//                cur_length += lec[i];
//            else {
//                cnt++;
//                cur_length = lec[i];
//            }
//        }
//        if (cur_length) cnt++;
//        if (cnt <= M) {
//            res = min(res, mid);
//            r = mid - 1;
//        }else l = mid + 1;
//    }
//    cout << res;
//}