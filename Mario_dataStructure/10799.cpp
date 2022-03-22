//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int main() {
//    fast_io;
//    string stick; cin >> stick;
//    char prev = '$';
//    stack<char> stk;
//    int cnt = 0;
//    for (char c : stick) {
//        if (c == '(') stk.push('(');
//        else {
//            if (prev == '(') { //razer
//                stk.pop();
//                cnt += (int)stk.size();
//            }else {
//                cnt++; stk.pop();
//            }
//        }
//        prev = c;
//    }
//    cout << cnt;
//}