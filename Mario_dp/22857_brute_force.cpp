//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
///*
// * Ȧ���� ������ prefix_sum���� �����ش�.
// * 2�� for���� �̿��ؼ� �� ������ Ȧ���� ������ k�� ������ ��� ���� ���� ���ؼ� �� ū ������ �������ش�.
// *
// */
//
//int n, k;
//vector<int> v;
//
//int ret_odd(int st, int en) {
//    if (st == 0) return v[en];
//    else return v[en]-v[st-1];
//}
//
//int main() {
//    fast_io;
//    cin >> n >> k;
//    v = vector<int>(n);
//
//    for (int i = 0; i < n; i++) {
//        int num; cin >> num;
//        if (i) v[i] = v[i-1] + num % 2;
//        else v[i] = num % 2;
//    }
//
//    int res = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            int odd_cnt = ret_odd(j, i);
//            if (odd_cnt <= k) {
//                res = max(res, i - j + 1 - odd_cnt);
//                break;
//            }
//        }
//    }
//    cout << res;
//}