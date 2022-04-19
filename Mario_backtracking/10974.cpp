//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, check[9];
//vector<int> tmp;
//
//void back_tracking(int idx) {
//    if (tmp.size() == N) {
//        for (auto val : tmp) {
//            cout << val << ' ';
//        }
//        cout << '\n';
//        return;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (!check[i]) {
//            check[i] = 1;
//            tmp.push_back(i);
//            back_tracking(i);
//            tmp.pop_back();
//            check[i] = 0;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    back_tracking(0);
//}