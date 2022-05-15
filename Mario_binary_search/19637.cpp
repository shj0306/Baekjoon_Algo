#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e5+1;
int N, M, p;
string power[MAX];
int P[MAX];


int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> power[i] >> P[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> p;
        int l = 0, r = N-1, mid, ans;
        while(l <= r) {
            mid = (l + r) / 2;
            if (p <= P[mid]) {
                ans = mid;
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }

        cout << power[ans] << '\n';
    }
}