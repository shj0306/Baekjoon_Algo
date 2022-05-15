#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M;
vector<int> tree;

bool possible(int h) {

    ll res = 0;
    for (auto height : tree) {
        int diff = height - h;
        if (diff > 0) res += diff;
    }
    return res >= M;
}

int main() {
    fast_io;
    cin >> N >> M;
    tree.resize(N);

    //나무의 높이를 입력으로 받는다.
    for (int i = 0; i < N; i++) cin >> tree[i];

    // 절단기 높이로 가능한 값의 범위
    int l = 0, r = 1e9, mid, ans = 0;

    while(l <= r) {
        mid = (l+r) / 2;
        // 절단기의 높이가 mid일 때 M미터 이상의 나무를 얻을 수 있나요?
        if (possible(mid)) {
            ans = mid;
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }

    cout << ans;
}