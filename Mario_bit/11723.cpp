/*
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int s;

int main() {
    int m; string cmd;
    fastio;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> cmd;
        if (cmd == "all" || cmd == "empty") {
            if (cmd == "all") s |= 2097151;
            else s &= 0;
        }else {
            int val;
            cin >> val;
            if (cmd == "add") {
                if ((s & (1 << val)) == 0) s |= (1 << val);
            }
            else if (cmd == "remove") {
                if ((s & (1 << val))) s &= ~(1 << val);
            }
            else if (cmd == "check") {
                (s & (1 << val)) ? cout << 1 << '\n' : cout << 0 << '\n';
            }
            else if (cmd == "toggle") {
                s ^= (1 << val);
            }
        }
    }
    return 0;
}*/
