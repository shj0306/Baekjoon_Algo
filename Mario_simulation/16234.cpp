//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//int n, l, r, total, cnt, day;
//bool is_change;
//int human[51][51];
//int visited[51][51];
//
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//struct info {
//    int r, c;
//};
//
//queue<info> Q;
//
//bool check(int row, int col) {
//    for (int i = 0; i < 4; i++) {
//        int nr = row + dy[i];
//        int nc = col + dx[i];
//        if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
//        int diff = abs(human[nr][nc] - human[row][col]);
//        if (l <= diff && diff <= r) return false;
//    }
//    return true;
//}
//
//bool bfs(int i, int j) {
//    queue<info> q;
//    vector<info> Union;
//    visited[i][j] = 1;
//    q.push({i, j});
//    Union.push_back({i, j});
//    total = human[i][j];
//    cnt = 1;
//
//    while (!q.empty()) {
//        int y = q.front().r;
//        int x = q.front().c;
//        q.pop();
//        for (int k = 0; k < 4; k++) {
//            int ny = y + dy[k];
//            int nx = x + dx[k];
//            if (ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx]) continue;
//
//            int res = abs(human[y][x] - human[ny][nx]);
//            if (l <= res && res <= r) {
//                visited[ny][nx] = 1;
//                q.push({ny,nx});
//                Union.push_back({ny, nx});
//                total += human[ny][nx];
//                cnt++;
//            }
//        }
//    }
//    if (Union.size() > 1) { //인구 이동이 있었다면
//        int val = total / cnt;
//        for (auto[y, x]: Union) {
//            human[y][x] = val;
//            Q.push({y,x});
//        }
//        return false;
//    } else return true;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> l >> r;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> human[i][j];
//            Q.push({i, j});
//        }
//    }
//    while (!is_change) {
//        is_change = true;
//        int qs = (int)Q.size();
//        for (int i = 0; i < qs; i++) {
//            auto [y, x] = Q.front();
//            Q.pop();
//            if (visited[y][x] || check(y, x)) continue;
//            if (!bfs(y, x)) is_change = false;
//        }
//        if (!is_change) day++;
//        else break;
//        memset(visited, 0, sizeof(visited));
//    }
//    cout << day;
//}