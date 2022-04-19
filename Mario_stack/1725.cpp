/*
#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
using namespace std;
vector<int> v;
stack<int> stk;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    v = vector<int>(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    long long max_ans = 0, height;

    for (int i = 0; i < n; i++) {
        if (stk.empty() || (v[stk.top()] < v[i])) { //스택이 비었거나 스택의 top보다 큰 경우
            stk.push(i);
        } else {
            while(!stk.empty()) {
                if (v[stk.top()] < v[i]) break;
                height = v[stk.top()];
                stk.pop();
                if (stk.empty()) {
                    max_ans = max(max_ans, height * (i));
                }else {
                    max_ans = max(max_ans, height * (i-1 - stk.top()));
                }
            }
            stk.push(i);
        }
    }

    while(!stk.empty()) {
        height = v[stk.top()]; stk.pop();
        if (stk.empty()) {
            max_ans = max(max_ans, height * n);
        }else {
            max_ans = max(max_ans, height * (n-1 - stk.top()));
        }
    }
    cout << max_ans << '\n';
    return 0;
}*/
