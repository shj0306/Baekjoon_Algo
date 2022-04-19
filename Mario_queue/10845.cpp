/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    string word; queue<int> q;
    for (int i = 0; i < n; i++) {
        getline(cin, word);
        stringstream ss(word);
        string str1, cmd[2]; int idx = 0;
        while(ss >> str1) {
            cmd[idx] = str1;
            idx++;
        }
        if (cmd[0] == "push") {
            q.push(stoi(cmd[1]));
        }else if (cmd[0] == "pop") {
            if (q.empty()) {cout << -1 << '\n';}
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }else if (cmd[0] == "size") {
            cout << q.size() << '\n';
        }else if (cmd[0] == "empty") {
            cout << q.empty() << '\n';
        }else if (cmd[0] == "front") {
            if (q.empty()) {cout << -1 << '\n';}
            else cout << q.front() << '\n';
        }else if (cmd[0] == "back") {
            if (q.empty()) {cout << -1 << '\n';}
            else cout << q.back() << '\n';
        }
    }
}*/
