/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n;
int dp[10000][10];
int trace[10000][10];

string str1, str2;
//idx번째부터 offset만큼 회전되어있는 상태
int solve(int idx, int offset) {
    if (idx == n) return 0;
    if (dp[idx][offset] != -1) return abs(dp[idx][offset]);
    int num1 = str1[idx]-'0';
    int num2 = str2[idx]-'0';
    int cnt = (num1 + offset) % 10;

    //left
    int leftTurn = (num2 - cnt + 10) % 10;
    int leftCost = solve(idx+1, (offset + leftTurn) % 10) + leftTurn;

    //right
    int rightTurn = (cnt - num2 + 10) % 10;
    int rightCost = solve(idx+1, offset) + rightTurn;

    if (rightCost > leftCost) {
        dp[idx][offset] = leftCost;
        trace[idx][offset] = leftTurn;
    }else {
        dp[idx][offset] = rightCost;
        trace[idx][offset] = -rightTurn;
    }
    return dp[idx][offset];
}

void print(int idx, int turn) {
    if (idx == n) return;
    int move = trace[idx][turn];
    if (move != 0) cout << idx+1 << ' ' << move << '\n';
    if (trace[idx][turn] > 0) print(idx+1, (turn + move + 10) % 10);
    else print(idx+1, turn);
}

int main() {
    fast_io;
    cin >> n;
    cin >> str1 >> str2;
    memset(dp,-1, sizeof(dp));
    cout << solve(0, 0) << '\n';
    print(0, 0);
}
*/
