#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N;
ll K;
/*
 * r + c = N
 * (r+1) * (c+1) == K ?
 * r * c == K - N - 1
 * 가로로 자른 횟수와 세로로 자른 횟수의 격차가 커질수록 나오는 색종이 조각 개수는 적어진다.
 */

int main() {
    fast_io;
    cin >> N >> K;
    ll l = 0, r = N, mid;
    bool is_possible = false;

    while(l <= r) {
        //가로 자른 횟수
        mid = (l + r) / 2;
        ll cnt = (mid+1) * (N - mid+1);
        if (cnt == K) {
            is_possible = true;
            break;
        }else if (cnt > K) l = mid + 1;
        else r = mid - 1;
    }
    if (is_possible) cout << "YES";
    else cout << "NO";
}