/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n; string postfix;
    stack<double> stk;
    cin >> n;
    cin >> postfix;
    map<char,int> m;
    for (int i = 0; i < n; i++) {
        char c = 'A' + i;
        cin >> m[c];
    }

    for (char & i : postfix) {
        if (m[i]) { //피연산자
            stk.push(m[i]);
        }else {
            double op1 = stk.top();
            stk.pop();
            double op2 = stk.top();
            stk.pop();
            if (i == '+') {
                stk.push(op2+op1);
            }else if (i == '-') {
                stk.push(op2-op1);
            }else if (i == '*') {
                stk.push(op2*op1);
            }else {
                stk.push(op2/op1);
            }
        }
    }
    printf ("%.2f\n", stk.top());
    return 0;
}*/
