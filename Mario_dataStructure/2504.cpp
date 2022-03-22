//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//#define f first
//#define s second;
//
//long long res; string ps;
//
//bool good_ps() {
//    stack<char> stk;
//    int multi = 1;
//    char prev = '#';
//    for (auto c : ps) {
//        if (c == '(' || c == '[') {
//            if (c == '(') multi *= 2;
//            if (c == '[') multi *= 3;
//            stk.push(c);
//        }
//        else if (c == ')') {
//            if (stk.empty() || stk.top() != '(') return false;
//            if (prev == '(') {
//                res += multi;
//                multi /= 2;
//            }else multi /= 2;
//            stk.pop();
//
//        }else if (c == ']') {
//            if (stk.empty() || stk.top() != '[') return false;
//            if (prev == '[') {
//                res += multi;
//                multi /= 3;
//            }else multi /= 3;
//            stk.pop();
//        }
//        prev = c;
//    }
//    return stk.empty();
//}
//
//int main() {
//    fast_io;
//    cin >> ps;
//    if (good_ps()) cout << res;
//    else cout << 0;
//}