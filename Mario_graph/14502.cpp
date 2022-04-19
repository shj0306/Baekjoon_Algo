//#include <bits/stdc++.h>
//#include <cstring>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//
//struct pos {
//    int x, y;
//};
//int N, M, area;
//int lab[10][10], tmp[10][10];
//int dc[] = {1,-1,0,0};
//int dr[] = {0,0,1,-1};
//vector<pos> virus, space;
//
//void bfs() {
//
//    queue<pos> q;
//
//    //큐에 바이러스 모두 담기
//    for (int i = 0; i < virus.size(); i++) {
//        q.push(virus[i]);
//    }
//
//    //BFS 탐색
//    while (!q.empty()) {
//        pos cur = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            pos nxt = cur;
//            nxt.x += dr[i];
//            nxt.y += dc[i];
//
//            if (nxt.x < 0 || nxt.y < 0 || nxt.x >= N || nxt.y >= M) {
//                continue;
//            }
//
//            if (tmp[nxt.x][nxt.y] == 0) {
//                tmp[nxt.x][nxt.y] = 2;
//                q.push(nxt);
//            }
//        }
//    }
//}
//
//int calc_area() {
//
//    int safeSpaceCnt = 0;
//
//    //안전 영역(=0) 개수 세기
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            if (tmp[i][j] == 0) {
//                safeSpaceCnt++;
//            }
//        }
//    }
//    //안전 영역 반환
//    return safeSpaceCnt;
//}
//
//void dfs(int idx, int cnt) {
//    if (cnt == 3) {
//        memcpy(tmp, lab, sizeof(tmp));
//        bfs();
//        int safeSpace = calc_area();
//        if (area < safeSpace)
//            area = safeSpace;
//        return;
//    }
//    for (int i = idx; i < space.size(); i++) {
//        int x = space[i].x;
//        int y = space[i].y;
//        lab[x][y] = 1;
//        dfs(i+1, cnt+1);
//        lab[x][y] = 0;
//    }
//}
//
//int main() {
//    fast_io;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            cin >> lab[i][j];
//            if (lab[i][j] == 0) space.push_back({i,j});
//            else if (lab[i][j] == 2) virus.push_back({i,j});
//        }
//    }
//    dfs(0,0);
//    cout << area;
//    return 0;
//}