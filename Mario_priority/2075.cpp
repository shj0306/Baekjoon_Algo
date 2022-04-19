/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fast_io;
    int n, val, cnt = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> val;
            if (cnt < n) {
                pq.push(val); cnt++;
            }else {
                pq.push(val); pq.pop();
            }
        }
    }
    cout << pq.top() <<'\n';
    return 0;
}*/
