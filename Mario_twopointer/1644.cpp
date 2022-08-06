#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int, int>;
using ll = long long;
const int MAX = 4e6;
int N, sz, ans, check[MAX + 1], primes[300000];
//https://mygumi.tistory.com/214

int main() {
    fast_io;
    cin >> N;

    for (int i = 2; i <= sqrt(MAX); i++) {
        if (check[i]) continue;
        for (int j = i * 2; j <= MAX; j += i)
            check[j] = 1;
    }

    for (int i = 2; i <= MAX; i++) {
        if (!check[i])
            primes[sz++] = i;
    }

    int l = 0, r = 0, sum = 0;
    while(r <= sz) {
        if (sum < N) {
            sum += primes[r++];
            continue;
        }
        if (sum == N) ans++;
        sum -= primes[l++];
    }
    cout << ans;
}