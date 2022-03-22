//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//const int MAX = 100;
//int n;
//
//int dx[] = {1,0,-1,0};
//int dy[] = {0,-1,0,1};
//int dragon[MAX][MAX];
//
//bool check(int x, int y) {
//    for (int i = x; i <= x + 1; i++) {
//        for (int j = y; j <= y + 1; j++) {
//            if (dragon[i][j] == 0) return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    fast_io;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int x, y, d, g;
//        cin >> x >> y >> d >> g;
//        int nx = x, ny = y;
//        dragon[nx][ny] = 1;
//        vector<int> dir;
//        dir.push_back(d);
//        for (int j = 1; j <= g; j++) {
//            int sz = dir.size();
//            for (int k = sz-1; k >= 0; k--) {
//                int val = dir[k]+1;
//                dir.push_back(val%4);
//            }
//        }
//        for (auto di : dir) {
//            int _x = dx[di], _y = dy[di];
//            nx += _x, ny += _y;
//            dragon[nx][ny] = 1;
//        }
//    }
//
//    int cnt = 0;
//    for (int x = 0; x < MAX; x++) {
//        for (int y = 0; y < MAX; y++) if (check(x,y)) cnt++;
//    }
//    cout << cnt;
//}