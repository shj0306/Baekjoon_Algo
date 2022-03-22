//#include <bits/stdc++.h>
//
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int, int>;
//#define f first
//#define s second;
//
//int main() {
//    fast_io;
//    int N;
//    cin >> N;
//    vector<int> ans(N);
//    stack<int> stk, idx;
//    for (int i = 0; i < N; i++) {
//        int h; cin >> h;
//        while(!stk.empty()) {
//            //수신탑 발견
//            if (stk.top() > h) {
//                cout << idx.top()+1 << ' ';
//                break;
//            }
//            stk.pop(); idx.pop();
//        }
//        if (stk.empty()) cout << 0 << ' ';
//        stk.push(h); idx.push(i);
//    }
//}