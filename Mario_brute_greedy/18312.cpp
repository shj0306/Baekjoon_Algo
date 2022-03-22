//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//
//bool check(string str, int k) {
//    for (char i : str) {
//        if (i == k + '0') return true;
//    }
//    return false;
//}
//
//int main() {
//    fast_io;
//    int N, K, res = 0;
//    string time, s_h, s_m, s_s;
//    cin >> N >> K;
//
//    for (int h = 0; h <= N; h++) {
//        for (int m = 0; m < 60; m++) {
//            for (int s = 0; s < 60; s++) {
//                if (h < 10) s_h = '0' + to_string(h);
//                else s_h = to_string(h);
//                if (m < 10) s_m = '0' + to_string(m);
//                else s_m = to_string(m);
//                if (s < 10) s_s = '0' + to_string(s);
//                else s_s = to_string(s);
//
//                time.append(s_h);
//                time.append(s_m);
//                time.append(s_s);
//
//                if (check(time, K)) res++;
//                time.clear();
//            }
//        }
//    }
//    cout << res;
//}