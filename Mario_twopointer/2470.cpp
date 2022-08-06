#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5;
int N;
vector<int> arr;

int main() {
    fast_io;
    cin >> N;
    arr.resize(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(all(arr));
    int l = 0, r = N-1, val = 2e9;
    pii ans = {};
    while(l < r) {
        int dif = arr[r] + arr[l];
        if (val > abs(dif)) {
            val = abs(dif);
            ans = {l, r};
        }
        if (dif >= 0) r--;
        else l++;
    }

    cout << arr[ans.first] << ' ' << arr[ans.second];
}