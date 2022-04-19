//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0, 0, 1, -1};
//int n, m;
//vector<vector<char>> maze;
//
//int bfs(int r, int c, int state, int cnt) {
//    map<tuple<int,int,int>, int> memory; // {row, col, state}
//    queue<pair<pair<int,int>, pair<int,int>>> q; // {현재 위치, 열쇠 가지고 있는 상태}
//    q.push({{r,c}, {state, cnt}});
//    memory[{r,c,state}] = 1;
//    while(!q.empty()) {
//        auto [row, col] = q.front().first;
//        auto [key, cost] = q.front().second;
//        q.pop();
//        if (maze[row][col] == '1') return cost;
//        for (int i = 0; i < 4; i++) {
//            int nr = row + dy[i];
//            int nc = col + dx[i];
//            if (memory[{nr,nc,key}]) continue;
//            if (nr >= 0 && nc >= 0 && nr < n && nc < m && maze[nr][nc] != '#') {
//                if (maze[nr][nc] >= 'A' && maze[nr][nc] <= 'F') { //잠긴 곳이면
//                    if (key & (1 << (maze[nr][nc] - 'A'))) { //문에 해당하는 열쇠가 존재하면
//                        q.push({{nr,nc}, {key, cost + 1}});
//                        memory[{nr,nc,key}] = 1;
//                    }
//                }
//                else if (maze[nr][nc] >= 'a' && maze[nr][nc] <= 'f') { //key
//                    q.push({{nr,nc}, {key | 1 << (maze[nr][nc] - 'a'), cost + 1}});
//                    memory[{nr,nc,key | 1 << (maze[nr][nc] - 'a')}] = 1;
//                }
//                else {
//                    q.push({{nr,nc}, {key, cost + 1}});
//                    memory[{nr,nc,key}] = 1;
//                }
//            }
//        }
//    }
//    return -1;
//}
//int main() {
//    fast_io;
//    cin >> n >> m;
//    maze = vector<vector<char>>(n, vector<char>(m));
//    int sr, sc;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> maze[i][j];
//            if (maze[i][j] == '0') {
//                sr = i; sc = j;
//            }
//        }
//    }
//
//    cout << bfs(sr, sc, 0, 0) << '\n';
//
//    return 0;
//}
