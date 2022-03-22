/*
#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int MAX_N = 31;
int dp[MAX_N][MAX_N];
char result[MAX_N];
int N, L, I;

//n자리 이진수에 m개 이하의 1을 넣는 경우의 수
int binary(int n, int m) {
    int &ret = dp[n][m];
    if (ret != -1) return ret;
    if (m == 0 || n == 0) return ret = 1;
    ret = binary(n-1, m);
    if (m > 0) ret += binary(n-1, m-1);
    return ret;
}

void skip(int n, int m, int k, int p) {
    if (n == 0) return;
    if (m == 0) {
        for (int i = 0; i < n; i++) result[p+i] = '0';
        return;
    }
    //m개 이하의 1을 사용해서 n-1자리 이진수를 만들 수 있는 경우의 수
    int pivot = binary(n-1, m);
    if (k <= pivot) {
        result[p] = '0';
        skip(n-1, m, k, p+1);
    }else {
        result[p] = '1';
        skip(n-1, m-1, k-pivot, p+1);
    }
}

int main() {
    fast_io;
    cin >> N >> L >> I;
    memset(dp, -1, sizeof(dp));
    skip(N, L, I, 0);
    for (int i = 0; i < N; i++) cout << result[i];
    return 0;
}*/
