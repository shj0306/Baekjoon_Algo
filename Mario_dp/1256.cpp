/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int INF = 1e9+1;
const int MAX = 101;
int N,M,K;
int dp[MAX][MAX];
char res[MAX*2];
int solve(int cnt_a, int cnt_z) {
    int &ret = dp[cnt_a][cnt_z];
    if (ret != -1) return ret;
    if (cnt_a == 0 || cnt_z == 0) return ret = 1;
    ret = min(solve(cnt_a-1,cnt_z) + solve(cnt_a, cnt_z-1), INF);
    return ret;
}

void skip(int n, int a, int z, int k, int p) {
    if (n == 0) return;
    if (a == 0) {
        for (int i = 0; i < n; i++) res[p+i] = 'z';
        return;
    }
    int pivot = solve(a-1, z);
    if (k <= pivot) {
        res[p] = 'a';
        skip(n-1, a-1, z, k, p+1);
    }else {
        res[p] = 'z';
        skip(n-1, a, z-1, k-pivot, p+1);
    }
}


int main() {
    fast_io;
    cin >> N >> M >> K;
    memset(dp, -1, sizeof(dp));
    int total = solve(N, M);
    if (total < K) cout << -1 << '\n';
    else {
        skip(N+M, N, M, K, 0);
        for (int i = 0; i < N+M; i++)
            cout << res[i];
    }
}*/
