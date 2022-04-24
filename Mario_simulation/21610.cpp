#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using pii = pair<int,int>;
using ll = long long;
int N, M, basket[51][51], check[51][51];
int dy[] = {-1,-1,-1,0,1,1,1,0,-1};
int dx[] ={-1,0,-1,-1,-1,0,1,1, 1};
deque<pii> cloud;

void move_cloud(int d, int s) {
    int sz = cloud.size();
    int idx = 0;
    while(sz--) {
        auto [x, y] = cloud[idx];
        int nx = (x + dx[d] * s) % N;
        int ny = (y + dy[d] * s) % N;
        if (nx <= 0) nx += N;
        if (ny <= 0) ny += N;
        cloud.pop_front();
        cloud.emplace_back(nx,ny);
    }
}

void make_rain() {
    for (auto [x, y] : cloud) {
        basket[x][y]++;
        check[x][y] = 1;
    }
}

void copy_water() {
    int sz = cloud.size();
    int idx = 0;
    while (sz--) {
        auto [x, y] = cloud[idx];
        int cnt = 0; //물이 있는 바구니 수
        for (int i = 2; i <= 8; i+=2) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 1 || ny < 1 || nx > N || ny > N) continue;
            if (basket[nx][ny]) cnt++;
        }
        basket[x][y] += cnt;
        cloud.pop_front();
    }
}

void make_cloud() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (!check[i][j] && basket[i][j] >= 2) {
                cloud.emplace_back(i,j);
                basket[i][j] -= 2;
            }
        }
    }
}

void print() {
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            ans += basket[i][j];
        }
    }
    cout << ans;
}

int main() {
    fast_io;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> basket[i][j];
        }
    }

    cloud.emplace_back(N, 1);
    cloud.emplace_back(N,2);
    cloud.emplace_back(N-1,1);
    cloud.emplace_back(N-1,2);

    for (int i = 0; i < M; i++) {
        int d, s; cin >> d >> s;

        move_cloud(d, s);
        make_rain();
        copy_water();
        make_cloud();
        memset(check,0,sizeof(check));
    }

    print();
}