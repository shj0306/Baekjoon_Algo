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
//    int N, T, mid; cin >> T;
//    while(T--) {
//        cin >> N;
//        priority_queue<int, vector<int>, less<>> left;
//        priority_queue<int, vector<int>, greater<>> right;
//        vector<int> ans;
//        for (int i = 1; i <= N; i++) {
//            int num; cin >> num;
//            if (i == 1) {
//                mid = num;
//                ans.push_back(mid);
//                continue;
//            }
//            if (mid < num) right.push(num);
//            else left.push(num);
//            if (i % 2) {
//                if (left.size() == right.size()) {
//                    ans.push_back(mid);
//                }else if (left.size() > right.size()){
//                    ans.push_back(left.top());
//                    right.push(mid);
//                    mid = left.top();
//                    left.pop();
//                }else {
//                    ans.push_back(right.top());
//                    left.push(mid);
//                    mid = right.top();
//                    right.pop();
//                }
//            }
//        }
//
//        cout << ans.size() << '\n';
//        for (int i = 0; i < ans.size(); i++) {
//            if (i && i % 10 == 0) cout << '\n';
//            cout << ans[i] << ' ';
//        }
//        cout << '\n';
//    }
//}