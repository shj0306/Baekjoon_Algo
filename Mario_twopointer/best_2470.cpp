//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    int n; cin >> n;
//    vector<int> vec(n);
//    for (int i = 0; i < n; i++) cin >> vec[i];
//
//    sort(all(vec));
//
//    int st = 0, en = n - 1;
//    int resL = st, resH = en;
//    int min_val = abs(vec[st] + vec[en]);
//
//    if (min_val == 0) {
//        cout << vec[st] << ' ' << vec[en];
//        return 0;
//    }
//    while(st < en) {
//        if (vec[st] + vec[en] > 0) en--;
//        else if (vec[st] + vec[en] < 0) st++;
//        else {
//            cout << vec[st] << ' ' << vec[en];
//            return 0;
//        }
//        if (st != en && min_val > abs(vec[st] + vec[en])) {
//            min_val = abs(vec[st] + vec[en]);
//            resL = st;
//            resH = en;
//        }
//    }
//    cout << vec[resL] << ' ' << vec[resH];
//}