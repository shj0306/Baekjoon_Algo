#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 1e6;
int N;
ll F[MAX], pSum[MAX];

//https://m.blog.naver.com/hongjg3229/221891083292

int main() {
    fast_io;
    cin >> N;

    F[0] = 0, F[1] = 1, F[2] = 2;
    pSum[0] = 0, pSum[1] = 1, pSum[2] = 3;

    for (int i = 3, j = 2; i < MAX; i++) {
        if (pSum[j] < i) j++;
        F[i] = j;
        pSum[i] = pSum[i-1] + j;
    }

    cout << lower_bound(pSum, pSum + MAX, N) - pSum << '\n';
}
/*
 * 1 2 3 4 5 6 7 8
 * 1 2 2 3 3 4 4 4
 * 1 3
 */