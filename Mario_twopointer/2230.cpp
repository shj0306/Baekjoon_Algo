/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, m;
const int INF = 2000000000;

int main() {
    fast_io;
    cin >> n >> m;
    vector<int> v = vector<int>(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    int left = 0, right = 0, diff = -1;
    int min_diff = INF;
    while(true) {
        if (diff < m) {
            if (right == n-1) break;
            right++;
            diff = v[right] - v[left];
        }else {
            min_diff = min(min_diff, diff);
            if (left == n-1) break;
            left++;
            diff = v[right] - v[left];
        }
    }
    cout << min_diff << '\n';
}*/
