#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 250001;
int N, X, val, max_ans, cnt, pSum[MAX];

int main() {
    fast_io;
    cin >> N >> X;

    for (int i = 1; i <= N; i++) {
        cin >> val;
        pSum[i] = pSum[i-1] + val;
    }

    for (int i = X; i <= N; i++) {
        if (max_ans < pSum[i] - pSum[i-X]) {
            max_ans = pSum[i] - pSum[i-X];
            cnt = 1;
        }else if (max_ans == pSum[i] - pSum[i-X]) {
            cnt++;
        }
    }

    if (max_ans) cout << max_ans << '\n' << cnt;
    else cout << "SAD";
}