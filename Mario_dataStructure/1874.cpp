//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second
//using namespace std;
//
//int main() {
//    fast_io;
//    int N; cin >> N;
//    stack<int> stk;
//    vector<char> ans;
//
//    int cur = 0;
//    for (int i = 0; i < N; i++) {
//        int val; cin >> val;
//
//        if (cur < val) { //push
//            while(cur < val) {
//                ans.push_back('+');
//                stk.push(++cur);
//            }
//            ans.push_back('-');
//            stk.pop();
//        }else { //pop
//            if (stk.top() != val) {
//                cout << "NO" << '\n';
//                return 0;
//            }else {
//                ans.push_back('-');
//                stk.pop();
//            }
//        }
//    }
//
//    for (auto c : ans) cout << c << '\n';
//}