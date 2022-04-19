//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, M, max_val, total;
//vector<int> v;
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    v.resize(N);
//
//    for (int i = 0; i < N; i++) {
//        cin >> v[i];
//        max_val = max(max_val, v[i]);
//        total += v[i];
//    }
//
//    int s = max_val, e = total, mid;
//    int ans = total;
//    while(s <= e) {
//        //인출 금액
//        mid = (s + e) / 2;
//
//        int cnt = 1, bal = mid;
//        for (int i = 0; i < N; i++) {
//            if (bal >= v[i])
//                bal -= v[i];
//            else { //인출해야 함.
//                bal = (mid - v[i]);
//                cnt++;
//            }
//        }
//        if (cnt <= M) {
//            ans = min(ans, mid);
//            e = mid - 1;
//        }else s = mid + 1;
//    }
//    cout << ans;
//}