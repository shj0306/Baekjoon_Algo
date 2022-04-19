/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

set<int> s1;

int main() {
    fast_io;
    int n, m, num, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num;
        s1.insert(num);
    }
    for (int i = 0; i < m; i++) {
        cin >> num;
        if (s1.find(num) != s1.end()) cnt++;
    }

    cout << n + m - cnt * 2 << '\n';
    return 0;
}*/
