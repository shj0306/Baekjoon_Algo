/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fast_io;
    long long k, n, val;
    vector<long long> prime;
    priority_queue<long long, vector<long long>, greater<>> pq;
    map<long long, bool> memory;
    cin >> k >> n;

    long long max_value = 0;

    for (int i = 0; i < k; i++) {
        cin >> val;
        pq.push(val);
        prime.push_back(val);
    }
    max_value = prime[k-1];
    for (int i = 1; i < n; i++) {
        long long now = pq.top();
        pq.pop();

        for (auto &p : prime) {
            long long next = now * p;
            if (memory.count(next)) continue;
            if (pq.size() > n) {
                if (max_value <= next) continue;
            }
            pq.push(next);
            max_value = max(max_value, next);
            memory[next] = true;
        }
    }
    cout << pq.top() << '\n';
    return 0;
}*/
