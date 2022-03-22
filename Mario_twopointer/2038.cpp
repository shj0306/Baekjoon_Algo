/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef long long ll;
const int MAX = 1e6;

ll pSum[MAX];
ll arr[MAX];

int main() {
    fast_io;
    int n; cin >> n;
    fill(pSum, pSum+MAX, MAX);
    fill(arr, arr+MAX, MAX);

    arr[0] = 0, arr[1] = 1, arr[2] = 2;
    pSum[0] = 0, pSum[1] = 1, pSum[2] = 3;

    int k = 2;
    for (int i = 3; i < MAX; i++) {
        if (pSum[k] < i) k++;
        arr[i] = k;
        pSum[i] = pSum[i-1] + k;
    }
    cout << lower_bound(pSum, pSum+MAX, n) - pSum << '\n';
}*/
