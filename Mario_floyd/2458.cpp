/*
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MAX = 501;
const int INF = 1e9;
int n, m, ans;
int dist[MAX][MAX];
int rev_dist[MAX][MAX];

void Floyd(int arr[MAX][MAX]) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
            }
        }
    }
}

int main() {
    fast_io;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        fill(dist[i]+1, dist[i]+1+n, INF);
        fill(rev_dist[i]+1, rev_dist[i]+1+n, INF);
    }
    for (int i = 0; i < m; i++) {
        int a,b; cin >> a >> b;
        dist[a][b] = 1;
        rev_dist[b][a] = 1;
    }

    Floyd(dist);
    Floyd(rev_dist);
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            cnt += (dist[i][j] == INF) ? 0 : 1;
            cnt += (rev_dist[i][j] == INF) ? 0 : 1;
        }
        if (cnt == n-1) ans++;
    }
    cout << ans << '\n';
}
*/
