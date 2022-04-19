/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        stack<char> stk;
        cin >> word;
        for (auto &val : word) {
            if (stk.empty() || stk.top() != val) stk.push(val);
            else stk.pop();
        }
        if (stk.empty()) cnt++;
    }
    cout << cnt << '\n';
}
*/
