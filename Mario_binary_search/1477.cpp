#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, L;
vector<int> RA;

//휴게소 없는 구간 길이의 최대가 dist를 넘기지 않게 휴게소를 추가했을 때 세울 수 있는 휴게소 개수
int possible(int dist) {
    int cnt = 0, prev = 0;
    for (int i = 0; i <= N; i++) {
        int d = RA[i] - prev;
        if (dist < d) {
            if (d % dist) cnt += d / dist;
            else cnt += d / dist - 1;
        }
        prev = RA[i];
    }
    return cnt;
}

int main() {
    fast_io;
    cin >> N >> M >> L;
    RA.resize(N);

    for (int i = 0; i < N; i++) cin >> RA[i];
    RA.push_back(L);
    sort(all(RA));

    int l = 1, r = L, mid, ans = L;

    while(l <= r) {
        //휴게소 없는 구간의 최댓값
        mid = (l + r) / 2;
        int cnt = possible(mid);
        if (cnt <= M) {
            ans = min(ans, mid);
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }
    cout << ans;
}