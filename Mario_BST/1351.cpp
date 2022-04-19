/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long n,p,q;
map<long long, long long> memory;
long long solve(long long val) {
    if (val == 0) return 1;
    if (memory.find(val) != memory.end()) return memory[val];
    return memory[val] = solve(val / p) + solve(val / q);
}

int main() {
    cin >> n >> p >> q;
    cout << solve(n) << '\n';
    return 0;
}*/
