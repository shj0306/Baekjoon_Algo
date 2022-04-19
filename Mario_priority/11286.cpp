/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct cmp{
    bool operator() (int a, int b) {
        if (abs(a) > abs(b)) return true;
        else if (abs(a) == abs(b)) return a > b;
        else return false;
    }
};

int main() {
    fast_io;
    priority_queue<int, vector<int>, cmp> pq;
    int N, num;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> num;
        if (num) pq.push(num);
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}
*/
