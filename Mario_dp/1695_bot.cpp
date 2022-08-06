#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, arr[5001], dp[5001][5001];
/*
 * https://ddiyeon.tistory.com/67 ����
1. ������ �������� i��°������ ������� j��°������ ���������� ���̸� ������ ������ dp�迭 ����
2. �� ���ڸ� ���ϸ� ���ڰ� ������ dp[i-1][j-1]+1��, �ٸ��� max(dp[i][j-1], dp[i-1][j])���� ����Ͽ� dp�� ����
3. �� ������ ���̿��� ������ ���� ������ ���������� ���̸� ���� ����Ѵ�.
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
