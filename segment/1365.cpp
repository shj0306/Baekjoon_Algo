/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int N;

int main() {
    fast_io;
    cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        if (arr.empty() || num > arr.back()) arr.push_back(num);
        else {
            auto it = lower_bound(begin(arr), end(arr), num);
            *it = num;
        }
    }
    cout << N - arr.size() << '\n';
}*/
