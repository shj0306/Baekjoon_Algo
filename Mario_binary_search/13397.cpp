#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M;
vector<int> arr;

bool possible(int diff) {

    int cnt = 1, min_idx = 0, max_idx = 0;
    for (int i = 1; i < N; i++) {
        if (arr[min_idx] > arr[i]) min_idx = i;
        if (arr[max_idx] < arr[i]) max_idx = i;

        if (arr[max_idx] - arr[min_idx] > diff) {
            cnt++;
            min_idx = max_idx = i;
        }
    }

    return cnt <= M;
}

int main() {
    fast_io;
    cin >> N >> M;
    arr.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 9999, mid, ans = r;
    while(l <= r) {
        //구간 점수의 최댓값
        mid = (l + r) / 2;
        //해당 구간 점수의 최댓값을 유지했을 때 나오는 구간의 개수가 M개 이하인지?
        if (possible(mid)) {
            ans = min(ans, mid);
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }

    cout << ans;
}