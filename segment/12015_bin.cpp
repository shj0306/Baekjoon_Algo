#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
vector<int> arr;
int main() {
    fast_io;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (!i) arr.push_back(num);
        if (num > arr.back()) arr.push_back(num);
        else {
            auto it = lower_bound(all(arr), num);
            *it = num;
        }
    }
    int sz = (int)arr.size();
    cout << sz << '\n';
}