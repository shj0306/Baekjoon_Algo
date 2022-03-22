/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define MAX 100000
using namespace std;

int n;
int dp[MAX][3]; //dp[i] : i번째 열의 1행/2행/안쓸 때 최대
vector<vector<int>> sticker;
int solve(int col, int flag) { //flag : 이전 열에서 어느 행을 선택했나(0?1?)
    if (col == n) return 0;
    if (dp[col][flag] != -1) return dp[col][flag];
    int res = solve(col+1,0);
    if (flag != 1) res = max(res, sticker[0][col] + solve(col+1,1));
    if (flag != 2) res = max(res, sticker[1][col] + solve(col+1, 2));
    dp[col][flag] = res;
    return res;
}
int main() {
    int t;
    cin.tie(0)->sync_with_stdio(0);
    cin >> t;
    while (t--) {
        cin >> n;
        memset(dp, -1, sizeof(dp)); //각 테케마다 초기화
        sticker = vector<vector<int>>(2, vector<int>(n));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> sticker[i][j];
            }
        }
        cout << solve(0, 0) << '\n';
    }
    //0 : 선택 안함, 1 : 1행 선택 2 : 2행 선택
}
*/
