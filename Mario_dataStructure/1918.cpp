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
//    string infix;
//    stack<char> stk;
//    cin >> infix;
//    unordered_map<char, int> prior;
//    prior['('] = 0; prior['+'] = 1; prior['-'] = 1; prior['*'] = 2; prior['/'] = 2;
//
//    for (auto c : infix) {
//        if (c >= 'A' && c <= 'Z') cout << c;
//        else if (c == '(') stk.push(c);
//        else if (c == ')') {
//            while(!stk.empty()) {
//                if (stk.top() == '(') {
//                    stk.pop(); break;
//                }
//                cout << stk.top();
//                stk.pop();
//            }
//        }else {
//            while(!stk.empty()) {
//                if (prior[stk.top()] < prior[c]) break;
//                else {
//                    cout << stk.top();
//                    stk.pop();
//                }
//            }
//            stk.push(c);
//        }
//    }
//
//    while(!stk.empty()) {
//        cout << stk.top();
//        stk.pop();
//    }
//}