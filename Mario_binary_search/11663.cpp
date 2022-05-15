#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int MAX = 100001;
int N, M, l, r;
vector<int> dot;

//val보다 큰 최초의 인덱스
int upp_bound(int val) {
    int s = 0, e = N-1, mid;
    while(s <= e) {
        mid = (s+e) / 2;
        if (dot[mid] > val) e = mid - 1;
        else s = mid + 1;
    }
    return s;
}

//val보다 같거나 큰 최초의 인덱스
int low_bound(int val) {
    int s = 0, e = N-1, mid;
    while(s <= e) {
        mid = (s+e) / 2;
        if (dot[mid] < val) s = mid + 1;
        else e = mid - 1;
    }
    return s;
}

int main() {
    fast_io;
    cin >> N >> M;
    dot.resize(N);

    for (int i = 0; i < N; i++) cin >> dot[i];
    sort(all(dot));

    for (int i = 0; i < M; i++) {
        cin >> l >> r;
        cout << upp_bound(r) - low_bound(l) << '\n';
    }
}