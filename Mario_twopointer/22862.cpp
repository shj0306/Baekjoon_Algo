#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6+1;
int N, K, arr[MAX];

int main() {
    fast_io;
    cin >> N >> K;

    for (int i = 0; i < N; i++) cin >> arr[i];

    int l = 0, r = 0, cnt = 0, ans = 0;
    while(r < N) {
        if (arr[r] % 2 == 0) { //even
            r++;
        }else { //odd
            if (cnt < K) {
                cnt++; r++;
            }
            else if (arr[l++] % 2) cnt--;
        }
        ans = max(ans, r-l-cnt);
    }
    cout << ans;
}