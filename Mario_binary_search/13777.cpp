//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//vector<int> rabbit;
//void bin_search(int key) {
//    int st = 1, en = 50;
//    while(st <= en) {
//        int mid = (st+en) / 2;
//        if (mid > key) {
//            en = mid - 1;
//            cout << mid << ' ';
//        }else if (mid < key) {
//            st = mid + 1;
//            cout << mid << ' ';
//        }else {
//            cout << mid;
//            return;
//        }
//    }
//}
//
//int main() {
//    fast_io;
//    while(true) {
//        int num; cin >> num;
//        if (num == 0) break;
//        rabbit.push_back(num);
//    }
//    for (auto val : rabbit) {
//        bin_search(val);
//        cout << '\n';
//    }
//}