/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    string word; stack<int> stk;

    for (int i = 1; i <= n; i++) {
        getline(cin, word);
        stringstream ss(word);
        ss.str(word);

        string str1; string cmd[2]; int idx = 0;
        while(ss >> str1) {
            cmd[idx] = str1;
            idx++;
        }
        if (cmd[0] == "push") {
            stk.push(stoi(cmd[1]));
        }else if (cmd[0] == "top") {
            if (stk.size() == 0) cout << -1 << '\n';
            else cout << stk.top() << '\n';
        }else if (cmd[0] == "size") {
            cout << stk.size() << '\n';
        }else if (cmd[0] == "empty") {
            cout << stk.empty() << '\n';
        }else if (cmd[0] == "pop") {
            if (stk.size() == 0) cout << -1 << '\n';
            else {
                cout << stk.top() << '\n';
                stk.pop();
            }
        }
    }
}*/
