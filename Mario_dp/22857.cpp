//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//const int MAX = 1e6;
//int n,k;
//int arr[MAX];
//int main() {
//    fast_io;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    int st = 0, en = 0, odd_cnt = 0;
//    int res = 0;
//    while(st <= en && en < n) {
//        if (arr[en] % 2) {
//            if (odd_cnt >= k) {
//                res = max(res, en-st-odd_cnt);
//                if (arr[st] % 2) odd_cnt--;
//                st++;
//            }else {
//                odd_cnt++;
//                en++;
//            }
//        }else en++;
//    }
//
//    cout << max(res, en-st-odd_cnt);
//}