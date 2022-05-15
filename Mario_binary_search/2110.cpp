#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, C;
vector<int> home;

//가장 인접한 두 공유기 사이 최대거리가 dist일 때 설치 가능한 공유기 개수가 C개 이상인지?
bool possible(int dist) {

    int cnt = 1, prev = home[0];
    for (int i = 1; i < N; i++) {
        int cur = home[i];
        if (cur - prev >= dist) {
            prev = cur;
            cnt++;
        }
    }
    return cnt >= C;
}

int main() {
    fast_io;
    cin >> N >> C;
    home.resize(N);

    for (int i = 0; i < N; i++) cin >> home[i];
    sort(all(home));

    int l = 1, r = 1e9, mid, ans = 0;
    while(l <= r) {

        //가장 인접한 두 공유기 사이의 최대 거리
        mid = (l + r) / 2;
        if (possible(mid)) {
            ans = max(ans, mid);
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }
    cout << ans;
}