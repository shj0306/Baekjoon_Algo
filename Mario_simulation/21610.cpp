//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n,m;
//int dir[8][2] = {{-1,0}, {-1,-1}, {0,-1}, {1,-1},
//                 {1,0}, {1,1}, {0,1}, {-1,1}};
//
//int dx[] = {1,1,-1,-1};
//int dy[] = {1,-1,1,-1};
//int basket[51][51];
//bool visited[51][51];
//queue<pii> cloud;
//
//bool is_in(int x, int y) {
//    return x >= 1 && x <= n && y >= 1 && y <= n;
//}
//
//void move_cloud(int x, int y) {
//    int sz = (int)cloud.size();
//
//    for (int i = 0; i < sz; i++) {
//        auto [cx, cy] = cloud.front();
//        cloud.pop();
//        int nx = cx + x; int ny = cy + y;
//        nx %= n; ny %= n;
//        if (nx <= 0) nx = n + nx;
//        else if (nx > n) nx = n % nx;
//        if (ny <= 0) ny = n + ny;
//        else if (ny > n) ny = n % ny;
//        cloud.push({nx,ny});
//        basket[ny][nx]++; //이동한 구름에서 비가 내려 1 증가
//        visited[ny][nx] = true;
//    }
//}
//
//void update_value() {
//    int sz = cloud.size();
//    for (int i = 0; i < sz; i++) {
//        auto [x,y] = cloud.front();
//        cloud.pop();
//        for (int j = 0; j < 4; j++) {
//            //범위 밖은 해당 안됨
//            int nx = x + dx[j];
//            int ny = y + dy[j];
//            if (is_in(nx,ny) && basket[ny][nx] > 0) basket[y][x]++;
//        }
//    }
//}
//
//void make_cloud() {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (!visited[i][j] && basket[i][j] >= 2) {
//                basket[i][j] -= 2;
//                cloud.push({j, i});
//            }
//            visited[i][j] = false;
//        }
//    }
//}
//
//int calc_rain() {
//    int res = 0;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            res += basket[i][j];
//        }
//    }
//    return res;
//}
//
//int main() {
//    fast_io;
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> basket[i][j];
//        }
//    }
//
//    cloud.push({1,n});
//    cloud.push({2,n});
//    cloud.push({1,n-1});
//    cloud.push({2,n-1});
//
//    int d, dist; cin >> d >> dist;
//    int x = dir[d-1][0];
//    int y = dir[d-1][1];
//
//    //구름을 이동
//    move_cloud(x * dist, y * dist);
//    //이동 된 각 지점의 대각선을 살펴보고 값 수정
//    update_value();
//    //현재 비의 양이 2이상인 위치를 모두 구름으로 만든다(-2)
//    make_cloud();
//
//    for (int i = 1; i < m; i++) {
//        cin >> d >> dist;
//        x = dir[d-1][0];
//        y = dir[d-1][1];
//        move_cloud(x * dist,y * dist);
//        update_value();
//        make_cloud();
//    }
//
//    cout << calc_rain();
//}