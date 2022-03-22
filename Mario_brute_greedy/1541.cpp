//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//string st;
//
//int calc_func(int s, int e) {
//    int res = 0;
//    string tmp;
//    for (int i = s; i <= e; i++) {
//        if (st[i] >= '0' && st[i] <= '9') {
//            tmp.push_back(st[i]);
//        }else {
//            res += stoi(tmp);
//            tmp.clear();
//        }
//    }
//    if (!tmp.empty()) res += stoi(tmp);
//    return s == 0 ? res : -res;
//}
//
//int main() {
//    fast_io;
//    cin >> st;
//
//    int start = 0, res = 0;
//    while(start < st.length()) {
//        int nxt = (int) st.find('-', start);
//        if (nxt == string::npos) {
//            res += calc_func(start, (int) st.length() - 1);
//            break;
//        }
//        else res += calc_func(start, nxt - 1);
//        start = nxt + 1;
//    }
//    cout << res;
//}