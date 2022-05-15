#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 4000;
int N, A[MAX], B[MAX], C[MAX], D[MAX];
vector<int> A_B, C_D;

int main() {
    fast_io;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A_B.push_back(A[i]+B[j]);
            C_D.push_back(C[i]+D[j]);
        }
    }

    sort(all(C_D));
    ll cnt = 0;

    for (int i = 0; i < N*N; i++) {
        int val = A_B[i];
        cnt += abs(upper_bound(all(C_D), -val)
                - lower_bound(all(C_D), -val));
    }
    cout << cnt;
}