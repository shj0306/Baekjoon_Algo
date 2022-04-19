/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    while(n--) {
        stack<int> stk; bool isFin = true; //끝까지 돌았나 확인
        string word;
        cin >> word;
        for (char c : word) {
            if (c == '(') {
                stk.push(c);
            }else { //)
                if (stk.empty() || stk.top() != '(') {
                    cout << "NO" << '\n';
                    isFin = false;
                    break;
                }
                stk.pop();
            }
        }
        if (isFin) {
            (stk.empty()) ? cout << "YES" << '\n' : cout << "NO" <<'\n';
        }
    }
}*/
