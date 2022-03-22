//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    deque<pii> dq;
//    for (int i = 1; i <= N; i++) {
//        int num; cin >> num;
//        dq.emplace_back(num,i);
//    }
//
//    while(dq.size() > 1) {
//        auto [val, idx] = dq.front();
//        dq.pop_front();
//        cout << idx << ' ';
//        if (val > 0) {
//            for (int i = 1; i < abs(val); i++) {
//                dq.push_back(dq.front());
//                dq.pop_front();
//            }
//        }else {
//            for (int i = 0; i < abs(val); i++) {
//                dq.push_front(dq.back());
//                dq.pop_back();
//            }
//        }
//    }
//    cout << dq.front().s;
//}