//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int N;
//int dx[] = {1,-1,0,0};
//int dy[] = {0,0,1,-1};
//char arr[25][25];
//bool visited[25][25];
//
//int dfs(int r, int c) {
//    visited[r][c] = true;
//    int cnt = 1;
//    for (int k = 0; k < 4; k++) {
//        int nr = r + dy[k];
//        int nc = c + dx[k];
//        if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
//        if (arr[nr][nc] == '1' && !visited[nr][nc])
//            cnt += dfs(nr,nc);
//    }
//    return cnt;
//}
//
//int main() {
//    fast_io;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> arr[i][j];
//        }
//    }
//
//    vector<int> home;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (!visited[i][j] && arr[i][j] == '1') {
//                int val = dfs(i, j);
//                home.push_back(val);
//            }
//        }
//    }
//
//    sort(all(home));
//    cout << home.size() << '\n';
//    for (int val : home) cout << val << '\n';
//}