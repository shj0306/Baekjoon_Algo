//#include <bits/stdc++.h>
//#define all(x) (x).begin(), (x).end()
//#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
//using namespace std;
//using pii = pair<int,int>;
//using ll = long long;
//int n, m;
//int a[52][52];
//int visit[52][52];
//int d, s;
//int dx[9] = {0,0,-1,-1,-1,0,1,1,1};
//int dy[9] = {0,-1,-1,0,1,1,1,0,-1};
//
//queue<pair<int,int>> cloud;
//
//void shift() {
//    int Csize = cloud.size();
//    for (int i = 1; i <= Csize; i++) {
//        auto now = cloud.front();
//        int nx = now.first + dx[d] * s;
//        int ny = now.second + dy[d] * s;
//        cloud.pop();
//        while (nx < 1)
//            nx = nx + n;
//        while (nx > n)
//            nx = nx - n;
//        while (ny < 1)
//            ny = ny + n;
//        while (ny > n)
//            ny = ny - n;
//        a[nx][ny]++;
//        cloud.push({ nx,ny });
//        visit[nx][ny] = 1;
//    }
//}
//void Wcopy() {
//    int Csize = cloud.size();
//    for (int i = 1; i <= Csize; i++) {
//        auto now = cloud.front();//4¹ø ½ÃÀÛ
//        int Wcnt = 0;
//        cloud.pop();
//        for (int j = 2; j <= 9; j = j + 2) {
//            int nx = now.first + dx[j];
//            int ny = now.second + dy[j];
//            if (nx <= n && nx >= 1 && ny <= n && ny >= 1 && a[nx][ny] !=0) {
//                Wcnt++;
//            }
//        }
//        a[now.first][now.second] += Wcnt;
//    }
//}
//void Mcloud() {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (a[i][j] >= 2 && visit[i][j] != 1) {
//                cloud.push({ i,j });
//                a[i][j] -= 2;
//            }
//            visit[i][j] = 0;
//        }
//    }
//}
//void prt() {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            printf("%3d", a[i][j]);
//        }
//        cout << endl;
//    }
//}
//int main() {
//    fast_io;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> a[i][j];
//        }
//    }
//    cloud.push({ n,1 });
//    cloud.push({ n,2 });
//    cloud.push({ n-1,1 });
//    cloud.push({ n-1,2 });
//    for (int i = 1; i <= m; i++) {
//        cin >> d >> s;
//        shift();
//        //prt();
//        Wcopy();
//        //prt();
//        Mcloud();
//        //prt();
//    }
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            sum += a[i][j];
//        }
//    }
//    cout << sum;
//}