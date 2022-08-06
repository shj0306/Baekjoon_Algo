#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
const int INF = -987654321;
const int MIN = -3276801;
int N, M, sum[101], dp[101][51];
//https://stillchobo.tistory.com/107

int solve(int idx, int cnt) {

    //M개 구간 완성
    if (cnt == 0) return 0;
    //cnt개수 구간을 만드는게 불가능함.
    if (idx < 2 * cnt - 1) return INF;
    int &ret = dp[idx][cnt];
    if (ret != MIN) return ret;

    //idx를 포함하지 않고 만든 최댓값
    ret = solve(idx-1, cnt);
    for (int i = idx; i >= 1; i--) {
        // i ~ idx구간합 + dp[i-2][cnt-1] 중 최댓값
        ret = max(ret, sum[idx] - sum[i-1] + solve(i-2, cnt - 1));
    }
    return ret;
}

int main() {
    fast_io;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        fill(dp[i], dp[i]+M+1, MIN);
    }

    for (int i = 1; i <= N; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }
    cout << solve(N, M);
}