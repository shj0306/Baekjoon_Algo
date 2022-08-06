#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, K, arr[200001];
int cnt[100001];

int main() {
    fast_io;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0, ans = 1;
    while(r < N) {
        if (cnt[arr[r]] < K) {
            cnt[arr[r]]++;
            r++;
        }else {
            cnt[arr[l]]--;
            l++;
        }
        ans = max(ans, r-l);
    }

    cout << ans;
}