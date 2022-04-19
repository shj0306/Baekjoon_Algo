/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

map<char,int> priority;

int main() {
    string infix, postfix;
    stack<char> stk; //연산자, (, )가 담긴다.
    cin >> infix;
    priority['+'] = 1; priority['-'] = 1; priority['*'] = 2; priority['/'] = 2;
    for (auto &val : infix) {
        if (val >= 'A' && val <= 'Z') postfix.push_back(val);
        else if (val != '(' && val != ')') { //operator
            if (stk.empty()) stk.push(val);
            else if (stk.top() == '(') stk.push(val);
            else if (priority[stk.top()] < priority[val]) stk.push(val);
            else if (priority[stk.top()] >= priority[val]) {
                while(!stk.empty()) {
                    if (stk.top() == '(') break;
                    if (priority[stk.top()] < priority[val]) break;
                    postfix.push_back(stk.top());
                    stk.pop();
                }
                stk.push(val);
            }
        }else if (val == '(') stk.push('(');
        else { //)
            while(!stk.empty()) {
                if (stk.top() == '(') {
                    stk.pop(); break;
                }
                postfix.push_back(stk.top());
                stk.pop();
            }
        }
    }
    while(!stk.empty()) {
        postfix.push_back(stk.top());
        stk.pop();
    }
    cout << postfix << '\n';
}
*/
/*
 * A+B-(C*D-E)
 * AB
 * +
 */
