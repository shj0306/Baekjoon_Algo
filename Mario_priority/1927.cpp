/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

priority_queue<int, vector<int>, greater<>> pq;

int main() {
    fast_io;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        if (num) {
            pq.push(num);
        }else {
            if (pq.empty()) {
                cout << 0 << '\n';
            }else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}*/
