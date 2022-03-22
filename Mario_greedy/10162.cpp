/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int button[3] = {300, 60, 10};
vector<int> res;
int main() {
    fast_io;
    int t; cin >> t;

    for (int time : button) {
        res.push_back(t / time);
        t %= time;
    }
    if (t == 0) {
        for (auto val : res) cout << val << ' ';
    }else cout << -1 << '\n';
}*/
