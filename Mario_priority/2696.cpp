/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fast_io;
    int t; cin >> t;
    while(t--) {
        int m; cin >> m;
        vector<int> v(m), ans;
        priority_queue<int, vector<int>, greater<>> right;
        priority_queue<int, vector<int>, less<>> left;
        int mid;
        for (int i = 0; i < m; i++) {
            cin >> v[i];
            if (i == 0) {
                mid = v[i]; ans.push_back(mid);
                continue;
            }
            if (mid < v[i]) right.push(v[i]);
            if (mid >= v[i]) left.push(v[i]);
            if (i % 2 == 0) {
                if (left.size() < right.size()) {
                    left.push(mid);
                    mid = right.top();
                    right.pop();
                } else if (left.size() > right.size()) {
                    right.push(mid);
                    mid = left.top();
                    left.pop();
                }
                ans.push_back(mid);
            }
        }
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) {
            if (i && i % 10 == 0) {
                cout << '\n';
            }
            cout << ans[i] <<' ';
        }
    }
    return 0;
}*/
