//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N, Q, num, tmp, occupy;
//bool check[1<<20];
//
//int main() {
//    fast_io;
//    cin >> N >> Q;
//
//    for (int i = 0; i < Q; i++) {
//        //오리가 원하는 땅 번호
//        cin >> num; tmp = num;
//        occupy = 0;
//        while(tmp >= 1) {
//            if (check[tmp]) {
//                occupy = tmp;
//            }
//            tmp /= 2;
//        }
//        if (occupy == 0) {
//            cout << 0 << '\n';
//            check[num] = true;
//        }else cout << occupy << '\n';
//    }
//}