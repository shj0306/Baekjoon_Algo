/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;

int N;
ll K;
ll dp[2][50][2 * 50 + 1];
char res[50];

//괄호 문자열 특징 : 한 순간이라도 )의 개수가 (를 넘어선 안된다. = v
//끝에 도달했을 때 닫히지 않은 열린 괄호가 있으면 안된다. = r != 50

ll solve(int v, int p, int r) {
    if (p == N) return v || r != 50; //음수를 대비해서 +50을 함
    ll &ret = dp[v][p][r];
    if (ret != -1) return ret;
    //위치 p에서 괄호ㄴㄴ문자열의 개수 = p위치에 (인 괄호ㄴㄴ문자열 개수 + p위치에 )인 괄호ㄴㄴ문자열 개수
    ret = solve(v, p+1, r + 1) + solve(v || r - 1 < 50, p + 1, r - 1);
    return ret;
}

void skip(int v, int p, int r, ll k) {
    if (p == N) return;
    ll pivot = solve(v, p+1, r+1);
    if (k < pivot) {
        res[p] = '(';
        skip(v, p+1, r+1, k);
    }else {
        res[p] = ')';
        skip(v || r - 1 < 50, p+1, r-1, k - pivot);
    }
}

int main() {
    fast_io;
    cin >> N >> K;
    memset(dp, -1, sizeof(dp));
    if (solve(0,0,50) < K + 1) puts("-1");
    else {
        skip(0, 0, 50, K);
        for (int i = 0; i < N; i++) cout << res[i];
    }
}
*/
/*
 * dp[i][j] => i개의 문자가 정해졌고, 짝이 지어지지 않은 열린 괄호 수가 j개일 때 괄호ㄴㄴ문자열의 개수
 * dp[i][j] = dp[i+1][j+1] + dp[i+1][j-1]
 */
