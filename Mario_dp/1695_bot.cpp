#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, arr[5001], dp[5001][5001];
/*
 * https://ddiyeon.tistory.com/67 참고
1. 수열의 역순으로 i번째까지와 순서대로 j번째까지의 최장공통수열 길이를 저장할 이차원 dp배열 생성
2. 각 숫자를 비교하며 숫자가 같으면 dp[i-1][j-1]+1을, 다르면 max(dp[i][j-1], dp[i-1][j])으로 계산하여 dp에 저장
3. 총 수열의 길이에서 수열과 역순 수열의 최장공통수열 길이를 빼서 출력한다.
 */

int main() {
    fast_io;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (arr[i] == arr[N-j+1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << N - dp[N][N];
}
