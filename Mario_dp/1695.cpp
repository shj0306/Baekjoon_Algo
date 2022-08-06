#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, arr[5001], dp[5001][5001];
//dp[i][j] : i~j까지 펠린드롬을 만들기 위해 필요한 숫자 최소 개수
/*
 * https://stillchobo.tistory.com/105 참고
 * 접근법 (탑 다운)
 *
 * i번째부터 j번째 값까지 펠린드롬을 만들기위한 숫자 최소 개수를 구하려고 할 때
 * dp[i][j] (i < j)
 * arr[i] == arr[j]인 경우 dp[i+1][j-1]값과 동일할 거고
 * arr[i] != arr[j]인 경우 dp[i+1][j]의 값과 dp[i][j-1]의 값 중 더 작은 값을 선택하고 +1을 한 값이 된다.
 * i값이 j보다 같거나 클 때까지 실행한다.
 */
int solve(int s, int e) {
    if (s >= e) return 0;
    int &ret = dp[s][e];
    if (ret != -1) return ret;
    ret = 0;
    if (arr[s] == arr[e]) ret += solve(s+1, e-1);
    else ret += min(solve(s+1, e), solve(s, e-1)) + 1;

    return ret;
}

int main() {
    fast_io;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];
    memset(dp, -1, sizeof(dp));

    cout << solve(1, N);
}